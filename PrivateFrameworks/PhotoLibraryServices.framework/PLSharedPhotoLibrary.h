//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLSharedPhotoLibrary : PLPhotoLibrary
{
}

+ (id)sharedPhotoLibrary;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (unsigned int)concurrencyType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;

@end

