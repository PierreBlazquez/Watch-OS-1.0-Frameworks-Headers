//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebNetworkStateObserver : NSObject
{
    const struct NetworkStateNotifier *_notifier;
}

@property(nonatomic) const struct NetworkStateNotifier *notifier; // @synthesize notifier=_notifier;
- (id)initWithNotifier:(const struct NetworkStateNotifier *)arg1;
- (void)networkStateChanged:(id)arg1;
- (void)dealloc;

@end

