//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface OSDDisplay : NSObject
{
    NSXPCConnection *connection;
    double _timeout;
}

+ (void)initialize;
+ (id)sharedInstance;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (_Bool)setTextRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3;
- (id)currentTestDetail;
- (id)nextTest;
- (id)prevTest;
- (_Bool)moveToPreviousTest;
- (_Bool)continueTesting;
- (_Bool)temperatureReady;
- (_Bool)clearTemporaryLayers;
- (_Bool)showTemporaryRectangleWithRect:(struct CGRect)arg1 red:(unsigned int)arg2 green:(unsigned int)arg3 blue:(unsigned int)arg4;
- (_Bool)showTemporaryImage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)showSupportedPatterns;
- (_Bool)showRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3;
- (_Bool)showPattern:(id)arg1;
- (id)sendInfo:(id)arg1;
- (void)startXPCConnection;
- (void).cxx_destruct;
- (id)currentTest;
- (_Bool)setText:(id)arg1;
- (id)init;

@end

