//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class TPRingView;

@interface TPFakeSixSquareButton : UIButton
{
    struct UIEdgeInsets _contentInsets;
    TPRingView *_ringView;
}

@property(retain) TPRingView *ringView; // @synthesize ringView=_ringView;
- (id)initWithFrame:(struct CGRect)arg1 andIcon:(id)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)dealloc;

@end

