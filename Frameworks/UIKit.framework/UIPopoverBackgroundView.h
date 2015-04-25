//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPopoverBackgroundViewMethods.h"

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>
{
}

+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg1;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
+ (BOOL)wantsDefaultContentAppearance;
+ (float)cornerRadius;
- (BOOL)_wantsDefaultContentAppearance;
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned int)arg1;
- (void)_updateShadow;
- (struct CGRect)_backgroundContentViewFrame;
- (struct CGRect)_contentViewFrame;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned int)arg2;
- (struct UIEdgeInsets)_contentViewInsets;
- (int)backgroundStyle;
@property(nonatomic) float arrowOffset;
- (id)_shadowPath;
- (float)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;
- (float)_shadowRadius;
@property(nonatomic) unsigned int arrowDirection;
- (struct CGSize)_shadowOffset;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;

@end

