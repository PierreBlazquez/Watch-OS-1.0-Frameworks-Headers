//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface GEOMapRequestManager : NSObject
{
    NSMutableSet *_requests;
}

- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;
- (id)init;
- (void)dealloc;

@end

