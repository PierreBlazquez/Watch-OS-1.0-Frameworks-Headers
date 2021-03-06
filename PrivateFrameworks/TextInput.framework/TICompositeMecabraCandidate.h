//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIMecabraCandidate.h>

@class NSArray, NSString;

@interface TICompositeMecabraCandidate : TIMecabraCandidate
{
    NSString *_remainderCandidateString;
    NSArray *_autoconvertedCandidatePointerValues;
}

+ (BOOL)supportsSecureCoding;
+ (int)type;
@property(copy, nonatomic) NSArray *autoconvertedCandidatePointerValues; // @synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues;
@property(copy, nonatomic) NSString *remainderCandidateString; // @synthesize remainderCandidateString=_remainderCandidateString;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

