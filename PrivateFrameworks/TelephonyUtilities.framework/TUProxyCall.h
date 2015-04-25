//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

#import "NSSecureCoding.h"

@class NSString;

@interface TUProxyCall : TUCall <NSSecureCoding>
{
    BOOL _conferenced;
    BOOL _outgoing;
    BOOL _voicemail;
    int _status;
    int _callIdentifier;
    NSString *_destinationID;
    int _service;
    NSString *_conferenceIdentifier;
    NSString *_callerNameFromNetwork;
    double _startTime;
}

+ (BOOL)supportsSecureCoding;
- (double)callDuration;
@property(nonatomic, getter=isVoicemail) BOOL voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isConferenced) BOOL conferenced; // @synthesize conferenced=_conferenced;
- (BOOL)supportsRelayingAudioOrVideo;
- (BOOL)supportsRelayingCallState;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)unhold;
- (void)hold;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(BOOL)arg5 conferenceIdentifier:(id)arg6 voicemail:(BOOL)arg7 callerNameFromNetwork:(id)arg8;
- (void)updateWithCall:(id)arg1;
@property(copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(retain, nonatomic) NSString *conferenceIdentifier; // @synthesize conferenceIdentifier=_conferenceIdentifier;
@property(nonatomic) int callIdentifier; // @synthesize callIdentifier=_callIdentifier;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
- (BOOL)isHostedOnCurrentDevice;
- (id)remoteFrequency;
- (id)localFrequency;
- (BOOL)managesAudioInterruptions;
- (id)callUUID;
- (void)leaveConference;
- (void)joinConference;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (BOOL)isDownlinkMuted;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (BOOL)isUplinkMuted;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioMode;
- (int)supportedModelType;
@property(nonatomic) int service; // @synthesize service=_service;
- (void)setIsSendingAudio:(BOOL)arg1;
- (BOOL)isSendingAudio;
@property(nonatomic, getter=isOutgoing) BOOL outgoing; // @synthesize outgoing=_outgoing;
- (id)audioCategory;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)disconnect;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *displayName;

@end

