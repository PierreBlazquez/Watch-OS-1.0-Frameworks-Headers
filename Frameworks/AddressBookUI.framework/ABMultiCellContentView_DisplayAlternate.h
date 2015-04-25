//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@class NSString, UILabel;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows
{
    UILabel *_displayLabel;
}

+ (void)numberOfLines:(int *)arg1 lineBreakMode:(int *)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4;
+ (void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3;
+ (id)displayLabelForReuse;
+ (struct CGRect)displayLabelFrameForValueViewFrame:(struct CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reload;
@property(readonly, nonatomic) NSString *displayText;
- (struct CGRect)valueTextRect;
- (void)reloadDisplayText;
- (void)reloadFromModelIncludingRows:(BOOL)arg1;
- (void)reloadIncludingRows:(BOOL)arg1 includingDisplayView:(BOOL)arg2;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (void)setAbCellStyle:(int)arg1;
- (void)reloadFromModel;

@end

