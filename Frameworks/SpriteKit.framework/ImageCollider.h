//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ImageCollider : NSObject
{
}

- (struct CGImage *)newCollidingImg:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (BOOL)isColliding:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (struct CGImage *)_newCollidingImg:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;
- (BOOL)_isColliding:(struct CGImage *)arg1 xform1:(struct CGAffineTransform)arg2 displaySize1:(struct CGSize)arg3 pos1:(struct CGPoint)arg4 anchor1:(struct CGPoint)arg5 mask2:(struct CGImage *)arg6 xform2:(struct CGAffineTransform)arg7 displaySize2:(struct CGSize)arg8 pos2:(struct CGPoint)arg9 anchor2:(struct CGPoint)arg10;

@end

