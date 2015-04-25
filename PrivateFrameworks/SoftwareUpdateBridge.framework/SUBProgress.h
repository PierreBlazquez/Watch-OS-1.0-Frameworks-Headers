//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding>
{
    BOOL _isDone;
    NSString *_phase;
    float _portionComplete;
    double _estimatedTimeRemaining;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(nonatomic) float portionComplete; // @synthesize portionComplete=_portionComplete;
@property(nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(retain, nonatomic) NSString *phase; // @synthesize phase=_phase;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

