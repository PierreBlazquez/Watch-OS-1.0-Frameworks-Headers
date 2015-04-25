//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBSectionIcon, NSArray, NSData, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sectionID;
    NSString *_subsectionID;
    int _sectionType;
    int _sectionCategory;
    BOOL _showsInNotificationCenter;
    unsigned int _suppressedSettings;
    unsigned int _pushSettings;
    unsigned int _alertType;
    unsigned int _notificationCenterLimit;
    BOOL _showsInLockScreen;
    BOOL _showsOnBluetoothDevices;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    BOOL _suppressFromSettings;
    BOOL _displaysCriticalBulletins;
    BOOL _allowsNotifications;
    BOOL _showsOnExternalDevices;
    BOOL _hideWeeApp;
    BOOL _showsMessagePreview;
    int _subsectionPriority;
    unsigned int _version;
}

+ (id)defaultSectionInfoForSection:(id)arg1;
+ (id)defaultSectionInfoForType:(int)arg1;
+ (BOOL)defaultStateForSetting:(unsigned int)arg1 inSectionType:(int)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property(copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property(copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle; // @synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle;
@property(readonly, copy, nonatomic) NSData *iconData;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
- (void)updateWithDefaultSectionInfo:(id)arg1;
@property(nonatomic) unsigned int bulletinCount;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
- (void)_addSubsection:(id)arg1;
@property(nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(nonatomic) BOOL showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;
@property(nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(copy, nonatomic) NSArray *dataProviderIDs; // @synthesize dataProviderIDs=_dataProviderIDs;
@property(nonatomic) BOOL allowsNotifications;
@property(nonatomic) BBSectionInfo *parentSection; // @synthesize parentSection=_parentSection;
@property(nonatomic) unsigned int pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
- (void)_configureWithDefaultsForSectionType:(int)arg1;
@property(copy, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) BOOL hideWeeApp; // @synthesize hideWeeApp=_hideWeeApp;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;

@end

