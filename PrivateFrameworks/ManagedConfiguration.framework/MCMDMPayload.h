//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSData, NSString;

@interface MCMDMPayload : MCPayload
{
    NSString *_identityUUID;
    NSData *_identityPersistentID;
    BOOL _useDevelopmentAPNS;
    NSString *_topic;
    NSString *_serverURLString;
    NSString *_checkInURLString;
    int _accessRights;
    BOOL _signMessage;
    BOOL _checkOutWhenRemoved;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) BOOL checkOutWhenRemoved; // @synthesize checkOutWhenRemoved=_checkOutWhenRemoved;
@property(readonly, nonatomic) BOOL signMessage; // @synthesize signMessage=_signMessage;
@property(readonly, nonatomic) int accessRights; // @synthesize accessRights=_accessRights;
@property(readonly, retain, nonatomic) NSString *checkInURLString; // @synthesize checkInURLString=_checkInURLString;
@property(readonly, nonatomic) BOOL useDevelopmentAPNS; // @synthesize useDevelopmentAPNS=_useDevelopmentAPNS;
@property(readonly, retain, nonatomic) NSString *serverURLString; // @synthesize serverURLString=_serverURLString;
@property(readonly, retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSData *identityPersistentID; // @synthesize identityPersistentID=_identityPersistentID;
@property(readonly, retain, nonatomic) NSString *identityUUID; // @synthesize identityUUID=_identityUUID;
@property(readonly, retain, nonatomic) NSArray *localizedAccessRightDescriptions;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (id)_invalidTopicError;
- (id)_invalidRightsError;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void).cxx_destruct;
- (id)title;
- (id)description;

@end

