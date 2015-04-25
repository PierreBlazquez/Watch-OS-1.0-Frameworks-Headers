//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHObject.h>

#import "_PLImageLoadingAsset.h"

@class CLLocation, NSArray, NSData, NSDate, NSString, NSURL;

@interface PHAsset : PHObject <_PLImageLoadingAsset>
{
    BOOL _hidden;
    BOOL _favorite;
    BOOL _complete;
    BOOL _hasAdjustments;
    BOOL _cloudIsDeletable;
    int _mediaType;
    unsigned int _mediaSubtypes;
    unsigned int _pixelWidth;
    unsigned int _pixelHeight;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_burstIdentifier;
    NSString *_uniformTypeIdentifier;
    unsigned int _persistenceState;
    unsigned int _thumbnailIndex;
    NSString *_directory;
    NSString *_filename;
    NSDate *_trashedDate;
    int _exifOrientation;
    NSArray *_faceRegions;
    int _assetSource;
    NSString *_cloudIdentifier;
    int _cloudPlaceholderKind;
    int _avalanchePickType;
    NSData *_locationData;
    double _duration;
}

+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(int)arg1 options:(id)arg2;
+ (BOOL)managedObjectSupportsiTunesSyncType;
+ (BOOL)managedObjectSupportsCloudSharedType;
+ (BOOL)managedObjectSupportsPhotoStreamType;
+ (BOOL)managedObjectSupportsWallpaperType;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsHiddenState;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (unsigned int)pl_phAssetMediaSubtypeForPLAssetSubtype:(short)arg1;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)managedEntityName;
- (double)aspectRatio;
@property(readonly, nonatomic) unsigned int pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) unsigned int pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) BOOL cloudIsDeletable; // @synthesize cloudIsDeletable=_cloudIsDeletable;
@property(readonly, nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
@property(readonly, nonatomic) BOOL isHDVideo;
- (BOOL)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (BOOL)isCloudPhotoLibraryAsset;
- (int)cloudSharedAssetPlaceholderKind;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
@property(readonly, nonatomic) BOOL isPartOfBurst;
- (id)debugFilename;
- (int)originalImageOrientation;
- (id)assetsLibraryURL;
- (id)pathForAdjustmentDirectory;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)pathForMutationsDirectory;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForAdjustmentFile;
- (BOOL)isAudio;
@property(readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property(readonly, nonatomic) unsigned int thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
- (BOOL)isMogul;
- (BOOL)isTimelapsePlaceholder;
- (BOOL)isCloudPlaceholder;
- (BOOL)isStreamedVideo;
- (id)thumbnailIdentifier;
@property(readonly, nonatomic) BOOL isJPEG;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int *)arg3;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (BOOL)hasLegacyAdjustments;
- (id)pl_photoLibrary;
- (short)kindSubtype;
- (BOOL)isInFlight;
@property(readonly, nonatomic) int cloudPlaceholderKind; // @synthesize cloudPlaceholderKind=_cloudPlaceholderKind;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
- (unsigned int)effectiveThumbnailIndex;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSData *locationData; // @synthesize locationData=_locationData;
@property(readonly, nonatomic) BOOL hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
- (id)mainFileURL;
- (BOOL)isPhoto;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (short)savedAssetType;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)isCloudSharedAsset;
- (id)pathForOriginalFile;
@property(readonly, copy, nonatomic) NSString *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(readonly, nonatomic) BOOL complete; // @synthesize complete=_complete;
- (BOOL)isVideo;
- (short)kind;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *location;
- (struct CGSize)imageSize;
@property(readonly, nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(readonly, nonatomic) int imageOrientation;
- (int)orientation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) unsigned int persistenceState; // @synthesize persistenceState=_persistenceState;
@property(readonly, nonatomic) NSString *metadataDebugDescription;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForXMPFile;
- (void)fetchKeywordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)duplicateProperties;
- (id)momentProperties;
- (id)embeddedThumbnailProperties;
- (id)PTPProperties;
- (id)internalProperties;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic) unsigned int burstSelectionTypes;
- (id)fileURLForMediumPreview;
- (id)fileURLForLargePreview;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForAdjustmentsDirectory;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
@property(readonly, nonatomic) int assetSource; // @synthesize assetSource=_assetSource;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)reservedFileURLForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int *)arg3;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)originalMetadataProperties;
- (void)fetchPropertySetsIfNeeded;
@property(readonly, nonatomic) NSURL *ALAssetURL;
- (id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(BOOL)arg3;
- (void)cancelContentEditingInputRequest:(unsigned int)arg1;
- (unsigned int)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned int mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (id)pl_managedAsset;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

