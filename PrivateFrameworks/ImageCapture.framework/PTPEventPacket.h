//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PTPEventPacket : NSObject
{
    int _numParameters;
    unsigned short _eventCode;
    unsigned long _transactionID;
    unsigned long _parameters[3];
}

- (void)setParameter3:(unsigned long)arg1;
- (void)setParameter2:(unsigned long)arg1;
- (void)setParameter1:(unsigned long)arg1;
- (void)setEventCode:(unsigned short)arg1;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned long)arg2;
- (id)contentForUSB;
- (id)initWithUSBBuffer:(void *)arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)parameter3;
- (unsigned long)parameter2;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (unsigned long)parameter1;
- (unsigned short)eventCode;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (id)description;

@end

