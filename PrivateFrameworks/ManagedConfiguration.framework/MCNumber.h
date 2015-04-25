//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding>
{
    NSNumber *_number;
}

+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
- (id)initWithInteger:(int)arg1;
@property(retain, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)initWithInt:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

