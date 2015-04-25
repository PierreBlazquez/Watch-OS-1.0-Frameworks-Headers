//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface MSStreamsProtocol : NSObject
{
    id <MSStreamsProtocolDelegate> _delegate;
    NSString *_personID;
}

- (void)abort;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(readonly, nonatomic) __weak NSURL *deleteURL;
@property(readonly, nonatomic) __weak NSURL *reauthorizeURL;
@property(readonly, nonatomic) __weak NSURL *resetURL;
@property(readonly, nonatomic) __weak NSURL *getURL;
- (void)_didReceiveRetryAfterDate:(id)arg1;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
@property(readonly, nonatomic) __weak NSURL *uploadCompleteURL;
@property(readonly, nonatomic) __weak NSURL *putURL;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext *)arg1;
- (id)deviceInfoDict;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) id <MSStreamsProtocolDelegate> delegate; // @synthesize delegate=_delegate;

@end

