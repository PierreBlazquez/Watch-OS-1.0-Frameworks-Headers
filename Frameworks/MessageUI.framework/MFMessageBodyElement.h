//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageBodyElement_Private.h"

@class MFMessageBodyParser, NSArray, NSString;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private>
{
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned int _quoteLevel;
    unsigned int _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property(retain, nonatomic) NSArray *nodes;
- (void)reset;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
- (unsigned int)getQuoteLevel;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (int)valueForAttributes:(int)arg1;
- (void)releaseExternally;
- (id)retainExternally;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
@property(nonatomic) MFMessageBodyParser *parser; // @synthesize parser=_parser;
- (BOOL)_hasValueForAttributes:(int)arg1;
- (BOOL)isExternallyRetained;
- (unsigned int)quoteLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

