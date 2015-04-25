//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface SSLookupResponse : NSObject <SSXPCCoding>
{
    NSDate *_expirationDate;
    NSMutableArray *_itemOrder;
    SSMetricsPageEvent *_metricsPageEvent;
    NSDictionary *_response;
}

@property(readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration;
- (id)itemForKey:(id)arg1;
- (id)appStoreURLWithReason:(int)arg1 initialIndex:(int)arg2;
@property(readonly, nonatomic) NSArray *allItems;
- (void)_enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithLocationResponseDictionary:(id)arg1;
- (void)_setMetricsPageEvent:(id)arg1;
@property(retain, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, nonatomic) NSDictionary *responseDictionary;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)initWithResponseDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
