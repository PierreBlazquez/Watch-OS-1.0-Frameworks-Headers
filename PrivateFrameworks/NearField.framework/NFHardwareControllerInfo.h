//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NFHardwareControllerInfo : NSObject
{
    unsigned int _siliconVersion;
    unsigned int _ROMVersion;
    unsigned int _firmwareVersion;
    unsigned int _firmwareRevision;
    unsigned int _middlewareVersion;
}

@property(readonly, nonatomic) unsigned int middlewareVersion; // @synthesize middlewareVersion=_middlewareVersion;
@property(readonly, nonatomic) unsigned int ROMVersion; // @synthesize ROMVersion=_ROMVersion;
@property(readonly, nonatomic) unsigned int siliconVersion; // @synthesize siliconVersion=_siliconVersion;
@property(readonly, nonatomic) unsigned int firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned int firmwareRevision; // @synthesize firmwareRevision=_firmwareRevision;

@end

