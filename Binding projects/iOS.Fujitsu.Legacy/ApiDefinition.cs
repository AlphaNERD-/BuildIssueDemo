using System;
using System.Drawing;

using ObjCRuntime;
using Foundation;
using UIKit;

namespace iOS.Fujitsu.Legacy
{

	// The first step to creating a binding is to add your native library ("libNativeLibrary.a")
	// to the project by right-clicking (or Control-clicking) the folder containing this source
	// file and clicking "Add files..." and then simply select the native library (or libraries)
	// that you want to bind.
	//
	// When you do that, you'll notice that MonoDevelop generates a code-behind file for each
	// native library which will contain a [LinkWith] attribute. MonoDevelop auto-detects the
	// architectures that the native library supports and fills in that information for you,
	// however, it cannot auto-detect any Frameworks or other system libraries that the
	// native library may depend on, so you'll need to fill in that information yourself.
	//
	// Once you've done that, you're ready to move on to binding the API...
	//
	//
	// Here is where you'd define your API definition for the native Objective-C library.
	//
	// For example, to bind the following Objective-C class:
	//
	//     @interface Widget : NSObject {
	//     }
	//
	// The C# binding would look like this:
	//
	//     [BaseType (typeof (NSObject))]
	//     interface Widget {
	//     }
	//
	// To bind Objective-C properties, such as:
	//
	//     @property (nonatomic, readwrite, assign) CGPoint center;
	//
	// You would add a property definition in the C# interface like so:
	//
	//     [Export ("center")]
	//     PointF Center { get; set; }
	//
	// To bind an Objective-C method, such as:
	//
	//     -(void) doSomething:(NSObject *)object atIndex:(NSInteger)index;
	//
	// You would add a method definition to the C# interface like so:
	//
	//     [Export ("doSomething:atIndex:")]
	//     void DoSomething (NSObject object, int index);
	//
	// Objective-C "constructors" such as:
	//
	//     -(id)initWithElmo:(ElmoMuppet *)elmo;
	//
	// Can be bound as:
	//
	//     [Export ("initWithElmo:")]
	//     IntPtr Constructor (ElmoMuppet elmo);
	//
	// For more information, see http://docs.xamarin.com/ios/advanced_topics/binding_objective-c_libraries
	//
	[BaseType(typeof(NSObject))]
	public partial interface FTPIOSLibrary
	{

		//		+ (id)openLibrary;
		[Static, Export("openLibrary")]
		NSObject OpenLibrary { get; }
		//NSObject OpenLibrary();

		//		- (int)startPrinter:(NSString *)model protocol:(NSString *)protocol;
		[Export("startPrinter:protocol:")]
		int StartPrinter(NSString model, NSString protocol);

		//		- (int)closePrinter;
		[Export("closePrinter")]
		int ClosePrinter { get; }

		//		[Export ("waitPrintEnd")]
		//		int WaitPrintEnd { get; }

		//		- (int)waitPrintEnd:(int)timeOut;
		//		[Export ("waitPrintEnd:")]
		//		int WaitPrintEnd (int timeOut);

		//		- (int)detectMark;
		[Export("detectMark")]
		int DetectMark { get; }

		//		- (int)dotfeedPaper:(int)nDotLineFeed;
		[Export("dotfeedPaper:")]
		int DotfeedPaper(int nDotLineFeed);

		//		- (int)linefeedPaper:(int)nLineFeed;
		[Export("linefeedPaper:")]
		int LinefeedPaper(int nLineFeed);

		//		- (int)printBarcode:(int)symbol data:(NSData *)data height:(int)height narrow:(int)narrowBar wide:(int)wideBar rotate:(BOOL)rotate;
		//		[Export ("printBarcode:data:height:narrow:wide:rotate:")]
		//		int PrintBarcode (int symbol, NSData data, int height, int narrowBar, int wideBar, bool rotate);

		//		- (int)printBitimage:(NSData *)data width:(int)widthDots height:(int)heightDots compression:(BOOL)dataCompression;
		//		[Export ("printBitimage:width:height:compression:")]
		//		int PrintBitimage (NSData data, int widthDots, int heightDots, bool dataCompression);

		//		- (int)printCharacterString:(NSString *)string;
		[Export("printCharacterString:")]
		int PrintCharacterString(NSString str);

		//		- (int)printGS1DataBar:(NSData *)data dataBarType:(int)gs1DataBarType module:(int)moduleSize numberOfSegments:(int)segments rotate:(BOOL)rotate;
		//		[Export ("printGS1DataBar:pGs1DataBarType:pModulSize:pSegements:pRotate:")]
		//		int PrintGS1DataBar (NSData data, int gs1DataBarType, int moduleSize, int segments, bool rotate);

		//		- (int)printMaxiCode:(NSData *)data mode:(int)symbolMode number:(int)symbolNumber count:(int)symbolCount;
		//		[Export ("printMaxiCode:pSymbolMode:pSymbolNumber:pSymbolCount:")]
		//		int PrintMaxiCode (NSData data, int symbolMode, int symbolNumber, int symbolCount);

		//		- (int)printPage:(int)mode;
		[Export("printPage:")]
		int PrintPage(int mode);

		//		- (int)printPDF417Code:(NSData *)data columnsOrSteps:(int)columnsOrSteps width:(int)moduleWidth height:(int)moduleHeight errorLevel:(int)errorCorrectionLevel rotate:(BOOL)rotate;
		//		[Export ("printPDF417Code:pColumsOrSteps:pModulWidth:pModuleHeight:pErrorCorrectionLevel:pRotate:")]
		//		int PrintPDF417Code (NSData data, int columnsOrSteps, int moduleWidth, int moduleHeight, int errorCorrectionLevel, bool rotate);

		//		- (int)printPicture:(UIImage *)image dithering:(int)dithering width:(int)widthDots height:(int)heightDots;
		[Export("printPicture:dithering:width:height:")]
		int PrintPicture(UIImage image, int dithering, int widthDots, int heightDots);

		//		- (int)printQRCode:(NSData *)data magnification:(int)moduleMagnificaton errorLevel:(int)errorCorrectionLevel concatenation:(BOOL)qrConcatenation code:(int)codeNumber division:(int)divisionNumber parity:(unsigned char)dataParity masking:(int)masking;
		//		[Export ("printQRCode:moduleMagnificaton:errorCorrectionLevel:qrConcatenation")]
		//		int PrintQRCode (NSData data, int moduleMagnificaton, int errorCorrectionLevel, bool qrConcatenation, int codeNumber, int divisionNumber, byte dataParity, int masking);

		//		- (int)printRegisteredImage:(int)number mode:(int)printMode;
		//		[Export ("printRegisteredImage")]
		//		int PrintRegisteredImage (int number, int printMode);

		//		- (int)sendData:(NSData *)data;
		[Export("sendData:")]
		int SendData(NSData data);

		//		- (int)startPage:(CGRect)rect;
		[Export("startPage:")]
		int StartPage(System.Drawing.RectangleF rect);

		//		- (int)referFrameOverlay:(int)page;
		[Export("referFrameOverlay:")]
		int ReferFrameOverlay(int page);

		//		- (int)registBitimage:(int)imageID width:(int)widthBytes height:(int)heightDots data:(NSData *)data;
		//		[Export ("registBitimage:width:height:data:")]
		//		int RegistBitimage (int imageID, int width, int height, NSData data);

		//		- (int)registDownloadCharacterData:(NSData *)data isKanji:(BOOL)isKanji firstByte:(UInt8)firstByte secondByte:(UInt8)secondByte;
		//		[Export ("registDownloadCharacterData:isKanji;firstByte:secondByte:")]
		//		int RegistDownloadCharacterData (NSData data, bool isKanji, byte firstByte, byte secondByte);

		//		- (int)registPicture:(int)imageID image:(UIImage *)image dithering:(int)dithering y:(int)widthDots height:(int)heightDots;
		//		[Export ("registPicture:image:dithering:y:height:")]
		//		int RegistPicture (int imageID, UIImage image, int dithering, int widthDots, int heightDots);

		//		- (int)setAbsolutePosition:(CGPoint)point;
		[Export("setAbsolutePosition:")]
		int SetAbsolutePosition(System.Drawing.PointF point);

		//		- (int)setCharacterStyle:(int)size kanjiSize:(int)kanjiSize doubleSize:(int)doubleSize bold:(BOOL)bold bwReverse:(BOOL)blackWhiteReverse underLine:(int)underLine space:(int)space leftOfKanji:(int)leftOfKanji rightOfKanji:(int)rightOfKanji;
		[Export("setCharacterStyle:kanjiSize:doubleSize:bold:bwReverse:underLine:space:leftOfKanji:rightOfKanji:")]
		int SetCharacterStyle(int size, int kanjiSize, int doubleSize, bool bold, bool blackWhiteReverse, int underLine, int space, int leftOfKanji, int rightOfKanji);

		//		- (int)setFrameOverlay:(int)page;
		[Export("setFrameOverlay:")]
		int SetFrameOverlay(int page);

		//		- (int)setInternationalCharacterCode:(int)characterCodeTable country:(int)country;
		[Export("setInternationalCharacterCode:country:")]
		int SetInternationalCharacterCode(int characterCodeTable, int country);

		//		- (int)setLineFeedAmount:(int)dotLines page:(int)page;
		[Export("setLineFeedAmount:page:")]
		int SetLineFeedAmount(int dotLines, int page);

		//		- (int)setOrientation:(int)orientation;
		[Export("setOrientation:")]
		int SetOrientation(int orientation);

		//		- (int)setPaperType:(BOOL)paperWithMark markFeedLength:(int)length;
		[Export("setPaperType:markFeedLength:")]
		int SetPaperType(bool paperWithMark, int length);

		//		- (int)setPrintSpeed:(int)speed;
		[Export("setPrintSpeed:")]
		int SetPrintSpeed(int speed);

		//		- (int)setRelativePosition:(CGPoint)point;
		[Export("setRelativePosition:")]
		int SetRelativePosition(System.Drawing.PointF point);

		//		- (int)setAutoPowerOffTime:(int)minutes;
		[Export("setAutoPowerOffTime:")]
		int SetAutoPowerOffTime(int minutes);

		//		- (int)setBluetoothSecurityMode:(int)security encryption:(BOOL)encryptionOn PINCode:(NSString *)PINCode deviceName:(NSString *)deviceName;
		[Export("setBluetoothSecurityMode:encryption:PINCode:deviceName:")]
		int SetBluetoothSecurityMode(int security, bool encryptionOn, string PINCode, string deviceName);

		//		- (int)setPrintQuality:(int)paperType energy:(int)energy halfPitch:(BOOL)halfPitch;
		[Export("setPrintQuality:energy:halfPitch:")]
		int SetPrintQuality(int paperType, int energy, bool halfPitch);

		//		- (int)getPrinterData:(int)dataType;
		[Export("getPrinterData:")]
		int GetPrinterData(int dataType);

		//		- (int)waitPrintEnd:(int)timeOut;
		//		[Export ("waitPrintEnd:")]
		//		int WaitPrintEnd (int timeOut);
		[Export("waitPrintEnd:")]
		int WaitPrintEnd(int timeOut);
		//		int WaitPrintEnd { get; }
	}



	//	[BaseType (typeof (NSObject))]
	//	public partial interface FTPIOSLibrary {
	//		//		[Static, Export ("OpenLibrary"), Verify ("ObjC method massaged into getter property", "/Volumes/LaCie/Entwicklung/OwiGo_Smart/src/iOS.Fujitsu/Lib/FTPIOSLibrary.h", Line = 22)]
	//		[Static, Export ("OpenLibrary")]
	//		FTPIOSLibrary OpenLibrary { get; }
	//
	//		[Export ("StartPrinter")]
	//		ErrorEnum StartPrinter (string model, string protocol);
	//
	////		[Export ("ClosePrinter"), Verify ("ObjC method massaged into getter property", "/Volumes/LaCie/Entwicklung/OwiGo_Smart/src/iOS.Fujitsu/Lib/FTPIOSLibrary.h", Line = 26)]
	//		[Export ("ClosePrinter")]
	//		ErrorEnum ClosePrinter { get; }
	//
	////		[Export ("DetectMark"), Verify ("ObjC method massaged into getter property", "/Volumes/LaCie/Entwicklung/OwiGo_Smart/src/iOS.Fujitsu/Lib/FTPIOSLibrary.h", Line = 27)]
	//		[Export ("DetectMark")]
	//		ErrorEnum DetectMark { get; }
	//
	//		[Export ("DotfeedPaper")]
	//		ErrorEnum DotfeedPaper (int nDotLineFeed);
	//
	//		[Export ("LinefeedPaper")]
	//		ErrorEnum LinefeedPaper (int nLineFeed);
	//
	//		[Export ("PrintBarcode")]
	//		ErrorEnum PrintBarcode (SymbolEnum symbol, NSData data, int height, int narrowBar, int wideBar, bool rotate);
	//
	//		[Export ("PrintBitimage")]
	//		ErrorEnum PrintBitimage (NSData data, int widthDots, int heightDots, bool dataCompression);
	//
	//		[Export ("PrintCharacterString")]
	//		ErrorEnum PrintCharacterString (string str);
	//
	//		[Export ("PrintGS1DataBar")]
	//		ErrorEnum PrintGS1DataBar (NSData data, GS1DatabarTypeEnum gs1DataBarType, int moduleSize, int segments, bool rotate);
	//
	//		[Export ("PrintMaxiCode")]
	//		ErrorEnum PrintMaxiCode (NSData data, SymbolModeEnum symbolMode, int symbolNumber, int symbolCount);
	//
	//		[Export ("PrintPage")]
	//		ErrorEnum PrintPage (PageModeEnum mode);
	//
	//		[Export ("PrintPDF417Code")]
	//		ErrorEnum PrintPDF417Code (NSData data, int columnsOrSteps, int moduleWidth, int moduleHeight, int errorCorrectionLevel, bool rotate);
	//
	//		[Export ("PrintPicture")]
	//		ErrorEnum PrintPicture (UIImage image, DitheringEnum dithering, int widthDots, int heightDots);
	//
	//		[Export ("PrintQRCode")]
	//		ErrorEnum PrintQRCode (NSData data, ModuleMagnificationEnum moduleMagnificaton, ErrorCorrectionLevelEnum errorCorrectionLevel, bool qrConcatenation, int codeNumber, int divisionNumber, byte dataParity, int masking);
	//
	//		[Export ("PrintRegisteredImage")]
	//		ErrorEnum PrintRegisteredImage (int number, PrintModeEnum printMode);
	//
	//		[Export ("SendData")]
	//		ErrorEnum SendData (NSData data);
	//
	//		[Export ("StartPage")]
	//		ErrorEnum StartPage (RectangleF rect);
	//
	//		[Export ("ReferFrameOverlay")]
	//		ErrorEnum ReferFrameOverlay (int page);
	//
	//		[Export ("RegistBitimage")]
	//		ErrorEnum RegistBitimage (int imageID, int widthBytes, int heightDots, NSData data);
	//
	//		[Export ("RegistDownloadCharacterData")]
	//		ErrorEnum RegistDownloadCharacterData (NSData data, bool isKanji, byte firstByte, byte secondByte);
	//
	//		[Export ("RegistPicture")]
	//		ErrorEnum RegistPicture (int imageID, UIImage image, DitheringEnum dithering, int widthDots, int heightDots);
	//
	//		[Export ("SetAbsolutePosition")]
	//		ErrorEnum SetAbsolutePosition (PointF point);
	//
	//		[Export ("SetCharacterStyle")]
	//		ErrorEnum SetCharacterStyle (FontSizeEnum size, FontSizeEnum kanjiSize, FontDoubleSizeEnum doubleSize, bool bold, bool blackWhiteReverse, UnerlineEnum underLine, int space, int leftOfKanji, int rightOfKanji);
	//
	//		[Export ("SetFrameOverlay")]
	//		ErrorEnum SetFrameOverlay (int page);
	//
	//		[Export ("SetInternationalCharacterCode")]
	//		ErrorEnum SetInternationalCharacterCode (CharacterCodeEnum characterCodeTable, CharacterSetEnum country);
	//
	//		[Export ("SetLineFeedAmount")]
	//		ErrorEnum SetLineFeedAmount (int dotLines, int page);
	//
	//		[Export ("SetOrientation")]
	//		ErrorEnum SetOrientation (OrientationEnum orientation);
	//
	//		[Export ("SetPaperType")]
	//		ErrorEnum SetPaperType (bool paperWithMark, int length);
	//
	//		[Export ("SetPrintSpeed")]
	//		ErrorEnum SetPrintSpeed (PrintSpeedEnum speed);
	//
	//		[Export ("SetRelativePosition")]
	//		ErrorEnum SetRelativePosition (PointF point);
	//
	//		[Export ("SetAutoPowerOffTime")]
	//		ErrorEnum SetAutoPowerOffTime (int minutes);
	//
	//		[Export ("SetBluetoothSecurityMode")]
	//		ErrorEnum SetBluetoothSecurityMode (BTSecurityLevelEnum security, bool encryptionOn, string PINCode, string deviceName);
	//
	//		[Export ("SetPrintQuality")]
	//		ErrorEnum SetPrintQuality (int paperType, int energy, bool halfPitch);
	//
	//		[Export ("GetPrinterData")]
	//		ErrorEnum GetPrinterData (PrinterDataEnum dataType);
	//
	//		[Export ("WaitPrintEnd")]
	//		ErrorEnum WaitPrintEnd (int timeOut);
	//	}
}

