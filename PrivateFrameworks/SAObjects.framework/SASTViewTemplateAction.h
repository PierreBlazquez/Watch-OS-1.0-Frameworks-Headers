//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SASTTemplateAction.h"

@class NSArray, NSString, SASTItemGroup;

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>
{
}

+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)viewTemplateAction;
@property(copy, nonatomic) NSString *viewTitle;
@property(retain, nonatomic) SASTItemGroup *itemGroupView;
- (id)encodedClassName;
@property(copy, nonatomic) NSArray *commands;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

