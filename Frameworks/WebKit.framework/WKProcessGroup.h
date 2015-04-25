//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKGeolocationProviderIOS;

@interface WKProcessGroup : NSObject
{
    struct RefPtr<WebKit::WebContext> _context;
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}

- (id)initWithInjectedBundleURL:(id)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property(readonly) struct OpaqueWKContext *_contextRef;
- (void).cxx_destruct;
- (id).cxx_construct;
@property id <WKProcessGroupDelegate> delegate;
- (id)init;

@end

