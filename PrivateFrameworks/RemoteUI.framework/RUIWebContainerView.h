//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface RUIWebContainerView : UIView <UIWebViewDelegate>
{
    BOOL _highlighted;
    BOOL _reallyHighlighted;
    UIWebView *_webView;
    id <RUIWebContainerViewDelegate> _delegate;
}

- (id)initWithContent:(id)arg1 baseURL:(id)arg2;
- (void)_setHighlightedNow;
- (float)heightForWidth:(float)arg1;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)setUserStyleSheet:(id)arg1;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic) __weak id <RUIWebContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

