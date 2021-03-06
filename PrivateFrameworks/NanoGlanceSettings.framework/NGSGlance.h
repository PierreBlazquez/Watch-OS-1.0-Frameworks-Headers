//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface NGSGlance : NSObject <NSCopying>
{
    BOOL _cannotBeDisabled;
    BOOL _active;
    BOOL _defaultGlance;
    BOOL _prelaunch;
    NSString *_name;
    NSString *_appBundleIdentifier;
    NSString *_glanceBundleIdentifier;
    NSString *_sockPuppetIdentifier;
}

@property(nonatomic) BOOL prelaunch; // @synthesize prelaunch=_prelaunch;
@property(nonatomic, getter=isDefaultGlance) BOOL defaultGlance; // @synthesize defaultGlance=_defaultGlance;
@property(copy, nonatomic) NSString *sockPuppetIdentifier; // @synthesize sockPuppetIdentifier=_sockPuppetIdentifier;
@property(nonatomic) BOOL cannotBeDisabled; // @synthesize cannotBeDisabled=_cannotBeDisabled;
@property(copy, nonatomic) NSString *glanceBundleIdentifier; // @synthesize glanceBundleIdentifier=_glanceBundleIdentifier;
@property(readonly, nonatomic) NSString *glanceIdentifier;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

