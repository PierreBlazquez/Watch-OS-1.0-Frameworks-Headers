//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSURL;

@protocol QLThumbnailsInterface
- (void)askThumbnailAdditionIndex:(void (^)(id <QLThumbnailAdditionIndexInterface>))arg1;
- (void)hasThumbnailForURL:(NSURL *)arg1 updateLastHitDate:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)removeThumbnailAdditionsOnURL:(NSURL *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)thumbnailsStoreURLForURL:(NSURL *)arg1 completionBlock:(void (^)(NSURL *, NSDictionary *, NSString *, NSError *))arg2;
@end

