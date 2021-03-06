//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation
{
    ISAuthenticationChallenge *_challenge;
    NSURLCredential *_credential;
}

+ (id)operationWithChallenge:(id)arg1;
- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;
- (void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2;
@property(retain) ISAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)run;
- (void)dealloc;

@end

