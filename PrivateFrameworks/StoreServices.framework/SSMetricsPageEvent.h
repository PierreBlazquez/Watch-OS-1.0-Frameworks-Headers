//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent
{
}

@property(nonatomic, getter=isUbered) BOOL ubered;
@property(nonatomic) double requestEndTime;
@property(nonatomic) double pageRenderTime;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
@property(retain, nonatomic) NSString *navigationType;
@property(nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property(retain, nonatomic) NSString *serverTiming;
@property(retain, nonatomic) NSString *referringURL;
@property(retain, nonatomic) NSString *referringAppName;
@property(retain, nonatomic) NSString *pageHistoryDescription;
@property(retain, nonatomic) NSString *serverApplicationInstance;
@property(nonatomic) double responseStartTime;
@property(nonatomic) double responseEndTime;
@property(nonatomic) double requestStartTime;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSString *searchTerm;

@end

