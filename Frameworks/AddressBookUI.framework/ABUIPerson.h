//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSString;

@interface ABUIPerson : NSObject <NSCopying>
{
    void *_record;
    void *_addressBook;
    void *_source;
    NSArray *_linkedPeople;
}

+ (id)person;
+ (id)personInAddressBook:(void *)arg1;
+ (id)personWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
+ (id)personInSource:(void *)arg1;
+ (id)personWithABPerson:(void *)arg1;
+ (void)setAccountStore:(id)arg1;
@property(readonly) int recordID;
@property(readonly) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)setValue:(void *)arg1 forProperty:(int)arg2;
@property(readonly) BOOL hasPhoto;
@property(readonly) NSString *phoneticName;
@property(readonly) void *record; // @synthesize record=_record;
@property(readonly) int kind;
- (id)valueForProperty:(int)arg1;
@property(readonly) void *source; // @synthesize source=_source;
@property(readonly) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly) BOOL hasPreferredPhoto;
- (void)setAsPreferredPersonForPhoto;
- (void)mergeProperties:(id)arg1 fromRecord:(void *)arg2;
- (BOOL)_updatePersonKindFromNamePreserveOrganizationKind:(BOOL)arg1;
@property(readonly) unsigned int linkedPeopleCount;
- (id)initWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
- (id)initWithABPerson:(void *)arg1;
@property(readonly) unsigned int recordType;
- (id)reloadFromDB;
@property(readonly) BOOL recordWasDeleted;
- (void)setAsPreferredPersonForName;
@property(readonly) NSString *preferredName;
@property(readonly) BOOL hasLinkedPeople;
@property(readonly) BOOL isRemote;
- (BOOL)updatePersonKindFromName;
- (void)mergeValuesFromRecord:(void *)arg1;
- (BOOL)linkToPerson:(id)arg1;
- (void)setNamePropertiesFromPerson:(id)arg1;
@property(readonly) BOOL areAllLinkedPeopleReadonly;
- (id)policiesForAllLinkedPeople;
@property(readonly) BOOL isFromFacebook;
@property(readonly) ABUIPerson *preferredPersonForPhoto;
- (BOOL)updateNewPersonKindFromName;
- (BOOL)addToAddressBook:(void *)arg1;
- (BOOL)addToGroup:(void *)arg1;
- (id)nameIgnoringOrganization:(BOOL)arg1;
- (void)removePropertyValue:(int)arg1;
@property(readonly) ABUIPerson *preferredPersonForName;
@property(readonly) NSArray *linkedPeople;
@property(readonly) BOOL isMeCard;
- (BOOL)allowsCustomLabelsForProperty:(int)arg1;
@property(readonly) void *policy;
- (void *)copyPropertyValue:(int)arg1;
@property(readonly) NSString *secondarySourceName;
@property(readonly) NSString *primarySourceName;
@property(readonly) NSData *preferredPhotoThumbnail;
@property(readonly) NSData *photoThumbnail;
@property(readonly) BOOL isReadonly;
@property(readonly) BOOL hasValidRecordID;

@end

