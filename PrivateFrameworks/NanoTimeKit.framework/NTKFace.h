//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface NTKFace : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_complicationSlotDescriptors;
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editOptions;
    BOOL _editOptionsPrepared;
    BOOL _beingEdited;
    id <NTKFaceChangeObserver> _changeObserver;
    int _faceStyle;
    int _mostRecentEditMode;
    NSString *_mostRecentComplicationSlot;
    int _complicationPickerStyle;
}

+ (id)PPTBlankFace;
+ (id)defaultFaceOfStyle:(int)arg1;
+ (int)_customEditModeForUniqueConfiguration;
+ (id)_defaultOptionForCustomEditMode:(int)arg1;
+ (unsigned int)_numberOfCustomEditModes;
+ (id)_orderedEditModes;
+ (Class)_faceClassForStyle:(int)arg1;
+ (id)_defaultSelectedComplicationSlot;
+ (id)_complicationSlotDescriptors;
+ (BOOL)supportsSecureCoding;
- (void)prepareForDeletion;
@property(readonly, nonatomic) int complicationPickerStyle; // @synthesize complicationPickerStyle=_complicationPickerStyle;
@property(nonatomic) BOOL beingEdited; // @synthesize beingEdited=_beingEdited;
@property(retain, nonatomic) NSString *mostRecentComplicationSlot; // @synthesize mostRecentComplicationSlot=_mostRecentComplicationSlot;
@property(nonatomic) int mostRecentEditMode; // @synthesize mostRecentEditMode=_mostRecentEditMode;
@property(readonly, nonatomic) int faceStyle; // @synthesize faceStyle=_faceStyle;
@property(nonatomic) __weak id <NTKFaceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)applyUniqueConfigurationWithExistingFaces:(id)arg1;
@property(readonly, nonatomic) NSArray *editModes;
- (void)performCustomSwitcherSelectionAction;
- (BOOL)hasCustomSwitcherSelectionAction;
- (unsigned int)allowedComplicationTypesForSlot:(id)arg1;
- (BOOL)_option:(id)arg1 isValidForCustomEditMode:(int)arg2;
- (void)_legacyDecodeComplications:(id)arg1;
- (void)enumerateComplicationSlotsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2;
- (unsigned int)numberOfOptionsForCustomEditMode:(int)arg1;
- (unsigned int)indexOfOption:(id)arg1 forCustomEditMode:(int)arg2;
- (void)selectOption:(id)arg1 forCustomEditMode:(int)arg2;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (BOOL)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (void)_prepareForDeletion;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1;
- (void)_cleanupEditOptions;
- (void)_prepareEditOptions;
- (void)cleanupEditOptions;
- (void)_applyUniqueConfigurationWithExistingFaces:(id)arg1;
- (void)prepareEditOptions;
- (void)_applyDefaultConfiguration;
- (BOOL)_allowsEditing;
- (BOOL)_hasOptionsForCustomEditMode:(int)arg1;
- (void)_performCustomSwitcherSelectionAction;
- (BOOL)_hasCustomSwitcherSelectionAction;
- (void)_noteOptionChangedForCustomEditMode:(int)arg1;
@property(readonly, nonatomic) NSString *dailySnapshotKey;
- (id)complicationForSlot:(id)arg1;
- (id)_sortedComplicationSlots;
- (void)enumerateCustomEditModesWithBlock:(CDUnknownBlockType)arg1;
- (id)selectedOptionForCustomEditMode:(int)arg1;
- (void)applyDefaultConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

