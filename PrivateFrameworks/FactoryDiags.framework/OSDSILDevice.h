//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSTimer, OSDHIDEventSystemClient;

@interface OSDSILDevice : NSObject
{
    OSDHIDEventSystemClient *_hidClient;
    struct __IOHIDServiceClient *_atvHIDClient;
    NSArray *_blinkPattern;
    NSTimer *_blinkPatternTimer;
}

@property(retain, nonatomic) NSArray *blinkPattern; // @dynamic blinkPattern;
@property(retain, nonatomic) NSString *blinkType; // @dynamic blinkType;
- (void)_blinkPatternInternalTimer:(id)arg1;
- (BOOL)_setBlinkState:(id)arg1;
- (void)_blinkPatternInternal:(unsigned int)arg1;
- (BOOL)_startAppleTVHIDIfNeeded;
- (BOOL)_isAppleTVHIDRunning;
- (void).cxx_destruct;
- (id)init;

@end
