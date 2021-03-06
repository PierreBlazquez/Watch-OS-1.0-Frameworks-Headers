//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSTimer;

@interface NCABPreferencesListener : NSObject
{
    BOOL _active;
    NSMutableSet *_observers;
    NSTimer *_debounceTimer;
}

+ (id)sharedListener;
- (id)addObserverOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSTimer *debounceTimer; // @synthesize debounceTimer=_debounceTimer;
- (void)_notifyPrefsChangedWithDebounce;
- (void)_debounceTimerFired:(id)arg1;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void)activate;
- (void)deactivate;
- (void)removeObserver:(id)arg1;

@end

