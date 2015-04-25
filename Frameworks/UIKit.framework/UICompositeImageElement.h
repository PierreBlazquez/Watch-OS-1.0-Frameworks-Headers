//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface UICompositeImageElement : NSObject
{
    UIImage *m_image;
    struct CGRect m_fromRect;
    struct CGRect m_toRect;
    int m_operation;
    float m_fraction;
}

+ (id)elementWithImage:(id)arg1 toRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3 operation:(int)arg4 fraction:(float)arg5;
- (void)draw;
- (id)initWithImage:(id)arg1 toRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3 operation:(int)arg4 fraction:(float)arg5;
- (void)dealloc;

@end

