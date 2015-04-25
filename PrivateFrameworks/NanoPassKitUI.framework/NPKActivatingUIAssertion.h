//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLSActivatingUIAssertion;

@interface NPKActivatingUIAssertion : NSObject
{
    CDUnknownBlockType _invalidationHandler;
    CSLSActivatingUIAssertion *_carouselAssertion;
    unsigned long long _usageCount;
}

@property(retain, nonatomic) CSLSActivatingUIAssertion *carouselAssertion; // @synthesize carouselAssertion=_carouselAssertion;
- (id)initWithInvalidationHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=_usageCount;
- (void)retainUsage;
- (void)releaseUsage;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
