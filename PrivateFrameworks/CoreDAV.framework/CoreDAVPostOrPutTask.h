//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
{
    BOOL _forceToServer;
    NSString *_previousETag;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

- (id)requestBody;
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(retain, nonatomic) NSData *requestDataPayload; // @synthesize requestDataPayload=_requestDataPayload;
@property(retain, nonatomic) NSString *requestDataContentType; // @synthesize requestDataContentType=_requestDataContentType;
@property(nonatomic) BOOL forceToServer; // @synthesize forceToServer=_forceToServer;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
- (id)additionalHeaderValues;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;

@end

