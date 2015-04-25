//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDiscardableContent.h"

@class NSData, NSString;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent>
{
    BOOL _keepAlive;
    NSString *_artworkIdentifier;
    NSData *_artworkData;
}

@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
- (void).cxx_destruct;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end

