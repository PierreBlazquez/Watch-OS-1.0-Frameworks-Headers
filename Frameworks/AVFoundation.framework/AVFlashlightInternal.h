//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference;

@interface AVFlashlightInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigFlashlight *flashlight;
    BOOL available;
    BOOL overheated;
    float flashlightLevel;
    struct OpaqueFigSimpleMutex *lock;
}

@end

