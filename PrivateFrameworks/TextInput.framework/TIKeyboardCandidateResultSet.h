//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, TIKeyboardCandidate, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _excludedExtensionCandidates;
    NSArray *_candidates;
    unsigned int _initialSelectedIndex;
    TIKeyboardCandidate *_defaultCandidate;
    NSArray *_sortMethods;
    NSDictionary *_sortMethodGroups;
    NSDictionary *_indexTitles;
    NSDictionary *_showExtensionCandidates;
    NSArray *_initiallyHiddenCandidates;
    unsigned int _generatedCandidateCount;
    unsigned int _batchCandidateLocation;
    unsigned int _selectedHiddenCandidateIndex;
    TIKeyboardIntermediateText *_uncommittedText;
    TIKeyboardCandidate *_acceptedCandidate;
}

+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned int)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned int)arg9 excludedExtensionCandidates:(BOOL)arg10;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL excludedExtensionCandidates; // @synthesize excludedExtensionCandidates=_excludedExtensionCandidates;
@property(copy, nonatomic) TIKeyboardCandidate *defaultCandidate; // @synthesize defaultCandidate=_defaultCandidate;
- (BOOL)isSubsetOf:(id)arg1;
@property(readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property(nonatomic) unsigned int batchCandidateLocation; // @synthesize batchCandidateLocation=_batchCandidateLocation;
@property(nonatomic) unsigned int generatedCandidateCount; // @synthesize generatedCandidateCount=_generatedCandidateCount;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned int)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned int)arg9 excludedExtensionCandidates:(BOOL)arg10;
@property(retain, nonatomic) NSDictionary *sortMethodGroups; // @synthesize sortMethodGroups=_sortMethodGroups;
@property(nonatomic) unsigned int selectedHiddenCandidateIndex; // @synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex;
@property(retain, nonatomic) NSArray *initiallyHiddenCandidates; // @synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates;
@property(retain, nonatomic) NSDictionary *showExtensionCandidates; // @synthesize showExtensionCandidates=_showExtensionCandidates;
@property(retain, nonatomic) NSArray *sortMethods; // @synthesize sortMethods=_sortMethods;
@property(nonatomic) unsigned int initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property(retain, nonatomic) TIKeyboardIntermediateText *uncommittedText; // @synthesize uncommittedText=_uncommittedText;
- (unsigned int)positionInCandidateList:(id)arg1;
- (id)setByAppendingSet:(id)arg1;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property(readonly, nonatomic) BOOL isDummySet;
@property(retain, nonatomic) NSDictionary *indexTitles; // @synthesize indexTitles=_indexTitles;
@property(readonly, nonatomic) BOOL hasCandidates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

