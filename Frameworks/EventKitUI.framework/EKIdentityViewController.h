//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ABPersonViewControllerDelegate.h"
#import "EKEditItemViewControllerProtocol.h"

@class ABPersonViewController, NSString;

@interface EKIdentityViewController : UIViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
    ABPersonViewController *_personViewController;
}

- (void)setIdentity:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL presentModally;
@property(readonly) Class superclass;

@end

