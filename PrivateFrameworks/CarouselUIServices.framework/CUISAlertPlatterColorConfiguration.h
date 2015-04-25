//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAFilter, UIColor;

@interface CUISAlertPlatterColorConfiguration : NSObject
{
    UIColor *_color;
    CAFilter *_compositingFilter;
    unsigned int _colorStyle;
}

+ (id)colorConfigurationWithBackgroundColor:(id)arg1;
+ (id)blurredPlatterColorConfiguration;
+ (id)blurredHeaderColorConfiguration;
+ (id)colorConfigurationWithTintColor:(id)arg1;
@property(nonatomic) unsigned int colorStyle; // @synthesize colorStyle=_colorStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CAFilter *compositingFilter; // @synthesize compositingFilter=_compositingFilter;

@end

