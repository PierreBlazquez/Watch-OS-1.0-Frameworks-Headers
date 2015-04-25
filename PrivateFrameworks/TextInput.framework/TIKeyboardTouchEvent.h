//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>
{
    float _radius;
    int _pathIndex;
    int _stage;
    int _forcedKeyCode;
    struct CGPoint _location;
    double _timestamp;
}

+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int forcedKeyCode; // @synthesize forcedKeyCode=_forcedKeyCode;
- (id)initWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;
@property(readonly, nonatomic) int pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, nonatomic) int stage; // @synthesize stage=_stage;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) float radius; // @synthesize radius=_radius;

@end

