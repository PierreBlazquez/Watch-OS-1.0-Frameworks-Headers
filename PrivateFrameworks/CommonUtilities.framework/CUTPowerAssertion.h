//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CUTPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)description;
- (void)dealloc;

@end

