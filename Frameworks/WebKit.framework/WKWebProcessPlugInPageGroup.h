//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface WKWebProcessPlugInPageGroup : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPageGroupProxy> _bundlePageGroup;
}

@property(readonly) struct Object *_apiObject;
- (id).cxx_construct;
@property(readonly) NSString *identifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

