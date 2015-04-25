//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface CRRecentContactsLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_connection;
}

+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3;
+ (struct NSObject *)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned int)arg5;
+ (struct NSObject *)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned int)arg6;
+ (struct NSObject *)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3;
+ (CDUnknownBlockType)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4;
+ (struct NSObject *)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned int)arg7;
+ (CDUnknownBlockType)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned int)arg4;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5;
+ (CDUnknownBlockType)frecencyComparator;
+ (id)defaultInstance;
- (id)_newConnection;
- (int)_daemonProcessID;
- (id)copyRecentsForDomain:(id)arg1;
- (id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (void)setImplicitGroupThreshold:(unsigned int)arg1 forDomain:(id)arg2;
- (BOOL)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id *)arg4;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(BOOL)arg5;
- (void)_searchRecentsUsingQuery:(id)arg1 synchronously:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteLibraryWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(BOOL)arg4;
- (BOOL)removeRecentContacts:(id)arg1 error:(out id *)arg2;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3;
- (unsigned int)maxDateEventsPerRecentContact;
- (void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(CDUnknownBlockType)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

