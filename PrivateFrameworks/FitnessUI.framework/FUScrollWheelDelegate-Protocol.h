//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FUScrollWheel;

@protocol FUScrollWheelDelegate <NSObject>

@optional
- (BOOL)scrollWheelShouldBecomeFirstResponder:(FUScrollWheel *)arg1;
- (void)tappedScrollWheel:(FUScrollWheel *)arg1;
- (void)scrollWheel:(FUScrollWheel *)arg1 didChangeCurrentIndexTo:(unsigned int)arg2;
@end

