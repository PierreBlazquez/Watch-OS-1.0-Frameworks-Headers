//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _VMULibraryLoadObserver : NSObject
{
    id <VMULibraryLoadDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialNotificationsQueue;
    struct _CSTypeRef _symbolicator;
}

- (id)initWithTask:(unsigned int)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)stopObserving;

@end

