//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICZoomModel;

@protocol PUICZoomModelDelegate <NSObject>
- (void)zoomModel:(PUICZoomModel *)arg1 animatedLevelChanged:(float)arg2 from:(float)arg3;

@optional
- (void)zoomModel:(PUICZoomModel *)arg1 updatingChanged:(BOOL)arg2;
- (void)zoomModel:(PUICZoomModel *)arg1 levelChangedSimulated:(float)arg2;
- (void)zoomModel:(PUICZoomModel *)arg1 levelChanged:(float)arg2;
@end

