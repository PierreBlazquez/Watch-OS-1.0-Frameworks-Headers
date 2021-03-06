//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, VKPShieldPack;

@interface VKShieldAtlas : NSObject
{
    NSMapTable *_atlasToImages;
    VKPShieldPack *_shieldPack;
}

- (id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 size:(int)arg4 numberOfLines:(unsigned int)arg5 genericShieldGenerator:(id)arg6 colors:(CDStruct_aed172a0 *)arg7;
- (id)initWithShieldPack:(id)arg1;
- (void)purge;
- (void)dealloc;

@end

