//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MPMovieView : UIView
{
    id <MPMovieViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
@property(nonatomic) __weak id <MPMovieViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;

@end
