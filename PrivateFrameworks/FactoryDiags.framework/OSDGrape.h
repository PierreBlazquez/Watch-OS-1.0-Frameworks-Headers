//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OSDGrape : NSObject
{
    struct __MTDevice *_grapeDevice;
    NSString *_constructedFirmwareVersion;
    NSString *_bcdVersion;
    int _resetCount;
}

- (_Bool)scheduleSystemWake:(unsigned int)arg1;
- (id)criticalErrorSet:(out unsigned long long *)arg1;
- (int)resetCount;
- (id)bcdVersion;
- (id)constructedFirmwareVersion;
- (unsigned long)multitouchFirmwareVersion;
- (_Bool)_setMTReport:(unsigned char)arg1 payloadBuffer:(char *)arg2 bufferSize:(unsigned long)arg3;
- (_Bool)_getMTReport:(unsigned char)arg1 payloadBuffer:(char *)arg2 bufferSize:(unsigned int *)arg3;
- (_Bool)_refreshGrapeProperties;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

