//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverController.h"

#import "MPAVRoutingViewControllerDelegate.h"

@class NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _mirroringIncluded;
}

- (id)_tableViewController;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 includeMirroring:(BOOL)arg2;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (id)routingController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

