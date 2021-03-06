//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PSViewController<ACUISettingsPluginParentProtocol>;

@interface ACUISettingsPluginManager : NSObject
{
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}

- (id)contactsSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)mailSettingsPlugin;
- (void)parentViewControllerWillDisappear;
- (id)initWithParentViewController:(id)arg1;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (void).cxx_destruct;

@end

