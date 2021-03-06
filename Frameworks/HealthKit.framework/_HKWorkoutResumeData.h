//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSUUID;

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding>
{
    BOOL _lastUUIDInJournal;
    NSUUID *_lastUUID;
    NSMutableArray *_gaps;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableArray *gaps; // @synthesize gaps=_gaps;
@property(nonatomic) BOOL lastUUIDInJournal; // @synthesize lastUUIDInJournal=_lastUUIDInJournal;
@property(retain, nonatomic) NSUUID *lastUUID; // @synthesize lastUUID=_lastUUID;

@end

