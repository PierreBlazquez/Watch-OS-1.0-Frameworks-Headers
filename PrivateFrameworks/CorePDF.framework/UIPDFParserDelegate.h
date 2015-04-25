//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate>
{
    struct CGPoint _p[4];
    struct CGPath *_path;
    BOOL _parserError;
}

- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
@property(readonly) struct CGPath *path; // @dynamic path;
- (id)init;
- (void)dealloc;
@property(readonly) BOOL parserError; // @synthesize parserError=_parserError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

