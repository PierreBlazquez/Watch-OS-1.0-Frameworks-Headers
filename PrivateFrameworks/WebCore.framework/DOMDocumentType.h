//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMNode.h>

@class DOMNamedNodeMap, NSString;

@interface DOMDocumentType : DOMNode
{
}

@property(readonly, copy) NSString *internalSubset;
@property(readonly, copy) NSString *systemId;
@property(readonly, copy) NSString *publicId;
@property(readonly) DOMNamedNodeMap *notations;
@property(readonly) DOMNamedNodeMap *entities;
- (void)remove;
@property(readonly, copy) NSString *name;

@end

