//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBRequesterDelegate.h"

@class GEORequester, NSNumber, NSString, PBRequest;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate>
{
    PBRequest *_request;
    NSString *_debugRequestName;
    unsigned int _urlType;
    CDUnknownBlockType _completionHandler;
    BOOL _cancelled;
    GEORequester *_requester;
    NSString *_appIdentifier;
    NSNumber *_serviceTypeNumber;
}

- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 appIdentifier:(id)arg2 urlType:(unsigned int)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)_cleanup;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
