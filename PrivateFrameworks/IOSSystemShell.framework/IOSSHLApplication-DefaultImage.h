//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOSSystemShell/IOSSHLApplication.h>

@interface IOSSHLApplication (DefaultImage)
+ (void)load;
- (struct CGSize)_screenSizeForScreen:(id)arg1;
- (int)_fallbackImageOrientationForLaunchingOrientation:(int)arg1;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(int)arg1;
- (id)_orientationImageTagForLaunchingOrientation:(int)arg1;
- (id)_defaultPNGImageInfoForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 launchingOrientation:(int)arg4;
- (BOOL)_infoplist_defaultPNGCalculateContainsCorgiImage;
- (id)_imageNamesFromInfoDictionary:(id)arg1;
- (void)_imageOrientationParametersForLaunchingOrientation:(int)arg1 imageTag:(id *)arg2 fallbackImageTag:(id *)arg3 fallbackOrientation:(int *)arg4;
- (id)defaultPNGPathForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 launchingOrientation:(int)arg4 imageOrientation:(int *)arg5 resultingScale:(float *)arg6;
- (id)_fallbackOrientationStringForOrientation:(int)arg1 fallbackOrientation:(int *)arg2;
- (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
- (BOOL)_applicationDoesNotHaveRestorationArchive;
- (BOOL)isWebApplication;
- (id)_defaultPNGForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 launchingOrientation:(int)arg4 orientation:(int *)arg5;
- (id)_defaultPNGNameFromSuspensionSettings;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)arg1;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)arg1;
- (id)_defaultPNGNameFromActivationSettings;
- (int)_workspaceTypeFromSceneID:(id)arg1;
- (id)_infoplist_defaultPNGPathForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 launchingOrientation:(int)arg4 imageOrientation:(int *)arg5 resultingScale:(float *)arg6;
- (id)_pathForExistingImageInCandidates:(id)arg1 forSceneID:(id)arg2 size:(struct CGSize)arg3 scale:(float)arg4 launchingOrientation:(int)arg5 imageOrientation:(int *)arg6 resultingScale:(float *)arg7;
- (void)_addImageName:(id)arg1 toImageNamesArray:(id)arg2 sceneID:(id)arg3 size:(struct CGSize)arg4;
- (id)_defaultImageNameForSceneID:(id)arg1;
- (id)_defaultPNGNameUsingFallbacksForSceneID:(id)arg1;
@end
