//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCSubCalAccountPayload : MCPayload
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useSSL;
    NSString *_accountPersistentUUID;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
- (id)subtitle2Description;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
@property(readonly, nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
- (void).cxx_destruct;
- (id)subtitle2Label;
- (id)title;
- (id)description;
@property(readonly, retain, nonatomic) NSString *password; // @synthesize password=_password;

@end

