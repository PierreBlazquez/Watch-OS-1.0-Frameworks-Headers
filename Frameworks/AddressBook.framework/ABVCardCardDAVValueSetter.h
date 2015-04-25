//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
{
    BOOL _recordIsGroup;
    BOOL _importingToExistingGroup;
}

+ (int)groupPropertyForPersonProperty:(int)arg1;
+ (struct __CFDictionary *)_personToGroupPropertyMap;
- (id)imageData;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
@property BOOL recordIsGroup; // @synthesize recordIsGroup=_recordIsGroup;
- (void)_drainExistingProperties;
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (BOOL)propertyIsValidForPerson:(unsigned int)arg1;

@end

