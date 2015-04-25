//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEODBReader.h>

@interface GEOPlaceDataDBReader : GEODBReader
{
    struct sqlite3_stmt *_queryPhoneNumber;
    struct sqlite3_stmt *_queryAllPlaceDataEntries;
    struct sqlite3_stmt *_queryAllPhoneNumberEntries;
}

- (id)_placeCardDataForMuid:(unsigned long long)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (id)allCacheEntries;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (void)_openDB;

@end

