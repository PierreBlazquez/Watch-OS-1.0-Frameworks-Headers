//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (XPCSafeDecoding)
- (id)safeDecodeDictionaryForKey:(id)arg1 keyClass:(Class)arg2 valueClass:(Class)arg3;
- (id)safeDecodeSetForKey:(id)arg1 valueClass:(Class)arg2;
- (id)safeDecodeArrayForKey:(id)arg1 valueClass:(Class)arg2;
- (id)safeDecodeNumberForKey:(id)arg1;
- (id)safeDecodeDateForKey:(id)arg1;
- (id)safeDecodeStringForKey:(id)arg1;
- (id)_safeDecodeContainerForKey:(id)arg1 containerClass:(Class)arg2 valueClass:(Class)arg3;
- (id)safeDecodeObjectForKey:(id)arg1 expectedClass:(Class)arg2;
@end

