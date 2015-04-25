//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface NRUServiceCache : NSObject
{
    NSMutableArray *_cachedServices;
    NSArray *_discoveredServices;
    NSArray *_demoServices;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSArray *demoServices; // @synthesize demoServices=_demoServices;
- (BOOL)cachedService:(id)arg1 isVisiblyEquivalentToService:(id)arg2;
- (id)homeSharingServiceEquivalentToPairedService:(id)arg1;
@property(readonly, nonatomic) NSArray *pairedServices;
@property(readonly, nonatomic) NSArray *visibleServices;
- (void)mergeWithDiscoveredServices:(id)arg1;
- (id)cachedServiceWithNetworkName:(id)arg1;
- (id)_orderedServices:(id)arg1;
- (void)_cleanupStaleServices;
- (void)_postNotificationForService:(id)arg1 available:(BOOL)arg2;
- (void)_mergeWithDiscoveredServices:(id)arg1 invalidateUnavailableServices:(BOOL)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)save;

@end

