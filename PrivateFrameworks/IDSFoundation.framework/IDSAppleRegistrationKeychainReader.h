//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMTimer, NSMutableArray;

@interface IDSAppleRegistrationKeychainReader : NSObject
{
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    CDUnknownBlockType _purgeCancelBlock;
    CDUnknownBlockType _purgeEnqueueBlock;
}

+ (id)keychainAccessGroupForVersion:(unsigned int)arg1;
+ (id)keychainAccountForVersion:(unsigned int)arg1;
+ (id)keychainServiceForVersion:(unsigned int)arg1;
+ (id)sharedInstance;
- (void)_flush;
- (id)registrationData;
- (void)_reloadFromDictionaryLocked:(id)arg1;
- (void)_setPurgeTimer;
- (void)_reloadFromKeychainLocked;
- (id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3;
- (void)flushCache;
- (id)init;
- (void)dealloc;

@end

