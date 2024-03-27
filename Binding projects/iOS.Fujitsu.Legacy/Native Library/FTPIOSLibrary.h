//
//  FTPIOSLibrary.h
//  iOS_Library
//



#import <Foundation/Foundation.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <UIKit/UIKit.h>



extern NSString *FCLReceivedNotification;
extern NSString *FCLReceivedNotificationForMultiplePrinters;

@interface FTPIOSLibrary : NSObject {

    
}


+ (id)openLibrary;


- (int)startPrinter:(NSString *)model protocol:(NSString *)protocol;
- (int)startPrinter:(NSString *)model protocolName:(NSString *)protocolName series:(int)series;
- (int)closePrinter;
- (int)detectMark;
- (int)dotfeedPaper:(int)nDotLineFeed;
- (int)linefeedPaper:(int)nLineFeed;
- (int)printBarcode:(int)symbol data:(NSData *)data height:(int)height narrow:(int)narrowBar wide:(int)wideBar rotate:(BOOL)rotate;
- (int)printBitimage:(NSData *)data width:(int)widthDots height:(int)heightDots compression:(BOOL)dataCompression;
- (int)printCharacterString:(NSString *)string;
- (int)printGS1DataBar:(NSData *)data dataBarType:(int)gs1DataBarType module:(int)moduleSize numberOfSegments:(int)segments rotate:(BOOL)rotate;
- (int)printMaxiCode:(NSData *)data mode:(int)symbolMode number:(int)symbolNumber count:(int)symbolCount;
- (int)printPage:(int)mode;
- (int)printPDF417Code:(NSData *)data columnsOrSteps:(int)columnsOrSteps width:(int)moduleWidth height:(int)moduleHeight errorLevel:(int)errorCorrectionLevel rotate:(BOOL)rotate;
- (int)printPicture:(UIImage *)image dithering:(int)dithering width:(int)widthDots height:(int)heightDots;
- (int)printQRCode:(NSData *)data magnification:(int)moduleMagnificaton errorLevel:(int)errorCorrectionLevel concatenation:(BOOL)qrConcatenation code:(int)codeNumber division:(int)divisionNumber parity:(unsigned char)dataParity masking:(int)masking;
- (int)printRegisteredImage:(int)number mode:(int)printMode;
- (int)sendData:(NSData *)data;
- (int)startPage:(CGRect)rect;
- (int)referFrameOverlay:(int)page;
- (int)registBitimage:(int)imageID width:(int)widthBytes height:(int)heightDots data:(NSData *)data;
- (int)registDownloadCharacterData:(NSData *)data isKanji:(BOOL)isKanji firstByte:(UInt8)firstByte secondByte:(UInt8)secondByte;
- (int)registPicture:(int)imageID image:(UIImage *)image dithering:(int)dithering width:(int)widthDots height:(int)heightDots;
- (int)setAbsolutePosition:(CGPoint)point;
- (int)setCharacterStyle:(int)size kanjiSize:(int)kanjiSize doubleSize:(int)doubleSize bold:(BOOL)bold bwReverse:(BOOL)blackWhiteReverse underLine:(int)underLine space:(int)space leftOfKanji:(int)leftOfKanji rightOfKanji:(int)rightOfKanji;
- (int)setFrameOverlay:(int)page;
- (int)setInternationalCharacterCode:(int)characterCodeTable country:(int)country;
- (int)setLineFeedAmount:(int)dotLines page:(int)page;
- (int)setOrientation:(int)orientation;
- (int)setPaperType:(BOOL)paperWithMark markFeedLength:(int)length;
- (int)setPrintSpeed:(int)speed;
- (int)setRelativePosition:(CGPoint)point;
- (int)setAutoPowerOffTime:(int)minutes;
- (int)setBluetoothSecurityMode:(int)security encryption:(BOOL)encryptionOn PINCode:(NSString *)PINCode deviceName:(NSString *)deviceName;
- (int)setPrintQuality:(int)paperType energy:(int)energy halfPitch:(BOOL)halfPitch;
- (int)getPrinterData:(int)dataType;
- (int)waitPrintEnd:(int)timeOut;
- (int)printThaiCharacterString:(NSString *)string;


@end


enum{
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
    Error_AlreadyConnectedPrinterOtherDevice = 15,
};

enum{
    PrinterData_Status = 0,
    PrinterData_FirmwareVersion = 1,
    PrinterData_Sensor = 2,
    PrinterData_RegistrableArea = 3,
	PrinterData_ConnectedPrinter = 4,
	PrinterData_DisconnectedPrinter = 5,
};

enum{
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

enum{
    Orientation_None = 0,
    Orientation_L90 = 1,
    Orientation_180 = 2,
    Orientation_R90 = 3,
};

enum{
    EndPageMode = 0,
    PageDataKeep = 1,
    PageDataClear = 2,
};

enum{
    Dither_Bayer_2x2 = 0,
    Dither_Bayer_4x4 = 1,
    Dither_Bayer_8x8 = 2,
    Dither_Bayer_16x16 = 3,
    Dither_Clustared_2x2 = 4,
    Dither_Clustared_4x4 = 5,
    Dither_Clustared_8x8 = 6,
};

enum{
    QRModule_3x3 = 0,
    QRModule_4x4 = 1,
};

enum{
    QRLevel_H = 0,
    QRLevel_Q = 1,
    QRLevel_M = 2,
    QRLevel_L = 3,
};

enum{
    Masking_None = 0x8,
    Masking_Auto = 0xff,
};


enum{
    BTSecurityLevel_1 = 1,
    BTSecurityLevel_3 = 3,
    BTSecurityLevel_4 = 4,
};

enum{
    PrintSpeed_High = 0x60,
    PrintSpeed_Medium = 0x62,
    PrintSpeed_Low = 0x63,
    PrintSpeed_6Div = 0x64,
	PrintSpeed_FixedDiv = 0x64,
};


enum{
    CharacterCode_Domestic = 0x41,
    CharacterCode_OverSeas = 0x42,
};

enum{
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

enum{
    Font_8x16 = 0,
    Font_12x24 = 1,
    Font_16x16 = 2,
    Font_24x24 = 3,
};    

enum{
    FontDSize_None = 0,
    FontDSize_Wx2 = 1,
    FontDSize_Hx2 = 2,
    FontDSize_X4 = 3,
};

enum{
    UnderLine_None = 0,
    UnderLine_1Dot = 1,
    UnderLine_2Dot = 2,
};

enum{
    PrintSize_Normal = 0,
    PrintSize_Wx2 = 1,
    PrintSize_Hx2 = 2,
    PrintSize_X4 = 3,
};

enum{
    Default_TimeOut = -1
};

enum{
	Ftp_628wsl210 = 0,
	Ftp_638wsl110 = 1,
};










