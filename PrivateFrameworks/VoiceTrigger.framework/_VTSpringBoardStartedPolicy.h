//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTSpringBoardStartedPolicy : _VTStatePolicy
{
    BOOL _springboardStarted;
    int _notifyToken;
}

- (void)_stopListening;
- (void)waitForSpringBoard;
- (id)initWithCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)dealloc;

@end

