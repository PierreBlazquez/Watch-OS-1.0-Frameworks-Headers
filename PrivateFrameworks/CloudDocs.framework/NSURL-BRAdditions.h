//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (BRAdditions)
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)br_isInCloudDocsPrivateStorages;
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (BOOL)br_isParentOfURL:(id)arg1;
- (id)br_debugDescription;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;
- (BOOL)br_isExternalDocumentReference;
- (BOOL)br_isDocumentsContainer;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_cloudDocsContainer;
- (id)br_containerID;
- (BOOL)br_isInMobileDocuments;
@end
