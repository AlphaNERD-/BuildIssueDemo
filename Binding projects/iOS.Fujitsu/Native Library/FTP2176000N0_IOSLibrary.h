
//  Copyright 2015 FUJITSU COMPONENT LIMITED. All rights reserved.



#import <Foundation/Foundation.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <UIKit/UIKit.h>
#import "FTPIOSCommonHeader.h"



@interface FTP2176000N0_IOSLibrary : NSObject {

}


//Instance method
- (int)startPrinter:(NSString *)model protocolName:(NSString *)protocolName series:(int)series;
- (int)closePrinter;
- (int)detectMark;
- (int)dotfeedPaper:(int)nDotLineFeed;
- (int)linefeedPaper:(int)nLineFeed;
- (int)printBarcode:(int)symbol data:(NSData *)data height:(int)height narrow:(int)narrowBar wide:(int)wideBar hri:(int)hri;
- (int)printBitimage:(NSData *)data width:(int)widthDots height:(int)heightDots compression:(BOOL)dataCompression;
- (int)printCharacterString:(NSString *)string;
- (int)printCustomerBarcode:(NSData *)data size:(int)size;
- (int)printGS1DataBar:(NSData *)data dataBarType:(int)gs1DataBarType module:(int)moduleSize numberOfSegments:(int)segments;
- (int)printMaxiCode:(NSData *)data mode:(int)symbolMode number:(int)symbolNumber count:(int)symbolCount;
- (int)printPage:(int)mode;
- (int)printPDF417Code:(NSData *)data columnsOrSteps:(int)columnsOrSteps width:(int)moduleWidth height:(int)moduleHeight errorLevel:(int)errorCorrectionLevel;
- (int)printPicture:(UIImage *)image dithering:(int)dithering width:(int)widthDots height:(int)heightDots;
- (int)printQRCode:(NSData *)data magnification:(int)moduleMagnificaton errorLevel:(int)errorCorrectionLevel concatenation:(BOOL)qrConcatenation code:(int)codeNumber division:(int)divisionNumber parity:(unsigned char)dataParity masking:(int)masking;
- (int)printRegisteredImage:(int)number mode:(int)printMode;
- (int)sendData:(NSData *)data;
- (int)startPage:(CGRect)rect;
- (int)registBitimage:(int)imageID width:(int)widthBytes height:(int)heightDots data:(NSData *)data;
- (int)registPicture:(int)imageID image:(UIImage *)image dithering:(int)dithering width:(int)widthDots height:(int)heightDots;
- (int)setAbsolutePosition:(CGPoint)point;
- (int)setCharacterStyle:(int)size kanjiSize:(int)kanjiSize fontHSize:(int)fontHSize fontVSize:(int)fontVSize bold:(BOOL)bold bwReverse:(BOOL)blackWhiteReverse underLine:(int)underLine space:(int)space leftOfKanji:(int)leftOfKanji rightOfKanji:(int)rightOfKanji;
- (int)setInternationalCharacterCode:(int)characterCodeTable country:(int)country;
- (int)setLineFeedAmount:(int)dotLines page:(int)page;
- (int)setLanguageOfCharacterString:(unsigned int)language;
- (int)setOrientation:(int)orientation;
- (int)setPaperType:(int)paperType feedBeforePrintPage:(int)feedBeforePrintPage feedAfterMarkDetection:(int)feedAfterMarkDetection autoFeedLength:(int)autoFeedlength;
- (int)setPrintSpeed:(int)speed;
- (int)setRelativePosition:(CGPoint)point;
- (int)setRotation:(int)rotation;
- (int)setAutoPowerOffTime:(int)minutes;
- (int)setBluetoothSecurityMode:(int)security encryption:(BOOL)encryptionOn PINCode:(NSString *)PINCode deviceName:(NSString *)deviceName;
- (int)setPrintQuality:(int)paperType energy:(int)energy halfPitch:(BOOL)halfPitch thermalHeadDivision:(int)division;
- (int)getPrinterData:(int)dataType;

- (int)waitPrintEnd:(int)timeOut;

@property (nonatomic, readonly)NSString* version;

@end


