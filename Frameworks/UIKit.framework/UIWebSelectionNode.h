//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWebSelection, UIWebSelectionGraph;

@interface UIWebSelectionNode : NSObject
{
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    BOOL _invalid;
}

- (int)oppositeEdge:(int)arg1;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (id *)nodeByReferenceFromEdge:(int)arg1 outwards:(BOOL)arg2;
- (id)nodeByMovingEdge:(int)arg1 outwards:(BOOL)arg2;
@property(retain) UIWebSelection *selection; // @synthesize selection=_selection;
- (void)invalidate;
- (void)dealloc;

@end

