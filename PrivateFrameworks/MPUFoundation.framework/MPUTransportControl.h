//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MPUTransportControl : NSObject <NSCopying>
{
    BOOL _enabled;
    BOOL _highlighted;
    BOOL _supportsLongPress;
    BOOL _acceptsTapsWhenDisabled;
    int _type;
    int _group;
}

+ (id)transportControlWithType:(int)arg1 group:(int)arg2;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 controlsCount:(unsigned int)arg2;
+ (int)_ordinalForTransportControlType:(int)arg1;
+ (BOOL)_transportControlAcceptsTapsWhenDisabledForType:(int)arg1;
+ (BOOL)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (int)_groupForTransportControlType:(int)arg1;
+ (int)_transportControlTypeForCommand:(unsigned int)arg1;
@property(nonatomic) BOOL acceptsTapsWhenDisabled; // @synthesize acceptsTapsWhenDisabled=_acceptsTapsWhenDisabled;
@property(nonatomic) BOOL supportsLongPress; // @synthesize supportsLongPress=_supportsLongPress;
- (int)_compare:(id)arg1 ordering:(int)arg2;
- (id)initWithType:(int)arg1 group:(int)arg2;
@property(readonly, nonatomic) int group; // @synthesize group=_group;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)_priority;

@end

