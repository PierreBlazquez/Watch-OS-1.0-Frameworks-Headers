//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface CNContactStyle : NSObject
{
    BOOL _usesOpaqueBackground;
    UIColor *_textColor;
    UIColor *_placeholderTextColor;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIColor *_sectionBackgroundColor;
    UIColor *_selectedCellBackgroundColor;
    int _separatorStyle;
    int _barStyle;
    int _separatorBackdropOverlayBlendMode;
    int _keyboardAppearance;
}

@property(nonatomic) int keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
- (id)init;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;
@property(readonly, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) int separatorBackdropOverlayBlendMode; // @synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode;
@property(nonatomic) BOOL usesOpaqueBackground; // @synthesize usesOpaqueBackground=_usesOpaqueBackground;
@property(retain, nonatomic) UIColor *selectedCellBackgroundColor; // @synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor;
@property(retain, nonatomic) UIColor *sectionBackgroundColor; // @synthesize sectionBackgroundColor=_sectionBackgroundColor;

@end

