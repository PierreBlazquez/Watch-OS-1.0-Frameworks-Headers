//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

@class CKMediaObject, CSLSAlertSuppressionAssertion, CSLSBacklightAssertion, UIScrollView, UITapGestureRecognizer, UIView;

@interface CKNanoMediaPresenter : CKViewController
{
    struct CGRect _aspectFitContentFrame;
    struct CGRect _aspectFillContentFrame;
    struct CGPoint _aspectFillContentOffset;
    BOOL _zoomed;
    BOOL _shouldAnimateContentFrameChanges;
    CKMediaObject *_mediaObject;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UIScrollView *_scrollView;
    UIView *_contentView;
    float _constrainedToFullsizeContentRatio;
    CSLSAlertSuppressionAssertion *_alertSuppressionAssertion;
    CSLSBacklightAssertion *_backlightAssertion;
}

+ (BOOL)canPresentMediaObject:(id)arg1;
+ (id)presenterForMediaObject:(id)arg1;
@property(nonatomic) BOOL shouldAnimateContentFrameChanges; // @synthesize shouldAnimateContentFrameChanges=_shouldAnimateContentFrameChanges;
@property(nonatomic) float constrainedToFullsizeContentRatio; // @synthesize constrainedToFullsizeContentRatio=_constrainedToFullsizeContentRatio;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(readonly, nonatomic) struct CGSize originalContentSize;
- (void)startSuppressingAlerts;
- (void)_toggleZoom:(id)arg1;
- (void)_calculateContentFrames;
- (void)stopSuppressingAlerts;
- (void)enableBacklightAssertion:(BOOL)arg1;
@property(retain, nonatomic) CSLSBacklightAssertion *backlightAssertion; // @synthesize backlightAssertion=_backlightAssertion;
@property(retain, nonatomic) CSLSAlertSuppressionAssertion *alertSuppressionAssertion; // @synthesize alertSuppressionAssertion=_alertSuppressionAssertion;
- (id)initWithMediaObject:(id)arg1;
@property(readonly, retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(nonatomic, getter=isZoomed) BOOL zoomed; // @synthesize zoomed=_zoomed;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;

@end

