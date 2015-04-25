//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSMutableArray;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim
{
    NSMutableArray *_readingURLs;
    unsigned int *_readingOptions;
    char *_readingURLsDidChange;
    NSMutableArray *_writingURLs;
    unsigned int *_writingOptions;
    char *_writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    unsigned int _currentlyLinkResolvingURLIndex;
    int _readingLinkResolutionCount;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(CDUnknownBlockType)arg3;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)devalueSelf;
- (BOOL)blocksClaim:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(CDUnknownBlockType)arg3;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;

@end

