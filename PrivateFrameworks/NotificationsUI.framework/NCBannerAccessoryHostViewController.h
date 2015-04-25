//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "NCBannerAccessoryHostInterface.h"

@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface>
{
    id <NCBannerAccessoryHostViewControllerDelegate> _delegate;
}

+ (void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)_setSticky:(BOOL)arg1;
- (void)_becomeSticky;
- (void)_dismiss;
@property(nonatomic) id <NCBannerAccessoryHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@end

