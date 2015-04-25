//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DCIMImageWriter : NSObject
{
}

+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)diagnosticPathExtension;
+ (id)largeThumbnailInflightPathExtension;
+ (id)sharedDCIMWriter;
+ (id)avalanchePathExtension;
+ (id)incomingAssetFilenameDelimiter;
+ (id)incomingDirectoryPathForPhotoStream;
+ (id)incomingDirectoryPath;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString *)arg4 exifProperties:(id)arg5 imageRefOut:(struct CGImage **)arg6 lowResImageRefOut:(struct CGImage **)arg7 thumbnailDataOut:(id *)arg8 imageUTITypeOut:(const struct __CFString **)arg9 exifPropertiesOut:(id *)arg10 isJPEGOut:(char *)arg11 imageDataOut:(id *)arg12 imageOrientation:(int)arg13;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3;
+ (id)defaultFileExtensionForAssetType:(short)arg1;
- (BOOL)saveImageJobToDisk:(id)arg1;
- (void)_writeJPEGFromIOSurface:(struct __IOSurface *)arg1 toPath:(id)arg2 orientation:(int)arg3;
- (void)_writeJPEGToPath:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5;
- (id)_cameraAssetExtensionForType:(short)arg1;

@end
