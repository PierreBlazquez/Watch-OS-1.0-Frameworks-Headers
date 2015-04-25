//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBWindowContextAppearance.h"

@class FBWindowContextHostManager, NSString, UIColor;

@interface FBWindowContextHostWrapperView : UIView <FBWindowContextAppearance>
{
    FBWindowContextHostManager *_manager;
    unsigned int _appearanceStyle;
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
}

- (void)updateBackgroundColor;
@property(readonly, nonatomic) struct CGRect referenceFrame; // @dynamic referenceFrame;
- (void)clearManager;
- (id)initWithHostManager:(id)arg1;
@property(readonly, nonatomic, getter=isContextHosted) BOOL contextHosted; // @dynamic contextHosted;
@property(nonatomic) unsigned int appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting;
- (id)_stringForAppearanceStyle;
- (void)_hostingStatusChanged;
- (id)_backgroundColorWhileNotHosting;
- (id)_backgroundColorWhileHosting;
- (BOOL)_isReallyHosting;
- (void)_toggleBackgroundColorIfNecessary;
- (void)_setAppearanceStyle:(unsigned int)arg1 force:(BOOL)arg2;
- (void)updateFrame;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
@property(readonly, nonatomic) float level;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)window;
- (void)dealloc;
@property(readonly, nonatomic) FBWindowContextHostManager *manager; // @synthesize manager=_manager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

