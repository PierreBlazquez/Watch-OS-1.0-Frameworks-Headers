//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    BOOL _flushEverything;
}

- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(BOOL)arg4;
@property(nonatomic) BOOL flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(char *)arg4 atIndex:(unsigned int)arg5;
- (unsigned int)tilesetCount;
- (id)init;
- (void)dealloc;

@end

