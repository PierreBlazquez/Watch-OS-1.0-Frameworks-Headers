//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser
{
    NSScanner *_scanner;
}

- (BOOL)parse;
- (void)dealloc;
- (id)initWithHTML:(id)arg1;
- (BOOL)_isMilestoneTagName:(id)arg1;
- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (void)_findBody;
- (void)didFindError:(id)arg1;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;

@end

