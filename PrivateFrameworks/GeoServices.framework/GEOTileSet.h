//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable <NSCopying>
{
    NSString *_baseURL;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    int _updateBehavior;
    NSMutableArray *_validVersions;
    BOOL _multiTileURLUsesStatusCodes;
    struct {
        unsigned int updateBehavior:1;
        unsigned int multiTileURLUsesStatusCodes:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;
@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(retain, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;
@property(retain, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property(nonatomic) BOOL hasUpdateBehavior;
@property(nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
@property(nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property(readonly, nonatomic) BOOL hasLocalizationURL;
@property(readonly, nonatomic) BOOL hasMultiTileURL;
@property(readonly, nonatomic) BOOL hasBaseURL;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (void)clearSupportedLanguages;
- (unsigned int)supportedLanguagesCount;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (void)clearValidVersions;
- (unsigned int)validVersionsCount;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (id)dictionaryRepresentation;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

