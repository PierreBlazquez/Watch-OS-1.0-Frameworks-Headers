//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

@class NSString, UIColor;

@interface UIStatusBarNewUIForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes
{
    NSString *_uniqueIdentifier;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    UIColor *_tintColor;
}

- (id)proportionalFontForFont:(id)arg1;
- (BOOL)_shouldUseBoldFontForStyle:(int)arg1;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (id)_batteryColorForCapacity:(float)arg1 lowCapacity:(float)arg2 charging:(BOOL)arg3;
- (float)_roundDimension:(float)arg1;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2;
- (id)makeTextFontForStyle:(int)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (float)textOffsetForStyle:(int)arg1;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (float)sizeForMoonMaskVisible:(BOOL)arg1;
- (int)activityIndicatorStyleWithSyncActivity:(BOOL)arg1;
- (float)bluetoothBatteryExtraPadding;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2;
- (id)bluetoothBatteryImageNameWithCapacity:(float)arg1;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(float)arg2 charging:(BOOL)arg3;
- (float)batteryAccessoryMargin;
- (id)batteryImageNameWithCapacity:(float)arg1;
- (id)textForNetworkType:(int)arg1;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3;
- (float)edgePadding;
- (id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4;
- (id)uniqueIdentifier;
- (id)textColorForStyle:(int)arg1;
@property(readonly, retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)dealloc;

@end

