//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSError, NSString, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    UIAlertView *_alert;
}

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forceFinishNow;
- (id)initWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
