//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse
{
    NSData *_sessionData;
}

@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;

@end

