//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CECMessage : NSObject
{
    struct CECFrame _frame;
}

+ (id)messageWithFrame:(struct CECFrame)arg1;
+ (id)systemAudioModeRequestWithPhysicalAddress:(unsigned short)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)giveSystemAudioModeStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)abortFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 from:(unsigned char)arg3 to:(unsigned char)arg4;
+ (id)reportPowerStatus:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)giveDevicePowerStatusFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)userControlReleasedFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)setOSDName:(union CECOSDName)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)giveOSDNameFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)giveDeviceVendorIDFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)deviceVendorID:(unsigned int)arg1 from:(unsigned char)arg2;
+ (id)playWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)giveDeckStatusWithRequest:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)deckStatusWithInfo:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)deckControlWithMode:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)setMenuLanguage:(struct CECLanguage)arg1 from:(unsigned char)arg2;
+ (id)reportPhysicalAddress:(unsigned short)arg1 deviceType:(unsigned char)arg2 from:(unsigned char)arg3;
+ (id)pollFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)getMenuLanguageFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)givePhysicalAddressFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)getCECVersionFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)cecVersion:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (id)standbyFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)setStreamPathFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2;
+ (id)routingInformationFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2;
+ (id)routingChangeFrom:(unsigned char)arg1 originalAddress:(unsigned short)arg2 newAddress:(unsigned short)arg3;
+ (id)requestActiveSourceFrom:(unsigned char)arg1;
+ (id)inactiveSourceFrom:(unsigned char)arg1 to:(unsigned char)arg2 physicalAddress:(unsigned short)arg3;
+ (id)textViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)imageViewOnFrom:(unsigned char)arg1 to:(unsigned char)arg2;
+ (id)activeSourceFrom:(unsigned char)arg1 physicalAddress:(unsigned short)arg2;
+ (id)userControlPressed:(struct CECUserControl)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
@property(readonly, nonatomic) unsigned char initiator; // @dynamic initiator;
- (BOOL)parseSetOSDName:(id *)arg1;
- (unsigned char)_operandsLength;
- (const char *)_operandsWithLength:(unsigned char)arg1;
- (BOOL)parseSystemAudioModeStatus:(unsigned int *)arg1;
- (BOOL)parseUserControlPressed:(struct CECUserControl *)arg1;
- (BOOL)parseGiveDeckStatusRequest:(unsigned char *)arg1;
- (BOOL)parseReportPowerStatus:(unsigned int *)arg1;
- (BOOL)parseCECVersion:(unsigned char *)arg1;
- (BOOL)parseFeatureAbortOpcode:(char *)arg1 reason:(unsigned char *)arg2;
- (BOOL)parseDeckStatusInfo:(unsigned int *)arg1;
- (BOOL)parseDeckControlMode:(unsigned int *)arg1;
- (BOOL)parsePlayMode:(unsigned int *)arg1;
- (BOOL)parseSetStreamPathPhysicalAddress:(unsigned int *)arg1;
- (BOOL)parseRoutingInformationPhysicalAddress:(unsigned int *)arg1;
- (BOOL)parseRoutingChangeOriginalAddress:(unsigned int *)arg1 newAddress:(unsigned int *)arg2;
- (BOOL)parseInactiveSourcePhysicalAddress:(unsigned int *)arg1;
- (BOOL)parseActiveSourcePhysicalAddress:(unsigned int *)arg1;
- (BOOL)parseSetMenuLanguage:(struct CECLanguage *)arg1;
@property(readonly, nonatomic) BOOL shouldBeIgnored; // @dynamic shouldBeIgnored;
@property(readonly, nonatomic) double nominalLatency; // @dynamic nominalLatency;
@property(readonly, nonatomic) BOOL isBroadcast; // @dynamic isBroadcast;
- (BOOL)parseReportPhysicalAddress:(unsigned int *)arg1 deviceType:(unsigned int *)arg2;
- (BOOL)parseDeviceVendorID:(unsigned int *)arg1;
@property(readonly, nonatomic) unsigned char destination; // @dynamic destination;
@property(readonly, nonatomic) unsigned char length; // @dynamic length;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) struct CECFrame frame; // @dynamic frame;
- (id)initWithFrame:(struct CECFrame)arg1;
@property(readonly, nonatomic) int messageType; // @dynamic messageType;

@end

