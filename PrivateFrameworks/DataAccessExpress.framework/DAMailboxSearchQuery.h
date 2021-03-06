//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataAccessExpress/DASearchQuery.h>

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery
{
    BOOL _allOrNone;
    BOOL _deepTraversal;
    BOOL _rebuildResults;
    NSString *_collectionID;
    int _bodyType;
    NSDate *_priorToDate;
    int _MIMESupport;
    long long _truncationSize;
}

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
@property(nonatomic) BOOL deepTraversal; // @synthesize deepTraversal=_deepTraversal;
@property(retain, nonatomic) NSDate *priorToDate; // @synthesize priorToDate=_priorToDate;
@property(nonatomic) long long truncationSize; // @synthesize truncationSize=_truncationSize;
@property(nonatomic) int MIMESupport; // @synthesize MIMESupport=_MIMESupport;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(nonatomic) int bodyType; // @synthesize bodyType=_bodyType;
@property(nonatomic) BOOL rebuildResults; // @synthesize rebuildResults=_rebuildResults;
@property(nonatomic) BOOL allOrNone; // @synthesize allOrNone=_allOrNone;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

