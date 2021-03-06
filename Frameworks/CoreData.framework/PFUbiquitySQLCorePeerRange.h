//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface PFUbiquitySQLCorePeerRange : NSObject
{
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}

@property(readonly, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (id)description;
- (void)dealloc;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;
@property(readonly, nonatomic) NSNumber *peerEnd; // @synthesize peerEnd=_peerEnd;
@property(readonly, nonatomic) NSNumber *peerStart; // @synthesize peerStart=_peerStart;
@property(readonly, nonatomic) NSNumber *rangeEnd; // @synthesize rangeEnd=_rangeEnd;
@property(readonly, nonatomic) NSNumber *rangeStart; // @synthesize rangeStart=_rangeStart;
@property(readonly, nonatomic) NSString *owningPeerID; // @synthesize owningPeerID=_owningPeerID;

@end

