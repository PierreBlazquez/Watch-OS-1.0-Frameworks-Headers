//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject
{
    NSMutableDictionary *_names;
}

+ (void)invalidate;
+ (id)defaultMappingGenerator;
- (id)init;
- (void)dealloc;
- (id)newUniqueNameWithBase:(unsigned short *)arg1 withLength:(unsigned int)arg2;
- (id)generateTableName:(id)arg1;
- (id)newGeneratedPropertyName:(id)arg1;
- (id)uniqueNameWithBase:(id)arg1;

@end

