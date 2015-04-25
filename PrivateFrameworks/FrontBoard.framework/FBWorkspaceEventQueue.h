//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSEventQueue.h"

@interface FBWorkspaceEventQueue : BSEventQueue
{
}

+ (id)sharedInstance;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)_noteQueueDidUnlock;
- (void)_noteQueueDidLock;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned int)arg2;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;

@end
