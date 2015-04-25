//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSMMCSProtocol.h>

#import "MSSubscribeStorageProtocol.h"

@class NSMutableDictionary, NSString;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol>
{
    id <MSSubscribeStorageProtocolDelegate> _delegate;
    unsigned int _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;
- (void)_requestCompleted;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)retrieveAssets:(id)arg1;
- (id)initWithPersonID:(id)arg1;
- (void).cxx_destruct;
- (void)deactivate;
@property(nonatomic) id <MSSubscribeStorageProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

