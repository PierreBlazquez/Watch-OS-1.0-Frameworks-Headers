//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOSSystemShell/IOSSHLActivateShellTransaction.h>

@class IOSSHLApplication;

@interface IOSSHLAppExitedTransaction : IOSSHLActivateShellTransaction
{
    IOSSHLApplication *_exitingApplication;
}

@property(retain, nonatomic) IOSSHLApplication *exitingApplication; // @synthesize exitingApplication=_exitingApplication;
- (id)_customizedDescriptionProperties;
- (void)_captureDepartingContext;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;
- (void)_activateEnteringScenes;
- (id)initWithApplication:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;

@end

