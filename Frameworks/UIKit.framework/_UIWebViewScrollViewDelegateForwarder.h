//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIWebView;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>
{
    id <UIScrollViewDelegate> _delegate;
    UIWebView *_webView;
}

@property(nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(nonatomic) id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

