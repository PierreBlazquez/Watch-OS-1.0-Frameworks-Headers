//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject
{
    NSMutableSet *ringerVolumeChangedHandlers;
    NSMutableSet *ringerSilentChangedHandlers;
}

+ (id)sharedInstance;
- (void)ringerSilentChanged;
- (void)addVolumeChangedHandler:(CDUnknownBlockType)arg1;
- (void)addRingerSwitchChangedHandler:(CDUnknownBlockType)arg1;
- (void)ringerVolumeChanged:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

