//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKSecureElementCardProtocol.h"

@class NSString;

@interface NPKFakeNFCard : NSObject <PKSecureElementCardProtocol>
{
    unsigned char _lifecycleState;
    unsigned char _activationState;
    NSString *_aid;
}

@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned char lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(nonatomic) unsigned char activationState; // @synthesize activationState=_activationState;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

