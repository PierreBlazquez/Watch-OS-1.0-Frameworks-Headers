//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIColor;

@interface PUICTableViewCellBackgroundView : UIImageView
{
    unsigned int _roundedCorners;
    UIColor *_color;
}

+ (id)_imageCache;
- (void)setOpaqueWithUpdate:(BOOL)arg1;
- (void)setPillOpaque:(BOOL)arg1;
- (void)_updateColor;
- (void)_updateImage;
@property(nonatomic) unsigned int roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void).cxx_destruct;
- (id)_contentMaskLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

