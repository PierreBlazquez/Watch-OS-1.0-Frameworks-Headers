//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface WebBookmark : NSObject
{
    BOOL _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _editable;
    BOOL _deletable;
    BOOL _hidden;
    BOOL _syncable;
    BOOL _fetchedIconData;
    NSData *_iconData;
    BOOL _locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    unsigned int _id;
    unsigned int _parentID;
    unsigned int _specialID;
    unsigned int _orderIndex;
    BOOL _inserted;
    BOOL _needsSyncUpdate;
}

+ (id)_trimmedPreviewText:(id)arg1;
+ (id)_trimmedTitle:(id)arg1;
@property(retain, nonatomic) NSDate *dateAdded;
- (BOOL)shouldReattemptArchive;
- (BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(char *)arg2;
- (void)_removeDirectoryAtPath:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
@property(retain, nonatomic) NSString *localPreviewText;
@property(retain, nonatomic) NSString *siteName;
@property(retain, nonatomic) NSDictionary *nextPageURLs;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
@property(retain, nonatomic) NSString *sourceBundleID;
@property(retain, nonatomic) NSString *sourceLocalizedAppName;
@property(retain, nonatomic) NSDate *dateLastFetched;
@property(retain, nonatomic) NSDate *dateLastViewed;
@property(retain, nonatomic) NSDate *dateLastArchived;
@property(nonatomic) BOOL locallyAdded;
@property(retain, nonatomic) NSString *previewText;
- (void)_modifyLocalReadingListAttributes:(CDUnknownBlockType)arg1;
- (void)_modifyExtraReadingListAttributes:(CDUnknownBlockType)arg1;
- (id)_readingListPropertyNamed:(id)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1 hasIcon:(BOOL)arg2;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
- (void)_setSyncable:(BOOL)arg1;
- (void)_setInserted:(BOOL)arg1;
- (void)_setID:(unsigned int)arg1;
@property(nonatomic) int webFilterStatus;
- (BOOL)fullArchiveAvailable;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)clearArchive;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1;
- (void)clearArchiveSynchronously;
- (unsigned long long)archiveSize;
@property(nonatomic) int archiveStatus;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(nonatomic) BOOL fetchedIconData; // @synthesize fetchedIconData=_fetchedIconData;
@property(nonatomic) BOOL needsSyncUpdate; // @synthesize needsSyncUpdate=_needsSyncUpdate;
@property(readonly, nonatomic, getter=isSyncable) BOOL syncable; // @synthesize syncable=_syncable;
- (BOOL)isFrequentlyVisitedSitesFolder;
- (BOOL)isWebFilterWhiteListFolder;
- (BOOL)isBookmarksMenuFolder;
- (BOOL)isBookmarksBarFolder;
- (id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)shortTypeDescription;
- (BOOL)isEqualToBookmark:(id)arg1;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (void)_setParentID:(unsigned int)arg1;
@property(retain, nonatomic) NSDictionary *localAttributes; // @synthesize localAttributes=_localAttributes;
- (unsigned int)_orderIndex;
- (BOOL)isReadingListFolder;
- (BOOL)isReadingListItem;
@property(readonly, nonatomic) unsigned int specialID; // @synthesize specialID=_specialID;
- (void)cleanupRedundantPreviewText;
@property(retain, nonatomic) NSData *syncData;
- (void)_markSpecial:(unsigned int)arg1;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
@property(readonly, nonatomic, getter=isDeletable) BOOL deletable; // @synthesize deletable=_deletable;
@property(readonly, nonatomic, getter=isInserted) BOOL inserted; // @synthesize inserted=_inserted;
@property(readonly, nonatomic, getter=isFolder) BOOL folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property(retain, nonatomic) NSString *address; // @synthesize address=_url;
@property(retain, nonatomic) NSString *syncKey;
@property(retain, nonatomic) NSString *serverID;
- (id)localizedTitle;
- (void)_setHidden:(BOOL)arg1;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_id;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
- (void)dealloc;
- (void)_setUUID:(id)arg1;
@property(readonly, nonatomic) unsigned int parentID; // @synthesize parentID=_parentID;

@end

