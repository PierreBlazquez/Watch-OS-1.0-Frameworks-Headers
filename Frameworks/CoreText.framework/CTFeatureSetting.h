//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface CTFeatureSetting : NSDictionary
{
    NSDictionary *_dictionary;
}

- (id)keyEnumerator;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)tag;
- (id)value;
- (id)selector;
- (id)type;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (BOOL)isEqualToFeatureSetting:(id)arg1;
- (id)initWithNormalizedDictionary:(id)arg1;
- (id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4;

@end

