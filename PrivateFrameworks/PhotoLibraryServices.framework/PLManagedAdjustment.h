//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSDictionary, NSString, PLManagedAsset;

@interface PLManagedAdjustment : _PLManagedAdjustment
{
}

+ (void)convertStraightenAngle:(float)arg1 andCropRect:(struct CGRect)arg2 toAffineTransform:(struct CGAffineTransform *)arg3 andCropRect:(struct CGRect *)arg4;
+ (struct CGRect)convertCropRect:(struct CGRect)arg1 fromImageSize:(struct CGSize)arg2 toImageSize:(struct CGSize)arg3;
+ (void)convertAffineTransform:(struct CGAffineTransform)arg1 andCropRect:(struct CGRect)arg2 toStraightenAngle:(float *)arg3 andCropRect:(struct CGRect *)arg4;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 withOriginalImageSize:(struct CGSize)arg3 effectFilterCount:(unsigned int *)arg4;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 effectFilterCount:(unsigned int *)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (void)fixupAssetSizeFromAdjustments:(id)arg1;
- (id)metadataProperties;
@property(nonatomic) int adjustmentType;

// Remaining properties
@property(copy, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(copy, nonatomic) NSString *filterName; // @dynamic filterName;
@property(copy, nonatomic) NSDictionary *filterSettings; // @dynamic filterSettings;

@end

