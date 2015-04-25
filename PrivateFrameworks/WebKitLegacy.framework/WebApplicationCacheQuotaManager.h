//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebQuotaManager.h"

@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin *_origin;
}

- (unsigned long long)usage;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)arg1;
- (void)setQuota:(unsigned long long)arg1;
- (id)origin;

@end

