//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPersonCellContentView.h>

#import "ABResponderDelegate.h"

@class ABAbstractPropertyGroup, UITableViewCell, UIView;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate>
{
    UITableViewCell *_cell;
    BOOL _usesCustomPropertyCell;
    UIView *_labelDivider;
    BOOL _isImportant;
    BOOL _isEmphasized;
    BOOL _isHighlighted;
    BOOL _allowsEditing;
    BOOL _isEditing;
    BOOL _shouldIgnoreEndEditing;
    int _property;
    ABAbstractPropertyGroup *_pg;
    id _pgInfo;
    BOOL _needsReload;
    UIView *_touchedView;
    id <ABMultiCellContentViewUpdateDelegate> _updateDelegate;
    int _abCellStyle;
}

+ (id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2;
+ (void)setupTextField:(id)arg1 withStyleProvider:(id)arg2;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (Class)classForProperty:(int)arg1;
@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (BOOL)canResignFirstResponder;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reload;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pickerView;
@property(nonatomic) BOOL shouldIgnoreEndEditing; // @synthesize shouldIgnoreEndEditing=_shouldIgnoreEndEditing;
@property(nonatomic) BOOL usesCustomPropertyCell; // @synthesize usesCustomPropertyCell=_usesCustomPropertyCell;
@property(nonatomic) id <ABMultiCellContentViewUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic, getter=isEmphasized) BOOL emphasized; // @synthesize emphasized=_isEmphasized;
@property(nonatomic, getter=isImportant) BOOL important; // @synthesize important=_isImportant;
@property(retain, nonatomic) id propertyGroupInfo; // @synthesize propertyGroupInfo=_pgInfo;
@property(readonly, nonatomic) ABAbstractPropertyGroup *propertyGroup; // @synthesize propertyGroup=_pg;
- (BOOL)entryFieldShouldReturn:(id)arg1;
- (void)entryField:(id)arg1 didEndEditingForKey:(id)arg2;
- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (void)entryFieldDidBeginEditing:(id)arg1;
- (BOOL)entryFieldShouldEndEditing:(id)arg1;
- (BOOL)entryFieldShouldBeginEditing:(id)arg1;
- (struct CGRect)focusRectForView:(id)arg1;
- (void)reloadIfNeeded:(BOOL)arg1 reloadFromModel:(BOOL)arg2;
- (id)newTextFieldWithFrame:(struct CGRect)arg1 tag:(int)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4;
- (void)clearTextFieldDelegates:(id)arg1;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBeginEditingAnytime;
- (struct CGRect)backgroundRectForView:(id)arg1;
- (id)viewForFirstResponder;
- (struct CGRect)rectForView:(id)arg1;
- (void)reloadLabelFromModel;
- (id)badgeIconWhenEditing:(BOOL)arg1;
- (struct CGRect)frameForLabelDivider;
- (void)layoutLabel;
- (void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2;
- (id)displayHighlightedTextColor;
- (id)displayTextColor;
- (id)labelTextColorWhenEditing:(BOOL)arg1;
- (void)setLabelText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (BOOL)canHandleProperty:(int)arg1;
- (id)initCommonWithFrame:(struct CGRect)arg1 property:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 property:(int)arg2;
- (BOOL)wantsLabelDivider;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
@property(nonatomic) int abCellStyle; // @synthesize abCellStyle=_abCellStyle;
- (void)reloadFromModel;

@end

