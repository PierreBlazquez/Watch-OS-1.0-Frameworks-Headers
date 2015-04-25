//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLCropModel : NSObject
{
    struct CGSize _nsqPhotoSize;
    float _angle;
    float _cropConstrain;
    struct CGSize _photoSize;
    struct CGRect _cropRect;
}

+ (BOOL)validateCropRectFor0Angle:(struct CGRect)arg1;
@property struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (BOOL)hasCrop;
@property float cropConstrain; // @synthesize cropConstrain=_cropConstrain;
@property(readonly) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
- (id)croppedImageFromImage:(id)arg1;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2 withNewCropRect:(struct CGRect)arg3 andOrientation:(int)arg4;
- (struct CGRect)newCropRectForRatio:(float)arg1 withCropRect:(struct CGRect)arg2 andFaceDictionaries:(id)arg3;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2;
- (struct CGRect)normalizedIntersectionPointsForCropWithLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)changeCropAspectRatioTo:(float)arg1 withNewCropRect:(struct CGRect)arg2;
- (void)adjustEdgeForDragAction:(int)arg1 withAmount:(struct CGPoint)arg2 andLockAspectRatio:(BOOL)arg3;
- (void)translate:(float)arg1 atAngle:(float)arg2;
- (void)scale:(float)arg1 fromPoint:(struct CGPoint)arg2;
- (void)rotate:(float)arg1 fromPoint:(struct CGPoint)arg2;
- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(struct CGPoint)arg2 andLockAspectRatio:(BOOL)arg3;
- (float)maxAllowedTranslateWithDirection:(float)arg1;
- (int)touchedImageSidesForCurrentCrop;
- (float)maxAllowedScaleFromPoint:(struct CGPoint)arg1 scaleUp:(BOOL)arg2;
- (float)maxAllowedRotationFromPoint:(struct CGPoint)arg1 counterClockwise:(BOOL)arg2;
- (int)scoreFaces:(id)arg1 ForTransform:(struct CGAffineTransform)arg2;
- (struct CGAffineTransform)transformForTrialCropRect:(struct CGRect)arg1;
- (struct CGRect)ciCropRectForSourceSize:(struct CGSize)arg1;
- (struct CGAffineTransform)ciAffineTransformForSourceSize:(struct CGSize)arg1;
- (struct CGRect)bestCropRectForIntialCropRect:(struct CGRect)arg1 inTrialRect:(struct CGRect)arg2 withFaceDictionaries:(id)arg3;
- (struct CGRect)maxAllowedPanWithCropRect:(struct CGRect)arg1;
- (struct CGRect)recomputeCropRect:(struct CGRect)arg1 forStraightenAngle:(float)arg2;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2 andOrientation:(int)arg3;
- (void)calculateCornerPoints:(struct CGPoint *)arg1;
- (void)calculateCornerPoints:(struct CGPoint *)arg1 forCropRect:(struct CGRect)arg2;
- (void)setCropAndAngleFromCIAffineTransform:(struct CGAffineTransform)arg1 andCICrop:(struct CGRect)arg2 forSourceSize:(struct CGSize)arg3;
- (struct CGAffineTransform)CGAffineTransformForSize:(struct CGSize)arg1;
- (struct CGSize)croppedSizeForSize:(struct CGSize)arg1;
- (struct CGAffineTransform)CGAffineTransform;
- (struct CGSize)croppedSize;
- (id)initWithSize:(struct CGSize)arg1 andDictionary:(id)arg2;
- (id)initWithModel:(id)arg1;
@property float angle; // @synthesize angle=_angle;
- (void)reset;
- (id)initWithSize:(struct CGSize)arg1;

@end

