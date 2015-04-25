//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface RKResponseCollection : NSObject
{
    NSString *_context;
    NSMutableDictionary *_responseCatalog;
    NSMutableDictionary *_phraseMap;
}

+ (id)responseCollectionWithContext:(id)arg1;
- (void)dumpResponseCatalog;
- (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
- (id)responsesForCategory:(unsigned int)arg1 gender:(unsigned int)arg2 maximumResponses:(unsigned int)arg3 withLanguage:(id)arg4 options:(unsigned int)arg5;
@property(retain) NSMutableDictionary *responseCatalog; // @synthesize responseCatalog=_responseCatalog;
@property(retain) NSMutableDictionary *phraseMap; // @synthesize phraseMap=_phraseMap;
- (void)resetPhraseMap;
- (id)_initWithContext:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *context; // @synthesize context=_context;
- (id)init;

@end

