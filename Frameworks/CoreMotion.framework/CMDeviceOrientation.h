//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMDeviceOrientation : CMLogItem
{
    int fOrientation;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int orientation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2;
- (id)orientationString;

@end

