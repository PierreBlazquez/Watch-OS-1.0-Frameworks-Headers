//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IdleReason : NSObject
{
    NSString *_reason;
    double _seconds;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
- (id)initWithReason:(id)arg1 seconds:(double)arg2;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)description;
- (id)init;

@end

