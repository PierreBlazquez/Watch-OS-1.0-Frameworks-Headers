//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_semaphore>;

@interface _RTBatchSliceGeocoder : NSObject
{
    id <GEOMapServiceTicket> _ticket;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSArray *_geoMapItems;
    struct _NSRange _range;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) id <GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSArray *geoMapItems; // @synthesize geoMapItems=_geoMapItems;
- (void)geocodeLocations:(id)arg1;
- (void)_cancelTicket:(id)arg1;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end

