//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DDURLMatch : NSObject
{
    struct _NSRange _range;
    NSString *_url;
}

- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;
- (struct _NSRange)range;
- (int)compare:(id)arg1;
- (id)url;
- (id)description;
- (void)dealloc;

@end

