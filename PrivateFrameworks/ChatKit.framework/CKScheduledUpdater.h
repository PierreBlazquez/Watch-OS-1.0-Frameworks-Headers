//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater
{
    NSCountedSet *_holdingUpdatesKeys;
}

- (void)updateIfNeeded;
- (void)setNeedsUpdate;
@property(retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // @synthesize holdingUpdatesKeys=_holdingUpdatesKeys;
- (BOOL)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;
- (void)dealloc;

@end

