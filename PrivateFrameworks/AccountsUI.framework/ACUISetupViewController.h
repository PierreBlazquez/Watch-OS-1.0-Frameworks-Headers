//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSSetupController.h"

@interface ACUISetupViewController : PSSetupController
{
    BOOL _didAttemptDataclassSetup;
    BOOL _shouldForceMailSetup;
}

- (void)finishedAccountSetup;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;
- (void)_dismissAndNotifyParent;
- (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;

@end
