//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFMessageBodyParserObject.h>

@class NSError, NSMutableArray;

@interface MFMessageBodyParser : MFMessageBodyParserObject
{
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    CDUnknownBlockType _foundMessageBodyElementBlock;
    NSError *_parserError;
    struct __CFArray *_nodesStackCache;
    struct __CFDictionary *_nodesLevelCache;
    struct __CFDictionary *_nodesQuoteLevelCache;
    unsigned int _options;
}

+ (BOOL)isLinebreakImpliedAfterTagName:(id)arg1;
+ (BOOL)isLinebreakImpliedBeforeTagName:(id)arg1;
- (BOOL)parse;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (id)init;
- (void)dealloc;
- (unsigned int)quoteLevelForBodyNode:(id)arg1;
- (void)didFindError:(id)arg1;
- (void)didFinishParsing;
- (void)willBeginParsing;
- (void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2;
- (BOOL)shouldIgnoreTagWithTagName:(id)arg1;
- (BOOL)isLandmarkTagName:(id)arg1;
- (void)removeSubparser:(id)arg1;
- (void)setFoundMessageBodyElementBlock:(CDUnknownBlockType)arg1;
- (id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned int)arg2;
- (void)getLevel:(int *)arg1 quoteLevel:(int *)arg2 forBodyNode:(id)arg3;
- (void)didFindBodyElement:(id)arg1;
- (id)getAvailableMessageBodyElement;
- (void)flushParagraphNodes;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyStringAccumulatorClass;
- (BOOL)shouldProceedParsing;
- (void)copyBlocks;
- (void)addSubparser:(id)arg1;
- (id)parserError;

@end

