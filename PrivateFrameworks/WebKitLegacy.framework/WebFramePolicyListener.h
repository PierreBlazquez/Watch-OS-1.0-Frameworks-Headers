//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFormSubmissionListener.h"
#import "WebPolicyDecisionListener.h"

@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame> _frame;
    function_ae4aba72 _policyFunction;
}

+ (void)initialize;
- (void)receivedPolicyDecision:(int)arg1;
- (id)initWithFrame:(struct Frame *)arg1 policyFunction:(function_ae4aba72)arg2;
- (void).cxx_destruct;
- (void)continue;
- (id).cxx_construct;
- (void)use;
- (void)ignore;
- (void)invalidate;
- (void)dealloc;
- (void)download;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

