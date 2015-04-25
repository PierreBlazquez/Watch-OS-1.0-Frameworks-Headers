//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, WebBookmarkCollection;

@interface WebBookmarkList : NSObject
{
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    BOOL _customQuery;
    NSString *_query;
    unsigned int _folderID;
    WebBookmarkCollection *_collection;
}

- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (unsigned int)bookmarkCount;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4 includeHidden:(BOOL)arg5;
- (id)initWithBookmarksWhere:(id)arg1 collection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4;
- (id)bookmarkArray;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int folderID; // @synthesize folderID=_folderID;
- (void)dealloc;

@end

