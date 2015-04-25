//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation
{
    ISPersonalizeOffersRequest *_request;
    SSPersonalizeOffersResponse *_response;
}

@property(readonly) ISPersonalizeOffersRequest *personalizeOffersReqeust;
- (id)initWithPersonalizeOffersRequest:(id)arg1;
- (void)_addDictionaryToResponse:(id)arg1;
- (id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id *)arg3;
- (BOOL)_runWithURLDictionary:(id)arg1 error:(id *)arg2;
@property(readonly) SSPersonalizeOffersResponse *response;
- (void)run;
- (void)dealloc;

@end

