//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface MCBook : NSObject <NSCopying>
{
    NSString *_author;
    NSString *_title;
    NSString *_kind;
    NSString *_fullPath;
    NSString *_version;
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_buyParams;
    NSString *_state;
    NSNumber *_downloadIdentifier;
    MCBook *_previousVersion;
}

@property(copy, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(retain, nonatomic) MCBook *previousVersion; // @synthesize previousVersion=_previousVersion;
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;
- (id)manifestDictionary;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
- (id)initWithManifestDictionary:(id)arg1;
- (id)friendlyName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSNumber *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;

@end

