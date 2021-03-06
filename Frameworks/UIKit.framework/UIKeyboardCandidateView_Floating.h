//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateView.h>

#import "UIKeyboardCandidateViewInline.h"

@class NSString;

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline>
{
    struct CGRect _collapsedRect;
    struct CGSize presentationSize;
}

+ (float)defaultExtendedControlHeight;
@property struct CGSize presentationSize; // @synthesize presentationSize;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (id)activeCandidateList;
- (id)_inheritedRenderConfig;
- (void)candidatesDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

