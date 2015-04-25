//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAKView.h"

@class NSMutableArray, WebNodeHighlight;

@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (id)webNodeHighlight;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_attach:(id)arg1 numLayers:(unsigned int)arg2;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)layoutSublayers:(id)arg1;
- (void)dealloc;
- (BOOL)isFlipped;
- (void)_removeAllLayers;

@end

