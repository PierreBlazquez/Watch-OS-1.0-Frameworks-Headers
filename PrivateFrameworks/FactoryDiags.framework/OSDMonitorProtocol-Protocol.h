//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol OSDMonitorProtocol <NSObject>
- (_Bool)heatingStatus;
- (_Bool)stopMonitor;
- (_Bool)startMonitor;
- (_Bool)addProcesses:(NSArray *)arg1 withController:(NSString *)arg2 withConfiguration:(NSDictionary *)arg3;
@end

