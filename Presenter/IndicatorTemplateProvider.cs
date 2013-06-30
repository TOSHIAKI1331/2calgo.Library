﻿using System;
using System.Collections.Generic;
using System.Linq;

namespace _2calgo.Presenter
{
    static class IndicatorTemplateProvider
    {
        private const string FolderPath = @"pack://application:,,,/2calgo.Presenter;component/Templates/Indicator/";
        private const string ChartObjects = "ChartObjects";
        private const string DataSeries = "DataSeries";
        private static readonly IEnumerable<string> PartNames = new[]
            {
                "Custom indicators",
                "Debug",
                "Predefined variables",
                "Constants",
                "Math and Trig",
                "Conversion functions",
                "Window functions",
                "String functions",
                "Date and Time functions",
                "Messages",
                "Validation",
                "Timeseries access",
                "Indicators",
                "Common functions",
                "Array functions",
                "Mq4Double",
                ChartObjects + "/Mq4ChartObjects",
                ChartObjects + "/Mq4Object",
                ChartObjects + "/Mq4VerticalLine",
                ChartObjects + "/Mq4HorizontalLine",
                ChartObjects + "/Mq4Text",
                ChartObjects + "/Mq4Label",
                ChartObjects + "/Mq4TrendLine",
                ChartObjects + "/Mq4Rectangle",
                ChartObjects + "/Object functions",
                "CashedStandardIndicators",
                DataSeries + "/DataSeriesExtremums",
                DataSeries + "/InvertedDataSeries",
                DataSeries + "/Mq4DataSeries",
                DataSeries + "/Mq4TimeSeries",
                DataSeries + "/NormalIndicatorDataSeries",
            };

        public static string GetTemplate()
        {
            var mainTemplate = StringResourceReader.Read(FolderPath + "MainTemplate.c");
            var parts = PartNames.Select(part => StringResourceReader.Read(FolderPath + part + ".c"));
            var allParts = string.Join(Environment.NewLine, parts);

            return mainTemplate.Replace("#Conditional_Part_PLACE_HOLDER#", allParts);
        }
    }
}
