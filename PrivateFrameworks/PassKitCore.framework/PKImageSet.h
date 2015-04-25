//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding>
{
    NSURL *_originCacheURL;
    int _version;
}

+ (int)currentVersion;
+ (id)imageSetForType:(int)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4;
+ (id)archiveName;
+ (BOOL)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2;
+ (id)_archiveURL:(id)arg1;
+ (id)_archivedImageSet:(id)arg1 forDisplayProfile:(id)arg2;
+ (Class)classForImageSetType:(int)arg1;
+ (Class)_classForDisplayProfileType:(int)arg1;
+ (int)imageSetType;
+ (id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6;
+ (BOOL)shouldCache;
+ (BOOL)supportsSecureCoding;
- (BOOL)_isSetImage:(id)arg1 equalToImage:(id)arg2;
- (void)saveCache:(id)arg1;
@property(copy, nonatomic) NSURL *originCacheURL; // @synthesize originCacheURL=_originCacheURL;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;
- (void)preheatImages;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

