//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardViewController.h>

#import "PUICEmojiSelectionViewDelegate.h"
#import "PUICRecentEmojiViewDelegate.h"

@class PUICEmojiSelectionView, UIView;

@interface PUICQuickboardEmojiViewController : PUICQuickboardViewController <PUICRecentEmojiViewDelegate, PUICEmojiSelectionViewDelegate>
{
    PUICEmojiSelectionView *_emojiSelectionView;
    id <PUICQuickboardEmojiViewControllerDelegate> _emojiViewControllerDelegate;
    UIView *_punchoutView;
}

- (void)acceptButtonTappedWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <PUICQuickboardEmojiViewControllerDelegate> emojiViewControllerDelegate; // @synthesize emojiViewControllerDelegate=_emojiViewControllerDelegate;
- (BOOL)emojiSelectionView:(id)arg1 supportsEmojiType:(int)arg2;
- (void)emojiSelectionView:(id)arg1 didSelectEmojiType:(int)arg2;
@property(nonatomic) __weak UIView *punchoutView; // @synthesize punchoutView=_punchoutView;
- (void)updateRecentEmoji;
- (void)flashRecentEmojiScrollIndicator;
- (void)_updateSelectionViewConfiguration;
@property(readonly, nonatomic) BOOL supportsAnimatedEmoji; // @dynamic supportsAnimatedEmoji;
- (void)_didBecomeActive;
- (void)deactivateSelectionView;
- (void)addDismissalAnimationsWithOptions:(unsigned int)arg1;
- (void)recentEmojiView:(id)arg1 didSelectEmojiString:(id)arg2;
- (void).cxx_destruct;
- (void)activate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;

@end

