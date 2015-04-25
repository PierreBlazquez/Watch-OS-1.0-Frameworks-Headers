//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBFLegibilitySettingsProvider.h"
#import "SBFWallpaperViewLegibilityObserver.h"

@class NSDictionary, NSString, NSTimer, SBFLockScreenSimpleDateFormatter, UIImage, _UILegibilitySettings;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    UIImage *_wallpaperImage;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    BOOL _colorSamplingEnabled;
    BOOL _allowScrolling;
    SBFLockScreenSimpleDateFormatter *_dateFormatter;
    int _variant;
    NSString *_name;
    BOOL _motionEnabled;
}

@property(nonatomic) BOOL motionEnabled; // @synthesize motionEnabled=_motionEnabled;
- (void)setWallpaperForLocations:(int)arg1;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithWallpaperVariant:(int)arg1;
- (id)initWithColorSamplingEnabled:(BOOL)arg1;
- (void)_startDateTimer;
- (id)_previewView;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 variant:(int)arg2 options:(id)arg3;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 image:(id)arg2 supportsCropping:(BOOL)arg3 variant:(int)arg4;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect)arg1 variant:(int)arg2;
- (float)_parallaxFactor;
- (id)_backdropWallpaperView;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1;
- (id)_wallpaperView;
@property(readonly) UIImage *wallpaperImage;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;
@property(nonatomic) BOOL colorSamplingEnabled;
@property(readonly, retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithImage:(id)arg1;
@property(nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

