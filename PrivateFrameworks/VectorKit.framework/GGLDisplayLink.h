//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplay, CADisplayLink;

@interface GGLDisplayLink : NSObject
{
    SEL _selector;
    id _target;
    CADisplayLink *_displayLink;
    CADisplay *_display;
    int _frameInterval;
    int _skippedFrames;
    BOOL _paused;
}

@property(nonatomic, getter=isPaused) BOOL paused;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
@property(retain, nonatomic) CADisplay *display; // @synthesize display=_display;
- (void)_displayLinkFired:(id)arg1;
@property(nonatomic) int frameInterval;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (id)target;
- (void)invalidate;
@property(readonly, nonatomic) double timestamp;
- (void)dealloc;

@end
