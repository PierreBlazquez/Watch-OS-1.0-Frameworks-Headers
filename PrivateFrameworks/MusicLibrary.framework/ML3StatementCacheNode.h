//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSCopying>;

@interface ML3StatementCacheNode : NSObject
{
    NSObject<NSCopying> *_dictionaryKey;
    ML3StatementCacheNode *_next;
}

@property(retain, nonatomic) ML3StatementCacheNode *next; // @synthesize next=_next;
@property(copy, nonatomic) NSObject<NSCopying> *dictionaryKey; // @synthesize dictionaryKey=_dictionaryKey;
- (id)initWithDictionaryKey:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end

