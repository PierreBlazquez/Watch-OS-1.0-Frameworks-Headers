//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CUISAlertPlatterViewBackgroundSource.h"

@class CUISAlertBackground, NSString, UIImageView;

@interface CUISAlertBackgroundView : UIView <CUISAlertPlatterViewBackgroundSource>
{
    BOOL _observesBackgroundChanges;
    BOOL _observingBackgroundChanges;
    UIImageView *_backgroundView;
    CUISAlertBackground *_background;
}

- (BOOL)postsDidMoveToWindowNotification;
- (id)snapshotImage;
@property(nonatomic) BOOL observesBackgroundChanges; // @synthesize observesBackgroundChanges=_observesBackgroundChanges;
@property(nonatomic, getter=isObservingBackgroundChanges) BOOL observingBackgroundChanges; // @synthesize observingBackgroundChanges=_observingBackgroundChanges;
- (void)backgroundDidChangeNotification:(id)arg1;
- (void)applyBackground:(id)arg1;
- (void)stopObservingBackgroundChanges;
- (void)startObservingBackgroundChanges;
- (id)alertViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) CUISAlertBackground *background; // @synthesize background=_background;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

