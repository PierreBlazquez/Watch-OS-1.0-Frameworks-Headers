//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
{
}

- (const CDStruct_9508427b *)_sortedEffectDefinitions;
- (const CDStruct_9508427b *)_sortedElementDefinitions;
- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (unsigned int)effectDefinitionCount;
- (const CDStruct_9508427b *)effectDefinitionWithName:(id)arg1;
- (const CDStruct_9508427b *)sortedEffectDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_9508427b *)effectDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_7d98abf3 *)categoryForElementDefinition:(const CDStruct_9508427b *)arg1;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (const CDStruct_9508427b *)elementDefinitionWithName:(id)arg1;
- (const CDStruct_9508427b *)sortedElementDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)elementDefinitionCount;
- (const CDStruct_9508427b *)elementDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)elementCategoryCount;
- (const CDStruct_7d98abf3 *)elementCategoryAtIndex:(unsigned int)arg1;
- (int)schemaVersion;

@end

