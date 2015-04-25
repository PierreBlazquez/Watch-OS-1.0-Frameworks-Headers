//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSKeyedArchiver : NSCoder
{
    void *_stream;
    unsigned int _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    unsigned int _genericKey;
    void *_cache;
    unsigned int _cacheSize;
    unsigned int _estimatedCount;
    void *_reserved2;
    id _visited;
    void *_reserved0;
}

+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)initialize;
+ (void)setClassName:(id)arg1 forClass:(Class)arg2;
+ (id)classNameForClass:(Class)arg1;
+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
- (void)finalize;
- (void)encodeObject:(id)arg1;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (int)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (BOOL)allowsKeyedCoding;
- (void)finishEncoding;
- (unsigned int)systemVersion;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (id)initForWritingWithMutableData:(id)arg1;
@property id <NSKeyedArchiverDelegate> delegate;
- (id)description;
- (id)init;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setRequiresSecureCoding:(BOOL)arg1;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
@property unsigned int outputFormat;
- (id)_blobForCurrentObject;
- (void)_setBlobForCurrentObject:(id)arg1;
- (id)classNameForClass:(Class)arg1;
- (id)_initWithOutput:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (BOOL)requiresSecureCoding;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void *)arg3;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;

@end

