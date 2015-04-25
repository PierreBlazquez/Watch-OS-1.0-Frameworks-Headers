//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCompletionListItem.h"

@class NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem>
{
    int _matchLocation;
}

+ (int)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (int)matchLocationForString:(id)arg1 inURLString:(id)arg2;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
@property(readonly, nonatomic) int matchLocation; // @synthesize matchLocation=_matchLocation;
@property(readonly, nonatomic, getter=isTopHit) BOOL topHit;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)initWithMatchLocation:(int)arg1;
- (id)originalURLString;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

