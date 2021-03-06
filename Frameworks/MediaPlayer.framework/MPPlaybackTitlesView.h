//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl
{
    UIView *_contentView;
    NSArray *_labels;
    NSArray *_titles;
    BOOL _showingLoadingUI;
    unsigned int _marqueeScrollableIndex;
    BOOL _marqueeScrollingActive;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) UIView *contentView;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL showingLoadingUI; // @synthesize showingLoadingUI=_showingLoadingUI;
@property(nonatomic) unsigned int marqueeScrollableIndex; // @synthesize marqueeScrollableIndex=_marqueeScrollableIndex;
@property(nonatomic) BOOL marqueeScrollingActive; // @synthesize marqueeScrollingActive=_marqueeScrollingActive;
- (id)_addLoadingLabel;
- (void)_tearDownLabels;
- (void)_updateLabelMarqueeScrolling;
- (void)_layoutLabels;
- (void)_layoutLoadingUI;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)_addLabel:(unsigned int)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

@end

