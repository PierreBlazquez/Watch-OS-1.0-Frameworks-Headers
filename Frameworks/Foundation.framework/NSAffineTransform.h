//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface NSAffineTransform : NSObject <NSCopying, NSCoding>
{
    CDStruct_a65eae4f _transformStruct;
}

+ (id)transform;
- (void)scaleBy:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (void)prependTransform:(id)arg1;
- (void)appendTransform:(id)arg1;
- (void)scaleXBy:(float)arg1 yBy:(float)arg2;
- (void)rotateByRadians:(float)arg1;
- (void)rotateByDegrees:(float)arg1;
- (void)translateXBy:(float)arg1 yBy:(float)arg2;
- (id)initWithTransform:(id)arg1;
@property CDStruct_a65eae4f transformStruct;
- (void)invert;

@end
