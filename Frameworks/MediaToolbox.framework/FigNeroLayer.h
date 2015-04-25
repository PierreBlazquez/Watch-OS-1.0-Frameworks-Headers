//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSObject<OS_dispatch_queue>;

@interface FigNeroLayer : CALayer
{
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid *_neroid;
    id <FigNeroLayerDelegate> _neroDelegate;
}

- (void)stop;
- (void)start;
- (void)_start;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;
@property(nonatomic) id <FigNeroLayerDelegate> neroDelegate;

@end

