//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob
{
    NSArray *_mediaSources;
    NSString *_albumCloudGUID;
    NSString *_albumName;
    NSString *_commentText;
    NSArray *_recipientsInfo;
}

+ (void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4;
+ (void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3;
- (BOOL)shouldArchiveXPCToDisk;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void)executeDaemonOperation;
@property(retain, nonatomic) NSArray *recipientsInfo; // @synthesize recipientsInfo=_recipientsInfo;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *albumCloudGUID; // @synthesize albumCloudGUID=_albumCloudGUID;
@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) NSArray *mediaSources; // @synthesize mediaSources=_mediaSources;
- (void)encodeToXPCObject:(id)arg1;
- (void)addInfosForRecipients:(id)arg1;
- (void)run;
- (id)description;

@end

