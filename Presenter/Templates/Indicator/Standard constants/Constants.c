    const bool True = true;
    const bool False = false;
    const bool TRUE = true;
    const bool FALSE = false;                
    Mq4Null NULL;
    const int EMPTY = -1;
    const double EMPTY_VALUE = double.NaN;
    const int WHOLE_ARRAY = 0;

    const int MODE_SMA = 0; //Simple moving average
    const int MODE_EMA = 1; //Exponential moving average,
    const int MODE_SMMA = 2; //Smoothed moving average,
    const int MODE_LWMA = 3; //Linear weighted moving average. 
    
    const int PRICE_CLOSE = 0; //Close price. 
    const int PRICE_OPEN = 1; //Open price. 
    const int PRICE_HIGH = 2; //High price. 
    const int PRICE_LOW = 3; //Low price. 
    const int PRICE_MEDIAN = 4; //Median price, (high+low)/2. 
    const int PRICE_TYPICAL = 5; //Typical price, (high+low+close)/3. 
    const int PRICE_WEIGHTED = 6; //Weighted close price, (high+low+close+close)/4. 

    const int DRAW_LINE = 0;
    const int DRAW_SECTION = 1;
    const int DRAW_HISTOGRAM = 2;
    const int DRAW_ARROW = 3;
    const int DRAW_ZIGZAG = 4;
    const int DRAW_NONE = 12;

    const int STYLE_SOLID = 0;
    const int STYLE_DASH = 1;
    const int STYLE_DOT = 2;
    const int STYLE_DASHDOT = 3;
    const int STYLE_DASHDOTDOT = 4;

    const int MODE_OPEN = 0;
    const int MODE_LOW = 1;
    const int MODE_HIGH = 2;
    const int MODE_CLOSE = 3;
    const int MODE_VOLUME = 4;
    const int MODE_TIME = 5;
    const int MODE_BID = 9;
    const int MODE_ASK = 10;
    //const int MODE_POINT = 11;
    const int MODE_DIGITS = 12;
    /*const int MODE_SPREAD = 13;
    const int MODE_STOPLEVEL = 14;
    const int MODE_LOTSIZE = 15;
    const int MODE_TICKVALUE = 16;
    const int MODE_TICKSIZE = 17;
    const int MODE_SWAPLONG = 18;
    const int MODE_SWAPSHORT = 19;
    const int MODE_STARTING = 20;
    const int MODE_EXPIRATION = 21;
    const int MODE_TRADEALLOWED = 22;
    const int MODE_MINLOT = 23;
    const int MODE_LOTSTEP = 24;
    const int MODE_MAXLOT = 25;
    const int MODE_SWAPTYPE = 26;
    const int MODE_PROFITCALCMODE = 27;
    const int MODE_MARGINCALCMODE = 28;
    const int MODE_MARGININIT = 29;
    const int MODE_MARGINMAINTENANCE = 30;
    const int MODE_MARGINHEDGED = 31;
    const int MODE_MARGINREQUIRED = 32;
    const int MODE_FREEZELEVEL = 33;*/

    const int OBJ_VLINE = 0;
        const int OBJ_HLINE = 1;
        const int OBJ_TREND = 2;
        /*const int OBJ_TRENDBYANGLE = 3;
        const int OBJ_REGRESSION = 4;
        const int OBJ_CHANNEL = 5;
        const int OBJ_STDDEVCHANNEL = 6;
        const int OBJ_GANNLINE = 7;
        const int OBJ_GANNFAN = 8;
        const int OBJ_GANNGRID = 9;
        const int OBJ_FIBO = 10;
        const int OBJ_FIBOTIMES = 11;
        const int OBJ_FIBOFAN = 12;
        const int OBJ_FIBOARC = 13;
        const int OBJ_EXPANSION = 14;
        const int OBJ_FIBOCHANNEL = 15;*/
        const int OBJ_RECTANGLE = 16;
        /*const int OBJ_TRIANGLE = 17;
        const int OBJ_ELLIPSE = 18;
        const int OBJ_PITCHFORK = 19;
        const int OBJ_CYCLES = 20;*/
        const int OBJ_TEXT = 21;
        const int OBJ_ARROW = 22;
        const int OBJ_LABEL = 23;
        
        const int OBJPROP_TIME1 = 0;
        const int OBJPROP_PRICE1 = 1;
        const int OBJPROP_TIME2 = 2;
        const int OBJPROP_PRICE2 = 3;
        const int OBJPROP_TIME3 = 4;
        const int OBJPROP_PRICE3 = 5;
        const int OBJPROP_COLOR = 6;
        const int OBJPROP_STYLE = 7;
        const int OBJPROP_WIDTH = 8;
        const int OBJPROP_BACK = 9;
        const int OBJPROP_RAY = 10;
        const int OBJPROP_ELLIPSE = 11;
        const int OBJPROP_SCALE = 12;
        const int OBJPROP_ANGLE = 13;
        const int OBJPROP_ARROWCODE = 14;
        const int OBJPROP_TIMEFRAMES = 15;
        const int OBJPROP_DEVIATION = 16;
        const int OBJPROP_FONTSIZE = 100;
        const int OBJPROP_CORNER = 101;
        const int OBJPROP_XDISTANCE = 102;
        const int OBJPROP_YDISTANCE = 103;
        const int OBJPROP_FIBOLEVELS = 200;
        const int OBJPROP_LEVELCOLOR = 201;
        const int OBJPROP_LEVELSTYLE = 202;
        const int OBJPROP_LEVELWIDTH = 203;

        const int PERIOD_M1 = 1;
    const int PERIOD_M5 = 5;
    const int PERIOD_M15 = 15;
    const int PERIOD_M30 = 30;
    const int PERIOD_H1 = 60;
    const int PERIOD_H4 = 240;
    const int PERIOD_D1 = 1440;
    const int PERIOD_W1 = 10080;
    const int PERIOD_MN1 = 43200;

    const int TIME_DATE = 1;
    const int TIME_MINUTES = 2;
    const int TIME_SECONDS = 4;
	
	const int MODE_MAIN = 0;
    const int MODE_PLUSDI = 1;
    const int MODE_MINUSDI = 2;
    const int MODE_SIGNAL = 1;

    const int MODE_UPPER = 1;
    const int MODE_LOWER = 2;

    const int CLR_NONE = 32768; 

    const int White = 16777215;
    const int Snow = 16448255;
    const int MintCream = 16449525;
    const int LavenderBlush = 16118015;
    const int AliceBlue = 16775408;
    const int Honeydew = 15794160;
    const int Ivory = 15794175;
    const int Seashell = 15660543;
    const int WhiteSmoke = 16119285;
    const int OldLace = 15136253;
    const int MistyRose = 14804223;
    const int Lavender = 16443110;
    const int Linen = 15134970;
    const int LightCyan = 16777184;
    const int LightYellow = 14745599;
    const int Cornsilk = 14481663;
    const int PapayaWhip = 14020607;
    const int AntiqueWhite = 14150650;
    const int Beige = 14480885;
    const int LemonChiffon = 13499135;
    const int BlanchedAlmond = 13495295;
    const int LightGoldenrod = 13826810;
    const int Bisque = 12903679;
    const int Pink = 13353215;
    const int PeachPuff = 12180223;
    const int Gainsboro = 14474460;
    const int LightPink = 12695295;
    const int Moccasin = 11920639;
    const int NavajoWhite = 11394815;
    const int Wheat = 11788021;
    const int LightGray = 13882323;
    const int PaleTurquoise = 15658671;
    const int PaleGoldenrod = 11200750;
    const int PowderBlue = 15130800;
    const int Thistle = 14204888;
    const int PaleGreen = 10025880;
    const int LightBlue = 15128749;
    const int LightSteelBlue = 14599344;
    const int LightSkyBlue = 16436871;
    const int Silver = 12632256;
    const int Aquamarine = 13959039;
    const int LightGreen = 9498256;
    const int Khaki = 9234160;
    const int Plum = 14524637;
    const int LightSalmon = 8036607;
    const int SkyBlue = 15453831;
    const int LightCoral = 8421616;
    const int Violet = 15631086;
    const int Salmon = 7504122;
    const int HotPink = 11823615;
    const int BurlyWood = 8894686;
    const int DarkSalmon = 8034025;
    const int Tan = 9221330;
    const int MediumSlateBlue = 15624315;
    const int SandyBrown = 6333684;
    const int DarkGray = 11119017;
    const int CornflowerBlue = 15570276;
    const int Coral = 5275647;
    const int PaleVioletRed = 9662683;
    const int MediumPurple = 14381203;
    const int Orchid = 14053594;
    const int RosyBrown = 9408444;
    const int Tomato = 4678655;
    const int DarkSeaGreen = 9419919;
    const int MediumAquamarine = 11193702;
    const int GreenYellow = 3145645;
    const int MediumOrchid = 13850042;
    const int IndianRed = 6053069;
    const int DarkKhaki = 7059389;
    const int SlateBlue = 13458026;
    const int RoyalBlue = 14772545;
    const int Turquoise = 13688896;
    const int DodgerBlue = 16748574;
    const int MediumTurquoise = 13422920;
    const int DeepPink = 9639167;
    const int LightSlateGray = 10061943;
    const int BlueViolet = 14822282;
    const int Peru = 4163021;
    const int SlateGray = 9470064;
    const int Gray = 8421504;
    const int Red = 255;
    const int Magenta = 16711935;
    const int Blue = 16711680;
    const int DeepSkyBlue = 16760576;
    const int Aqua = 16776960;
    const int SpringGreen = 8388352;
    const int Lime = 65280;
    const int Chartreuse = 65407;
    const int Yellow = 65535;
    const int Gold = 55295;
    const int Orange = 42495;
    const int DarkOrange = 36095;
    const int OrangeRed = 17919;
    const int LimeGreen = 3329330;
    const int YellowGreen = 3329434;
    const int DarkOrchid = 13382297;
    const int CadetBlue = 10526303;
    const int LawnGreen = 64636;
    const int MediumSpringGreen = 10156544;
    const int Goldenrod = 2139610;
    const int SteelBlue = 11829830;
    const int Crimson = 3937500;
    const int Chocolate = 1993170;
    const int MediumSeaGreen = 7451452;
    const int MediumVioletRed = 8721863;
    const int FireBrick = 2237106;
    const int DarkViolet = 13828244;
    const int LightSeaGreen = 11186720;
    const int DimGray = 6908265;
    const int DarkTurquoise = 13749760;
    const int Brown = 2763429;
    const int MediumBlue = 13434880;
    const int Sienna = 2970272;
    const int DarkSlateBlue = 9125192;
    const int DarkGoldenrod = 755384;
    const int SeaGreen = 5737262;
    const int OliveDrab = 2330219;
    const int ForestGreen = 2263842;
    const int SaddleBrown = 1262987;
    const int DarkOliveGreen = 3107669;
    const int DarkBlue = 9109504;
    const int MidnightBlue = 7346457;
    const int Indigo = 8519755;
    const int Maroon = 128;
    const int Purple = 8388736;
    const int Navy = 8388608;
    const int Teal = 8421376;
    const int Green = 32768;
    const int Olive = 32896;
    const int DarkSlateGray = 5197615;
    const int DarkGreen = 25600;
    const int Black = 0;  

	const int SYMBOL_LEFTPRICE = 5;
	const int SYMBOL_RIGHTPRICE = 6;