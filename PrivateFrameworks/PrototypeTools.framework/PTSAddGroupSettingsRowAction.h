//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction
{
    Class _settingsClass;
    NSString *_groupKeyPath;
}

+ (id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2;
@property(retain, nonatomic) Class settingsClass; // @synthesize settingsClass=_settingsClass;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
@property(copy, nonatomic) NSString *groupKeyPath; // @synthesize groupKeyPath=_groupKeyPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

