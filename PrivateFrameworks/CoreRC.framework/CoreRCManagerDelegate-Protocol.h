//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreRCBus, CoreRCManager;

@protocol CoreRCManagerDelegate <NSObject>

@optional
- (void)manager:(CoreRCManager *)arg1 hasUpdated:(CoreRCBus *)arg2;
- (void)manager:(CoreRCManager *)arg1 hasRemoved:(CoreRCBus *)arg2;
- (void)manager:(CoreRCManager *)arg1 hasAdded:(CoreRCBus *)arg2;
@end

