//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIScrollNotification.h"

@class NSString, UIScrollView;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification>
{
    UIScrollView *_scrollView;
    id <_UIScrollNotification> _controller;
}

@property(nonatomic) id <_UIScrollNotification> controller; // @synthesize controller=_controller;
@property(nonatomic) UIScrollView *scrollView;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

