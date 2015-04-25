//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFModernAddressAtomDelegate.h"
#import "MFPassthroughViewProvider.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UILabel;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>
{
    UILabel *_label;
    void *_addressBook;
    id <MFModernLabelledAtomListDelegate> _delegate;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    UIColor *_labelTextColor;
    NSDictionary *_recipients;
    float _firstLineWidth;
    BOOL _usePadDisplayStyle;
    BOOL _labelVisible;
    unsigned int _needsReflow:1;
    unsigned int _isChangingFrame:1;
    UIView *_baselineView;
    BOOL _primary;
    unsigned int _numberOfRows;
    float _lineSpacing;
}

+ (float)atomLineHeight;
+ (float)spaceBetweenColonAndFirstAtomNaturalEdge;
+ (id)primaryLabelFont;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
- (struct CGRect)labelFrame;
- (id)passthroughViews;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (id)title;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setOpaque:(BOOL)arg1;
@property(nonatomic) BOOL primary; // @synthesize primary=_primary;
@property(nonatomic) BOOL usePadDisplayStyle; // @synthesize usePadDisplayStyle=_usePadDisplayStyle;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
- (void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (void)setAtomAlpha:(float)arg1;
- (id)atomDisplayStrings;
- (void)updateAtomsForVIP;
@property(nonatomic, getter=isLabelVisible) BOOL labelVisible;
- (id)labelText;
- (void)setAddressAtomScale:(float)arg1;
- (void)enumerateAddressAtomsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setFirstLineWidth:(float)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(float)arg3 firstLineWidth:(float)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned int)arg7 addressBook:(void *)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (struct CGPoint)baselinePointForRow:(unsigned int)arg1;
- (id)addressAtoms;
- (void)_setNeedsReflow;
- (void)setFirstLineWidth:(float)arg1 reflow:(BOOL)arg2;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)_reflow;
- (void)addressBookDidChange:(id)arg1;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

