//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class UIColor;

@interface SFCircleProgressLayer : CALayer
{
    float _progressLineWidth;
    float _oneFullRotation;
    BOOL _showProgressTray;
    int _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL showProgressTray; // @synthesize showProgressTray=_showProgressTray;
@property(nonatomic) float progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) int progressStartPoint; // @synthesize progressStartPoint=_progressStartPoint;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) float progress; // @dynamic progress;

@end

