//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, _UIAppearanceCustomizableClassInfo;

@interface _UIAppearance : NSObject
{
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
    NSMutableDictionary *_resettableInvocations;
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;
}

+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;
+ (void)_setCurrentAppearanceSource:(id)arg1;
+ (BOOL)_hasAnyCustomizations;
+ (id)_pendingRecordInvocationsForSource:(id)arg1;
+ (id)_currentAppearanceSource;
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (id)_rootAppearancesNode;
+ (id)_recorderForSource:(id)arg1;
+ (id)_windowsForSource:(id)arg1;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;
+ (BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1;
@property(readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo; // @synthesize _customizableClassInfo;
@property(retain, nonatomic, setter=_setResettableInvocations:) NSMutableDictionary *_resettableInvocations; // @synthesize _resettableInvocations;
- (id)_appearanceInvocations;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (void)updateResettableSelectorsWithInvocation:(id)arg1 removeSelector:(BOOL)arg2;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)arg1;
- (id)_resettableInvocationsCreateIfNecessary;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;

@end

