//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapServiceTicket.h"

@class GEOMapRegion, GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket>
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    id <GEOMapItem> _mapItemToRefine;
    BOOL _canceled;
}

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)_processRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2 refinedHandler:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // @synthesize resultBoundingRegion=_resultBoundingRegion;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

