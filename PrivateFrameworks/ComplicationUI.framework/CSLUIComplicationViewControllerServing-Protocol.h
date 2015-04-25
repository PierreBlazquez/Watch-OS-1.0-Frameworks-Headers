//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol CSLUIComplicationViewControllerServing
@property(retain, nonatomic) NSString *complicationIdentifier;
@property(nonatomic) __weak id <CSLUIComplicationViewControllerDelegate> complicationDelegate;
- (void)handleCrownPressUp:(int)arg1;
- (void)handleCrownPressDown:(int)arg1;
- (void)handleCrownRotateUp:(int)arg1;
- (void)handleCrownRotateDown:(int)arg1;
- (void)handleCrownPress:(int)arg1;
- (void)handleLongCrownPress:(int)arg1;
- (void)finishAnimationToState:(int)arg1;
- (void)animateToState:(int)arg1;
- (void)fadeForState:(int)arg1;
- (void)prepareToAnimateToState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
@end

