//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapServiceTraits;

@protocol MKMapServiceProblemReportTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSString *, BOOL, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

