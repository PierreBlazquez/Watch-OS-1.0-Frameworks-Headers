//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABAbstractPropertyGroup.h>

@class ABActionsController, ABCapabilitiesManager, NSMutableArray, NSMutableDictionary, NSString;

@interface ABPropertyGroup : ABAbstractPropertyGroup
{
    int _property;
    void *_context;
    NSMutableDictionary *_valuesByPerson;
    NSMutableArray *_recordInfoDictionaries;
    NSMutableArray *_propertyLabels;
    NSMutableDictionary *_lineInfosByIndex;
    ABActionsController *_actionsController;
    void *_defaultPolicy;
    NSMutableDictionary *_preinsertedRecordInfoDictionary;
    id _preinsertedValue;
    NSString *_preinsertedLabel;
    NSMutableDictionary *_insertionRecordInfoDictionary;
    id _insertionValue;
    NSString *_insertionLabel;
    NSMutableDictionary *_recordInfoDictionaryForItemBeingDeleted;
    NSMutableDictionary *_valueForItemBeingDeleted;
    NSString *_labelForItemBeingDeleted;
    int _lastIndexWithAddedItem;
    ABCapabilitiesManager *_capabilitiesManager;
    BOOL _allowsVibrations;
    id _vibrationManager;
}

- (int)property;
- (BOOL)canSave;
- (void *)context;
- (id)description;
- (void)dealloc;
- (int)itemCount;
- (BOOL)multiCellContentView:(id)arg1 alwaysShowsClearButtonAtIndexPath:(id)arg2;
- (id)peopleFromInfo:(id)arg1 whenEditing:(BOOL)arg2;
- (id)actionsControllerPreparedWithValueAtIndex:(int)arg1;
- (void)setCapabilitiesManager:(id)arg1;
- (BOOL)removeItemAtRow:(int)arg1;
- (BOOL)setEmptyValueAtRow:(int)arg1 whenEditing:(BOOL)arg2;
- (id)_recordInfoDictionaryForPerson:(id)arg1;
- (BOOL)_propertyIsDate;
- (id)_newLocalizedPlaceholderForKey:(id)arg1;
- (id)_getFromLineInfos:(id)arg1 key:(id)arg2 valueForKey:(id)arg3;
- (int)_indexFromInfo:(id)arg1;
- (void)_getIndex:(int *)arg1 andEditableFlag:(char *)arg2 fromInfo:(id)arg3;
- (BOOL)hasTextVibration;
- (BOOL)hasCallVibration;
- (BOOL)hasTextTone;
- (BOOL)hasRingtone;
- (BOOL)_hasNonNullSoundForIdentifier:(int)arg1;
- (id)_valueFromCacheForPerson:(id)arg1;
- (id)lineInfosAtIndex:(int)arg1;
- (id)_newLocalizedCountryNameForCountryCode:(id)arg1;
- (BOOL)_updateCacheWithPropertyValue:(id)arg1 atIndex:(int)arg2;
- (id)propertyLabelAtIndex:(int)arg1 forceUseReadonly:(BOOL)arg2;
- (void)_setPropertyLabel:(id)arg1 atIndex:(int)arg2 markChanged:(BOOL)arg3;
- (BOOL)_updateCacheWithPropertyLabel:(id)arg1 atIndex:(int)arg2;
- (BOOL)_canSaveAtIndex:(int)arg1;
- (void)_getFromCacheAnyPropertyValue:(id *)arg1 andLabel:(id *)arg2 forRecordInfoDictionary:(id)arg3;
- (id)propertyValueAtIndex:(int)arg1 forceUseReadonly:(BOOL)arg2;
- (BOOL)shouldShowTextVibrationWhenEditing:(BOOL)arg1;
- (BOOL)shouldShowTextToneWhenEditing:(BOOL)arg1;
- (BOOL)shouldShowCallVibrationWhenEditing:(BOOL)arg1;
- (BOOL)shouldShowRingtoneWhenEditing:(BOOL)arg1;
- (id)_recordInfoDictionaryWithAllPeople;
- (void)_insertSingleValue:(id)arg1 label:(id)arg2 identifier:(int)arg3 forPerson:(id)arg4 indicesAndLabelsForValuesSeenAlready:(id)arg5;
- (id)_sortedPeople:(id)arg1;
- (int)indexOfTextToneInAlertEquivalentMultiValue;
- (void)_addValuesToCache;
- (BOOL)_instantMessageServiceIsSupportedForPerson:(id)arg1;
- (void)_setCountryCode:(id)arg1 atIndex:(int)arg2 withCountryName:(BOOL)arg3;
- (void)_setRecordInfoDictionary:(id)arg1 atIndex:(int)arg2;
- (BOOL)allowsAddingForPerson:(id)arg1;
- (id)_recordInfoForPerson:(id)arg1;
- (id)_recordInfoForPerson:(id)arg1 identifier:(int)arg2;
- (id)_recordInfoDictionaryForPerson:(id)arg1 identifier:(int)arg2;
- (BOOL)_recordInfoDictionary:(id)arg1 containsPerson:(id)arg2;
- (id)_findFuzzyMatchingValue:(id)arg1 inDictionary:(id)arg2;
- (id)_valueForCheckingExistenceOfPropertyValue:(id)arg1;
- (BOOL)_isPropertyValue:(id)arg1 equivalentTo:(id)arg2;
- (BOOL)_isBirthdayDate:(id)arg1 equivalentTo:(id)arg2;
- (BOOL)_isSocialProfile:(id)arg1 equivalentTo:(id)arg2;
- (BOOL)_updateCacheWithPropertyValue:(id)arg1 propertyLabel:(id)arg2 recordInfoDictionaryAtIndex:(unsigned int)arg3 shouldSetValue:(BOOL)arg4 shouldSetLabel:(BOOL)arg5;
- (BOOL)_updateCacheForPerson:(id)arg1 identifier:(int *)arg2 value:(id)arg3 label:(struct __CFString *)arg4 shouldSetValue:(BOOL)arg5 shouldSetLabel:(BOOL)arg6;
- (id)_recordInfoDictionaryAtIndex:(int)arg1;
- (BOOL)_setValueInCache:(void *)arg1 forPerson:(id)arg2 preventLabelChange:(BOOL)arg3;
- (BOOL)_isEmptyValue:(id)arg1 isPreinserted:(BOOL)arg2;
- (id)_stringRepresentationOfPropertyValue:(id)arg1;
- (id)shortServiceForService:(id)arg1;
- (void)_getAnyIdentifier:(int *)arg1 person:(id *)arg2 propertyValue:(id *)arg3 propertyLabel:(id *)arg4 fromRecordInfoDictionary:(id)arg5;
- (id)_bestValueBetween:(id)arg1 and:(id)arg2;
- (void)_getFromCachePropertyValue:(id *)arg1 andLabel:(id *)arg2 forPerson:(id)arg3 identifier:(int)arg4;
- (id)_allRecordInfosInRecordInfoDictionary:(id)arg1;
- (BOOL)_removeValueInCacheForPerson:(id)arg1;
- (id)_vibrationManager;
- (id)_toneManager;
- (id)_peopleInCache;
- (BOOL)_setValueInCache:(void *)arg1 forPerson:(id)arg2;
- (void *)_policyForPerson:(id)arg1;
- (void *)_copyCachedValueForPerson:(id)arg1;
- (BOOL)hasMultipleAlertsAtIndex:(int)arg1;
- (int)indexOfTextVibrationInAlertEquivalentMultiValue;
- (int)indexOfCallVibrationInAlertEquivalentMultiValue;
- (int)indexOfRingtoneInAlertEquivalentMultiValue;
- (id)serviceAtIndex:(int)arg1;
- (void)_reloadPreinsertedStuff:(BOOL)arg1 insertionStuff:(BOOL)arg2;
- (BOOL)canSaveAtIndex:(int)arg1 editableFlag:(BOOL)arg2;
- (void)trimValueForCountryCodeAtIndex:(int)arg1;
- (void)addPreinsertedItem;
- (void)setValue:(id)arg1 forKey:(id)arg2 forIndex:(int)arg3;
- (BOOL)allowsVibrations;
- (void)prepareActionsController:(id)arg1 withValueAtIndex:(int)arg2;
- (BOOL)canDeleteAtIndex:(int)arg1 editableFlag:(BOOL)arg2;
- (BOOL)removeItemAtRow:(int)arg1 whenEditing:(BOOL)arg2;
- (BOOL)setEmptyValueAtIndex:(int)arg1 editableFlag:(BOOL)arg2 whenEditing:(BOOL)arg3;
- (void)refreshVibrations;
- (BOOL)areLabelsEditable;
- (BOOL)shouldShowAlertsWhenEditing:(BOOL)arg1;
- (void)setDefaultPolicy:(void *)arg1;
- (id)rowsToDeleteInTransition:(BOOL)arg1;
- (id)rowsToInsertInTransition:(BOOL)arg1;
- (id)initWithProperty:(int)arg1 context:(void *)arg2;
- (void)getIndex:(int *)arg1 andEditableFlag:(char *)arg2 forRow:(int)arg3 whenEditing:(BOOL)arg4;
- (int)rowForIndex:(int)arg1 editableFlag:(BOOL)arg2 whenEditing:(BOOL)arg3;
- (int)rowCountWhenEditing:(BOOL)arg1;
- (int)indexOfIdentifier:(int)arg1 person:(id)arg2;
- (id)allRecordInfosAtIndex:(int)arg1;
- (id)localizedPropertyLabelAtIndex:(int)arg1;
- (id)stringValueAtIndex:(int)arg1;
- (void)getAnyIdentifier:(int *)arg1 andPerson:(id *)arg2 atIndex:(int)arg3;
- (void)setService:(id)arg1 atIndex:(int)arg2;
- (id)propertyValueAtIndex:(int)arg1;
- (void)setCountryCode:(id)arg1 atIndex:(int)arg2;
- (int)alertIdentifierAtIndex:(int)arg1;
- (void)setPropertyValue:(id)arg1 atIndex:(int)arg2;
- (int)insertionIndex;
- (void)setPropertyLabel:(id)arg1 atIndex:(int)arg2;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)_clearAllCachedInfo;
- (id)keyboardSettingsForKey:(id)arg1 info:(id)arg2;
- (BOOL)shouldDisambiguateNotes;
- (BOOL)instantMessageServiceIsSupported;
- (id)displayTextForInfo:(id)arg1;
- (id)valueForKey:(id)arg1 info:(id)arg2;
- (id)placeholderTextForKey:(id)arg1 info:(id)arg2;
- (id)lineInfosForInfo:(id)arg1;
- (id)propertyValueForInfo:(id)arg1;
- (id)labelTextForInfo:(id)arg1;
- (id)accountBadgeFromInfo:(id)arg1 whenEditing:(BOOL)arg2;
- (BOOL)editableFlagFromInfo:(id)arg1;
- (id)countryCodeAtIndex:(int)arg1;
- (void *)defaultPolicy;
- (id)propertyLabelAtIndex:(int)arg1;
- (id)actualPropertyLabelAtIndex:(int)arg1 forPerson:(id)arg2;
- (id)writablePeopleAtIndex:(int)arg1;
- (BOOL)allowsAdding;
- (void)updateRecord;
- (void)reloadFromModel;

@end

