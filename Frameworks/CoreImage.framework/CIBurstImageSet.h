//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject
{
    CIBurstImageSetInternal *_priv;
}

+ (id)burstImageSetWithOptions:(id)arg1;
+ (id)burstImageSet;
+ (id)defaultVersionString;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;
- (id)imageClusterForIndex:(unsigned int)arg1;
- (unsigned int)imageClusterCount;
- (id)coverImageIdentifier;
- (id)statsForImageWithIdentifier:(id)arg1;
- (double)secondsSinceStart;
- (id)allImageIdentifiers;
- (BOOL)isAction;
- (BOOL)isPortrait;
- (id)imageClusterForIdentifier:(id)arg1;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)bestImageIdentifiers;
- (id)burstId;

@end

