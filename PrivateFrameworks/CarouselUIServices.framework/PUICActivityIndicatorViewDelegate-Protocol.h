//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICActivityIndicatorView;

@protocol PUICActivityIndicatorViewDelegate <NSObject>

@optional
- (void)activityIndicatorViewDidAnimateOut:(PUICActivityIndicatorView *)arg1;
- (void)activityIndicatorViewWillAnimateOut:(PUICActivityIndicatorView *)arg1 duration:(double)arg2;
- (void)activityIndicatorViewDidAnimateIn:(PUICActivityIndicatorView *)arg1;
- (void)activityIndicatorViewWillAnimateIn:(PUICActivityIndicatorView *)arg1 duration:(double)arg2;
@end

