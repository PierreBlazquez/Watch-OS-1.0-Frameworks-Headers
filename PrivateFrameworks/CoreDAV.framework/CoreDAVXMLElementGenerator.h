//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class CoreDAVItem, NSDictionary, NSMutableData, NSString, NSURL;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate>
{
    int _parsingState;
    SEL _parentElementSetter;
    CoreDAVItem *_element;
    CoreDAVItem *_parentElement;
    CoreDAVXMLElementGenerator *_parentGenerator;
    NSMutableData *_characters;
    NSMutableData *_cDATA;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    NSDictionary *_cachedElementParseRules;
    BOOL _checkedElementValidityIfRootElement;
    BOOL _isUnrecognized;
    NSURL *_baseURL;
}

- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *currentlyParsingSubItem; // @synthesize currentlyParsingSubItem=_currentlyParsingSubItem;
@property(nonatomic) int parsingState; // @synthesize parsingState=_parsingState;
@property(nonatomic) CoreDAVXMLElementGenerator *parentGenerator; // @synthesize parentGenerator=_parentGenerator;
@property(retain, nonatomic) CoreDAVItem *element; // @synthesize element=_element;
@property(nonatomic) SEL parentElementSetter; // @synthesize parentElementSetter=_parentElementSetter;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (void)resumeParsingWithParser:(id)arg1;
@property(retain, nonatomic) NSMutableData *cDATA; // @synthesize cDATA=_cDATA;
@property(nonatomic) BOOL isUnrecognized; // @synthesize isUnrecognized=_isUnrecognized;
@property(retain, nonatomic) NSDictionary *cachedElementParseRules; // @synthesize cachedElementParseRules=_cachedElementParseRules;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (void)noteChildCascadingFailure;
- (BOOL)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
@property(nonatomic) BOOL checkedElementValidityIfRootElement; // @synthesize checkedElementValidityIfRootElement=_checkedElementValidityIfRootElement;
- (BOOL)tracksRootElement;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
@property(retain, nonatomic) NSMutableData *characters; // @synthesize characters=_characters;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

