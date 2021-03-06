//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, PKPaperList;

@interface PKPrinter : NSObject
{
    NSString *name;
    int type;
    int accessState;
    NSDictionary *printInfoSupported;
    struct _http_s {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
        struct sockaddr_in _field9;
        char _field10[256];
        char _field11[27][256];
        char *_field12;
        int _field13;
        int _field14;
        int _field15;
        char _field16[2048];
        int _field17;
        struct _cups_md5_state_s {
            unsigned int _field1[2];
            unsigned int _field2[4];
            unsigned char _field3[64];
        } _field18;
        char _field19[256];
        int _field20;
        struct SSLContext *_field21;
        int _field22;
        struct fd_set *_field23;
        int _field24;
        char *_field25;
        char _field26[256];
        char _field27[256];
        int _field28;
        long long _field29;
        union _http_addr_u *_field30;
        struct http_addrlist_s *_field31;
        char _field32[2048];
        int _field33;
        char *_field34;
        char *_field35;
        struct __CFArray *_field36;
        CDUnknownFunctionPointerType _field37;
        void *_field38;
        double _field39;
        int _field40;
        int _field41;
        int _field42;
        char *_field43;
        char *_field44;
        char *_field45;
        char *_field46;
        char *_field47;
        char *_field48;
        int _field49;
        struct z_stream_s _field50;
        char *_field51;
    } *job_http;
    NSMutableDictionary *privateData;
    NSMutableDictionary *specialFeedOrientation;
    NSArray *printScalingSupported;
    NSArray *mandatoryJobAttributes;
    NSString *quotaManagementURL;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int preferred_landscape;
    int printerStateReasons;
    BOOL isLocal;
    BOOL hasIdentifyPrinterOp;
    BOOL connectionShouldNotBeTrusted;
    BOOL isFromMCProfile;
    int kind;
    PKPaperList *_paperList;
}

+ (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
+ (id)nameForHardcodedURI:(id)arg1;
+ (id)hardcodedURIs;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;
+ (id)printerWithName:(id)arg1;
+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
@property(retain) NSString *hostname; // @dynamic hostname;
@property(retain) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property int accessState; // @dynamic accessState;
@property(readonly) BOOL hasIdentifyPrinterOp; // @synthesize hasIdentifyPrinterOp;
@property BOOL isFromMCProfile; // @synthesize isFromMCProfile;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1;
@property(readonly) BOOL isAdobeRGBSupported; // @dynamic isAdobeRGBSupported;
- (void)identifySelf;
- (int)feedOrientation:(id)arg1;
- (void)checkOperations:(struct _ipp_s *)arg1;
- (id)privateObjectForKey:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (struct _ipp_s *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (void)aggdAppsAndPrinters;
- (int)finalizeJob:(int)arg1;
@property(retain) PKPaperList *paperList; // @synthesize paperList=_paperList;
- (id)paperListForDuplexMode:(id)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(BOOL)arg2;
- (void)doMedia2:(struct _ipp_s *)arg1;
- (struct _ipp_s *)getPrinterAttributes;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s *)arg1;
- (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2;
- (void)reconfirmWithForce:(BOOL)arg1;
- (id)txtRecordObjectForKey:(id)arg1;
- (id)TXTRecordWithTimeout:(int)arg1;
- (void)setAccessStateFromTXT;
- (void)updateType;
- (BOOL)isBonjour;
@property(readonly) BOOL isIPPS; // @dynamic isIPPS;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)localName;
- (void)showPassCodeForSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL setupSupportsPasswordScope;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain) NSNumber *port; // @dynamic port;
- (int)sendData:(const char *)arg1 ofLength:(int)arg2;
- (int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (int)abortJob;
- (int)finishJob;
- (int)startJob:(id)arg1 ofType:(id)arg2;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(char *)arg4;
- (BOOL)isPaperReady:(id)arg1;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
- (void)unlockWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL needsSetup;
@property(readonly) NSString *uuid; // @dynamic uuid;
@property(readonly) int kind; // @synthesize kind;
- (void)cancelUnlock;
- (id)localizedPrinterWarnings;
- (BOOL)knowsReadyPaperList;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 andDuplex:(BOOL)arg2;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
@property(readonly) BOOL hasPrintInfoSupported; // @dynamic hasPrintInfoSupported;
@property(readonly) NSDictionary *printInfoSupported;
- (id)makeAndModel;
@property(readonly) int jobTypesSupported;
@property(readonly) NSURL *printerURL;
- (id)displayName;
- (id)location;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) int type; // @synthesize type;
@property(readonly, retain) NSString *scheme;
- (id)description;
- (void)dealloc;
@property BOOL isLocal; // @synthesize isLocal;
- (void)resolve;
- (BOOL)resolveWithTimeout:(int)arg1;

@end

