//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/CNContact.h>

@class NSArray, NSDateComponents, NSString;

@interface CNMutableContact : CNContact
{
}

+ (id)contactWithRecord:(void *)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecord:(void *)arg1;
+ (id)contact;
@property(copy) NSString *nameSuffix;
@property(copy) NSString *namePrefix;
- (BOOL)hasChanges;
@property(copy) NSArray *emailAddresses;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)init;
@property(copy) NSDateComponents *birthday;
@property(copy) NSArray *textTone;
@property(copy) NSArray *ringtone;
@property(copy) NSArray *socialProfiles;
@property(copy) NSArray *relatedNames;
@property(copy) NSArray *instantMessageAddresses;
@property(copy) NSArray *dates;
@property(copy) NSArray *urlAddresses;
- (void)setPreferredForPhoto;
- (void)setPreferredForName;
@property(copy) NSString *note;
@property(copy) NSArray *birthdays;
@property(copy) NSString *jobTitle;
@property(copy) NSString *departmentName;
@property(copy) NSString *organizationName;
@property(copy) NSString *phoneticFamilyName;
@property(copy) NSString *phoneticMiddleName;
@property(copy) NSString *phoneticGivenName;
@property(copy) NSString *nickname;
@property(copy) NSString *previousFamilyName;
@property(copy) NSString *middleName;
- (struct __CFString *)_ABLabelFromCNLabel:(id)arg1;
- (void)_setStringMultiValueForProperty:(int)arg1 values:(id)arg2;
- (void)_setMultiValueForProperty:(int)arg1 values:(id)arg2 valueFromCNValue:(CDUnknownBlockType)arg3;
@property(copy) NSDateComponents *alternateBirthday;
@property int contactType;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (id)initWithRecord:(void *)arg1 unify:(BOOL)arg2 originalRecord:(void *)arg3;
@property(copy) NSArray *postalAddresses;
- (BOOL)saveContact;
@property(copy) NSString *familyName;
@property(copy) NSString *givenName;
@property(copy) NSArray *phoneNumbers;
- (BOOL)addToGroup:(void *)arg1;
- (BOOL)unlinkContact;
- (BOOL)linkToContact:(id)arg1;
- (BOOL)saveContactInAddressBook:(void *)arg1;
- (void)updateContactType:(BOOL)arg1;
- (void)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (BOOL)deleteContact;
- (id)initWithRecord:(void *)arg1;

@end

