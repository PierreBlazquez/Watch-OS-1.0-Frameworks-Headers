//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@interface CalLogFilter : NSObject
{
    int _minimumLevel;
    NSArray *_includes;
    NSArray *_excludes;
    NSArray *_includesAsRegexes;
    NSArray *_excludesAsRegexes;
    NSSet *_includesRegardlessOfLevel;
}

@property(copy, nonatomic) NSSet *includesRegardlessOfLevel; // @synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel;
@property(retain, nonatomic) NSArray *excludesAsRegexes; // @synthesize excludesAsRegexes=_excludesAsRegexes;
- (BOOL)proceedProcessingEnvelope:(id)arg1;
@property(retain, nonatomic) NSArray *includesAsRegexes; // @synthesize includesAsRegexes=_includesAsRegexes;
- (id)generateRegexesForPatterns:(id)arg1;
@property(nonatomic) int minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property(copy, nonatomic) NSArray *excludes; // @synthesize excludes=_excludes;
@property(copy, nonatomic) NSArray *includes; // @synthesize includes=_includes;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

