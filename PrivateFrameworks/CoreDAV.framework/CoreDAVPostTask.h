//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@interface CoreDAVPostTask : CoreDAVPostOrPutTask
{
}

- (id)httpMethod;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (void)finishCoreDAVTaskWithError:(id)arg1;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

