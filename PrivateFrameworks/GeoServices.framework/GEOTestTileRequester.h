//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

@class NSTimer;

@interface GEOTestTileRequester : GEOTileRequester
{
    NSTimer *_timer;
}

+ (unsigned char)tileProviderIdentifier;
- (void)_sendResults:(id)arg1;
- (void)start;
- (void)dealloc;

@end

