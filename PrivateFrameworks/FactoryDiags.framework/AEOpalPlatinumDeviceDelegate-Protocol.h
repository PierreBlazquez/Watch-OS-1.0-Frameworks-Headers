//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppleElementsDeviceDelegate.h"

@class AEOpalPlatinumDevice;

@protocol AEOpalPlatinumDeviceDelegate <AppleElementsDeviceDelegate>

@optional
- (void)appleElementsPlatinumResetPacket:(CDStruct_27c9468e *)arg1;
- (void)appleElementsPlatinumInput:(CDStruct_34fda668 *)arg1 device:(AEOpalPlatinumDevice *)arg2;
- (void)appleElementsPlatinumInputHeader:(CDStruct_3098ad89 *)arg1;
- (void)appleElementsPlatinumRawPacket:(char *)arg1 withLength:(unsigned short)arg2;
@end

