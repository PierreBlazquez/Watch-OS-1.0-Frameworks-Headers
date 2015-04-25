//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, SKStarRatingAlertView;

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate>
{
    SKStarRatingAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
}

- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (void)showAlertView:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

