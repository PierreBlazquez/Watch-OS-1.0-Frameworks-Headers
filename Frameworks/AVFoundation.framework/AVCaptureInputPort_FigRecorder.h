//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureInputPortInternal_FigRecorder, AVCaptureInput_FigRecorder, NSString;

@interface AVCaptureInputPort_FigRecorder : NSObject
{
    AVCaptureInputPortInternal_FigRecorder *_internal;
}

+ (BOOL)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(BOOL)arg4;
- (void)setOwner:(id)arg1;
@property(readonly, nonatomic) NSString *mediaType;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) AVCaptureInput_FigRecorder *input;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)description;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(BOOL)arg4;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)_setClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *clock;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;

@end

