//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFlashlightInternal_FigRecorder;

@interface AVFlashlight_FigRecorder : NSObject
{
    AVFlashlightInternal_FigRecorder *_internal;
}

+ (void)initialize;
+ (BOOL)hasFlashlight;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (void)turnPowerOff;
@property(readonly, nonatomic, getter=isOverheated) BOOL overheated;
- (BOOL)setFlashlightLevel:(float)arg1 withError:(id *)arg2;
- (BOOL)turnPowerOnWithError:(id *)arg1;
- (BOOL)ensureFigRecorderWithError:(id *)arg1;
- (void)teardownFigRecorder;
- (BOOL)bringupFigRecorderWithError:(id *)arg1;
- (void)_refreshIsAvailable;
@property(readonly, nonatomic) float flashlightLevel;
- (void)handleNotification:(id)arg1 payload:(id)arg2;

@end

