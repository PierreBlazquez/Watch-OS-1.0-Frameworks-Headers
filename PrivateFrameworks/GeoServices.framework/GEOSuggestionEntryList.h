//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOSuggestionEntryList : PBCodable <NSCopying>
{
    NSString *_localizedSectionHeader;
    NSMutableArray *_suggestionEntries;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasLocalizedSectionHeader;
- (id)suggestionEntriesAtIndex:(unsigned int)arg1;
- (void)clearSuggestionEntries;
- (void)addSuggestionEntries:(id)arg1;
@property(retain, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(retain, nonatomic) NSMutableArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
- (unsigned int)suggestionEntriesCount;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

