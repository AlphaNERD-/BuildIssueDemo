//  Copyright 2015 FUJITSU COMPONENT LIMITED. All rights reserved.
//


extern NSString * const FCLReceivedNotificationForMultiplePrinters;

enum:int{
	Error_Failed = 0,
	Error_Success = 1,
	Error_NoDevice = 2,
	Error_NoExistFile = 3,
	Error_IllegalParameter = 4,
	Error_IllegalImage = 5,
	Error_PageModeOutSide = 6,
	Error_NotPageMode = 7,
	Error_IllegalFontDataSize = 8,
	Error_MarkNoDetect = 9,
	Error_AlreadyPageMode = 10,
	Error_PrinterError = 11,
	Error_AlreadyConnectedPrinter = 12,
	Error_MemoryAllocation = 13,
	Error_Timeout = 14,
	Error_AlreadyConnectedPrinterOtherInstance = 15,
	Error_IllegalFileFormat = 16,
	Error_PrinterNotSupportMultipleConnections = 17,
	
};

enum:int{
	PrinterData_Status = 0,
	PrinterData_FirmwareVersion = 1,
	
	PrinterData_ConnectedPrinter = 4,
	PrinterData_DisconnectedPrinter = 5,
};

enum:int{
	Barcode_Upca = 65,
	Barcode_Upce = 66,
	Barcode_Ean8 = 68,
	Barcode_Ean13 = 67,
	Barcode_Itf = 70,
	Barcode_Codabar = 71,
	Barcode_Code39 = 69,
	Barcode_Code128 = 73,
	
	MaxiCodeMode_2 = 100,
	MaxiCodeMode_3 = 101,
	MaxiCodeMode_4 = 102,
	MaxiCodeMode_5 = 103,
	MaxiCodeMode_6 = 104,
	
	GS1Databar_14 = 120,
	GS1Databar_14_T = 121,
	GS1Databar_14_S = 122,
	GS1Databar_14_SO = 132,
	GS1Databar_L = 124,
	GS1Databar_E = 125,
};

enum:int{
	Orientation_None = 0,
	Orientation_L90 = 1,
	Orientation_180 = 2,
	Orientation_R90 = 3,
};

enum:int{
	EndPageMode = 0,
	PageDataKeep = 1,
	PageDataClear = 2,
	CancelPageMode = 3,
};

enum:int{
	Dither_Bayer_2x2 = 0,
	Dither_Bayer_4x4 = 1,
	Dither_Bayer_8x8 = 2,
	Dither_Bayer_16x16 = 3,
	Dither_Clustared_2x2 = 4,
	Dither_Clustared_4x4 = 5,
	Dither_Clustared_8x8 = 6,
	Dither_NoDithering = 7,
};

enum:int{
	QRModule_3x3 = 0,
	QRModule_4x4 = 1,
};

enum:int{
	QRLevel_H = 0,
	QRLevel_Q = 1,
	QRLevel_M = 2,
	QRLevel_L = 3,
};

enum:int{
	Masking_None = 0x8,
	Masking_Auto = 0xff,
};

enum:int{
	BTSecurityLevel_1 = 1,
	BTSecurityLevel_3 = 3,
	BTSecurityLevel_4 = 4,
};

enum:int{
	CharacterCode_Katakana = 0x41,
	CharacterCode_ExpandedGraphics = 0x42,
};

enum:int{
	CharacterSet_USA = 0,
	CharacterSet_French = 1,
	CharacterSet_German = 2,
	CharacterSet_UK = 3,
	CharacterSet_Denmark = 4,
	CharacterSet_Sweden = 5,
	CharacterSet_Italy = 6,
	CharacterSet_Spain = 7,
	CharacterSet_Japan = 8,
	CharacterSet_Norway = 9,
	CharacterSet_Denmark_2 = 10,
	CharacterSet_Spain_2 = 11,
	CharacterSet_Ratin_America = 12,
	CharacterSet_Japan_2 = 13,
};

enum:int{
	Font_8x16 = 0,
	Font_12x24 = 1,
	Font_16x16 = 2,
	Font_24x24 = 3,
};



enum:int{
	FontDSize_05 = 0x08,
	FontDSize_10 = 0x00,
	FontDSize_15 = 0x09,
	FontDSize_20 = 0x01,
	FontDSize_25 = 0x0A,
	FontDSize_30 = 0x02,
	FontDSize_35 = 0x0B,
	FontDSize_40 = 0x03,
};

enum:int{
	UnderLine_None = 0,
	UnderLine_1Dot = 1,
	UnderLine_2Dot = 2,
};

enum:int{
	PrintSize_Normal = 0,
	PrintSize_Wx2 = 1,
	PrintSize_Hx2 = 2,
	PrintSize_X4 = 3,
};

enum:int{
	Default_TimeOut = -1
};

enum:int{
	Ftp_62hwsl000 = 2,
	
};

enum:int{
	HRI_None = 0,
	HRI_Below = 2,
};

enum:int{
	Rotation_None = 0,
	Rotation_L90 = 3,
	Rotation_180 = 2,
	Rotation_R90 = 1,
};

enum:int{
	Direction_LeftToRight = 0,
};

enum:int{
	Origin_UpperLeft = 1,
};

enum:int{
	CustomerBarcodeSize_8pt = 0,
	CustomerBarcodeSize_10pt = 1,
	CustomerBarcodeSize_11_5pt = 2,
};

enum:int{
	PaperType_ContinuousPaper = 0x40,
	PaperType_Label = 0x41,
};

enum:int{
	Default_Energy = -1,
};

enum:int{
	Division_Auto = 0,
	Division_Fixed_6 = 6,
};

enum:unsigned int{
	Language_Japanese = 1,
	Language_TraditionalChinese = 2,
};