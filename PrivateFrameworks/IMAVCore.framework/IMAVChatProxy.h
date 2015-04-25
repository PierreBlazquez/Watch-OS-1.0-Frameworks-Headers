//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject
{
    NSDictionary *_info;
}

@property(readonly, retain, nonatomic) NSString *GUID;
- (id)account;
- (void)declineInvitation;
- (void)acceptInvitation;
- (void)finalUpdate;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
@property(nonatomic, setter=setMute:) BOOL isMute;
@property(readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property(readonly, nonatomic) BOOL isStateFinal;
@property(readonly, nonatomic) BOOL isSendingAudio;
@property(readonly, nonatomic) BOOL hasAudioInterruption;
@property(readonly, retain, nonatomic) NSNumber *dataDownloaded;
@property(readonly, retain, nonatomic) NSNumber *dataUploaded;
- (BOOL)_isProxy;
@property(readonly, retain, nonatomic) NSDate *dateEnded;
@property(readonly, retain, nonatomic) NSDate *dateConnected;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) unsigned int endedReason;
- (void)updateWithInfo:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (void)acceptInvitationWithHoldMusic;
@property(readonly, retain, nonatomic) IMHandle *initiatorIMHandle;
- (void)endChat;
- (void)cancelInvitation;
@property(readonly, retain, nonatomic) NSArray *remoteParticipants;
@property(readonly, retain, nonatomic) IMHandle *otherIMHandle;
@property(readonly, retain, nonatomic) NSString *conferenceID;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, nonatomic) BOOL isCaller;
@property(readonly, nonatomic) int callID;
@property(readonly, nonatomic) BOOL isVideo;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned int state;
- (id)description;
- (void)dealloc;

@end

