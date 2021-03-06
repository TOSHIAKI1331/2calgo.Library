﻿using System;
using System.Linq;
using System.Text.RegularExpressions;
using _2calgo.Parser.Extensions;

namespace _2calgo.Parser.CodeAdapter
{
    internal static class Declarations
    {
        private static readonly Regex DeclarationWithAssignmentRegex = new Regex(@"(?<typeWithStatic>(static\s+){0,1}(?<type>(?<!\w)(int|double|char|string|bool)))\s+(?<declarations>[^;]+);", RegexOptions.Compiled);

        public static string SplitDeclarationsAndAssignments(this string code)
        {
            foreach (var declarationsWithAssignments in DeclarationWithAssignmentRegex.Matches(code)
                .OfType<Match>()
                .Where(match => match.Groups["type"].Value.IsSupported()))
            {
                var typeWithStatic = declarationsWithAssignments.Groups["typeWithStatic"].Value;
                if (IsInsideString(code, code.IndexOf(declarationsWithAssignments.Value)) || typeWithStatic.Contains("static"))
                    continue;

                var type = declarationsWithAssignments.Groups["type"].Value;
                var declarationsWithoutType = declarationsWithAssignments.Value.Substring(type.Length, declarationsWithAssignments.Length - type.Length - 1);
                var splittedDeclarations = declarationsWithoutType.SplitByComma();

                var assignments = splittedDeclarations
                    .Where(v => v.Contains("=") && !IsArrayAssinment(v));

                var replacement = string.Join(";" + Environment.NewLine, assignments);
                if (replacement != string.Empty)
                    replacement += ";";

                code = code.Replace(declarationsWithAssignments.Value, replacement);
                foreach (var declaration in splittedDeclarations)
                {
                    var variable = GetVariable(declaration);
                    var defaultValue = string.Empty;
                    if (variable[variable.Length - 1] != ']')
                        defaultValue = GetDefaultValue(type);

                    code = code.Insert(0, String.Format("\n{0} {1} {2};", type, variable, defaultValue));
                }
            }
            return code;
        }

        private static bool IsArrayAssinment(string assignment)
        {
            var bracketIndex = assignment.IndexOf('[');
            var assignmentIndex = assignment.IndexOf('=');

            if (bracketIndex == -1)
                return false;

            return bracketIndex < assignmentIndex;
        }

        private static bool IsInsideString(string code, int index)
        {
            var stringStructure = new InnerStructures.StringStructure();
            for (var i = 0; i <= index; i++)
                stringStructure.Handle(code[i]);
            return stringStructure.IsInsideString;
        }

        private static string GetDefaultValue(string type)
        {
            switch (type)
            {
                case "int":
                case "double":
                    return "= 0";
                case "string":
                    return "= \"\"";
                case "bool":
                    return "= false";
            }
            return string.Empty;
        }

        public static string SplitDeclarations(this string code)
        {
            foreach (var declarationsWithAssignments in DeclarationWithAssignmentRegex.Matches(code)
                .OfType<Match>()
                .Where(match => match.Groups["type"].Value.IsSupported()))
            {
                var type = declarationsWithAssignments.Groups["type"];
                var declarationsWithoutType = declarationsWithAssignments.Groups["declarations"].Value;
                var splittedDeclarations = declarationsWithoutType.SplitByComma();
                
                code = code.Replace(declarationsWithAssignments.Value, string.Empty);
                foreach (var declaration in splittedDeclarations)
                {
                    code = code.Insert(0, String.Format("\n{0} {1};", type, declaration));
                }
            }
            return code;
        }

        private static string GetVariable(string declaration)
        {
            var assignOperatorPosition = declaration.IndexOf("=");
            if (assignOperatorPosition == -1)
                return declaration.Trim();

            return declaration.Substring(0, assignOperatorPosition).Trim();
        }
    }
}