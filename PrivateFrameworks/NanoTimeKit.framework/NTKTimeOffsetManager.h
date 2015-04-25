//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface NTKTimeOffsetManager : NSObject
{
    double _timeOffset;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSDate *faceDisplayTime;
- (void)_updateTimeOffset:(BOOL)arg1;
- (id)displayTimeForRealTime:(id)arg1;
- (void)_handleFaceLibraryReloaded;
- (void)_handleFaceDefaultsChanged;
- (void)_loadTimeOffset;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (id)init;
- (void)dealloc;

@end
