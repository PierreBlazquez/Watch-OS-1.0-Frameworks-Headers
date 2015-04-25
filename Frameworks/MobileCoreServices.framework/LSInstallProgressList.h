//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject
{
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_subscriptions;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2;
- (void)removeProgressForBundleID:(id)arg1;
- (void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3;
- (void)setProgress:(id)arg1 forBundleID:(id)arg2;
- (id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2;
- (id)progressForBundleID:(id)arg1;

@end

