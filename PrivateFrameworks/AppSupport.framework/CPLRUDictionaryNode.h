//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

- (id)initWithKey:(id)arg1 object:(id)arg2;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)dealloc;

@end

