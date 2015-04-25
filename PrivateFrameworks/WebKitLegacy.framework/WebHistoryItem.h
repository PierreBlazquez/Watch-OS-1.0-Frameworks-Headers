//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;
- (id)initFromDictionaryRepresentation:(id)arg1;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, copy, nonatomic) NSString *originalURLString;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInPageCache;
- (void)_setSharedLinkUniqueIdentifier:(id)arg1;
- (void)_setBookmarkID:(unsigned int)arg1;
- (unsigned int)_bookmarkID;
- (id)_redirectURLs;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (id)_transientPropertyForKey:(id)arg1;
- (id)targetItem;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (BOOL)isTargetItem;
- (id)_sharedLinkUniqueIdentifier;
- (id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4;
@property(copy, nonatomic) NSString *alternateTitle;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithWebCoreHistoryItem:(PassRefPtr_b1663a8c)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (void)_visitedWithTitle:(id)arg1;
- (void)setViewState:(id)arg1;
- (struct CGPoint)scrollPoint;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (id)children;
- (void)finalize;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)dictionaryRepresentation;
- (struct CGPoint)_scrollPoint;
- (void)_setViewportArguments:(id)arg1;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (void)_setScrollPoint:(struct CGPoint)arg1;
- (BOOL)lastVisitWasFailure;
- (id)_viewportArguments;
- (BOOL)_scaleIsInitial;
- (id)URL;
- (id)target;
- (float)_scale;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *title;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)dealloc;

@end

