//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle
{
    unsigned int _deleteCount;
}

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (id)initWithCandidate:(id)arg1 deleteCount:(unsigned int)arg2;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (unsigned int)deleteCount;
- (id)label;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

