//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKTextureCache : NSObject
{
    int filteringMode;
    unsigned int texId;
    int texInternalFormat;
    unsigned int texFormat;
    unsigned int texType;
    struct CGSize size;
    struct CGSize pixelSize;
    BOOL isLoaded;
    BOOL hasAlpha;
    BOOL isPOT;
    char *pixelData;
    unsigned int *alphaMap;
    struct CGSize alphaMapSize;
    int state;
    int lock;
    struct CGImage *collisionMask;
    int wrapMode;
}

@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize;
@property(nonatomic) char *pixelData; // @synthesize pixelData;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded;
- (id).cxx_construct;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) int state; // @synthesize state;
- (id)init;
- (void)dealloc;
@property(nonatomic) int wrapMode; // @synthesize wrapMode;
@property(nonatomic) unsigned int texType; // @synthesize texType;
@property(nonatomic) unsigned int texFormat; // @synthesize texFormat;
@property(nonatomic) int texInternalFormat; // @synthesize texInternalFormat;
@property(nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize;
@property(nonatomic) unsigned int *alphaMap; // @synthesize alphaMap;
@property(nonatomic) BOOL hasAlpha; // @synthesize hasAlpha;
@property(nonatomic) BOOL isPOT; // @synthesize isPOT;
@property(nonatomic) unsigned int texId; // @synthesize texId;
@property(readonly, nonatomic, getter=getLock) int *lock;
@property(nonatomic) int filteringMode; // @synthesize filteringMode;

@end

