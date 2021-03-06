//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface ISReview : NSObject <NSCoding, NSCopying>
{
    int _assetType;
    NSString *_body;
    unsigned int _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    BOOL _nicknameIsConfirmed;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned int _titleMaxLength;
}

@property(nonatomic) int assetType; // @synthesize assetType=_assetType;
- (BOOL)saveAsDraft;
- (BOOL)restoreFromDraft;
- (BOOL)removeDraft;
@property(readonly, nonatomic) BOOL hasSavedDraft;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2;
@property(nonatomic) unsigned int titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;
@property(retain, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property(nonatomic) unsigned int nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property(nonatomic) BOOL nicknameIsConfirmed; // @synthesize nicknameIsConfirmed=_nicknameIsConfirmed;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(nonatomic) unsigned int bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
- (id)_draftFileName;
- (id)_draftsDirectoryPath;
@property(nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void)loadFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;

@end

