//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVConference, NSData, NSDictionary, NSError, VideoAttributes;

@protocol AVConferenceDelegate
- (void)conference:(AVConference *)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)conference:(AVConference *)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(AVConference *)arg1 cancelRelayRequest:(int)arg2 requestDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 sendRelayUpdate:(int)arg2 updateDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 inititiateRelayRequest:(int)arg2 requestDict:(NSDictionary *)arg3;
- (void)serverDiedForConference:(AVConference *)arg1;
- (void)conference:(AVConference *)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(AVConference *)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(AVConference *)arg1 remoteVideoAttributesChanged:(VideoAttributes *)arg2 callID:(int)arg3;
- (void)conference:(AVConference *)arg1 remoteScreenAttributesChanged:(VideoAttributes *)arg2 callID:(int)arg3;
- (void)conference:(AVConference *)arg1 receivedFirstRemoteFrameForCallID:(int)arg2;
- (void)conference:(AVConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(int)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 didStartSession:(BOOL)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(int)arg2 remoteMediaStalled:(BOOL)arg3;

@optional
- (void)conference:(AVConference *)arg1 closeConnectionForCallID:(int)arg2;
- (void)conference:(AVConference *)arg1 reinitializeCallForCallID:(unsigned long)arg2;
- (void)conference:(AVConference *)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned long)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned long)arg3;
- (void)conference:(AVConference *)arg1 didChangeLocalVariablesForCallID:(int)arg2;
- (void)conference:(AVConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(int)arg3;
- (void)conference:(AVConference *)arg1 didReceiveARPLData:(NSData *)arg2 withCallID:(int)arg3;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(int)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)conference:(AVConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(int)arg3;
@end

