//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject
{
    struct _MRContentItem *_mrContentItem;
    MPMediaItemArtwork *_artwork;
}

@property(nonatomic, getter=isContainer) BOOL container;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (void)dealloc;
@property(nonatomic) float playbackProgress;
@property(nonatomic, getter=isPlayable) BOOL playable;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem *)arg1;
- (void)_postItemChangedNotification;
@property(retain, nonatomic) MPMediaItemArtwork *artwork;
- (struct _MRContentItem *)_mediaRemoteContentItem;

@end

