//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>
{
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    BOOL _legacy;
    int _domain;
    NEKeychainItem *_oldItem;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)remove;
@property(copy) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) int domain; // @synthesize domain=_domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIdentifierInternal:(id)arg1;
@property(copy) NEKeychainItem *oldItem; // @synthesize oldItem=_oldItem;
- (void)addOrUpdateWithConfiguration:(id)arg1 passwordType:(int)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;
- (id)copyKindForPasswordType:(int)arg1;
- (BOOL)copyDataFromKeychainItem:(void *)arg1 outPassword:(id *)arg2 outIdentifier:(id *)arg3 outPersistentReference:(id *)arg4;
@property(readonly) BOOL legacy; // @synthesize legacy=_legacy;
- (id)copyPassword;
- (id)initWithPassword:(id)arg1 domain:(int)arg2;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(int)arg2;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(int)arg3 identifierSuffix:(id)arg4;
- (id)initWithIdentifier:(id)arg1 domain:(int)arg2;
@property(copy) NSData *persistentReference;
- (id)initWithPersistentReference:(id)arg1 domain:(int)arg2;
- (id)descriptionWithIndent:(int)arg1;
@property(copy) NSString *password;

@end

