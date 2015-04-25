//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject
{
    unsigned short _typeID;
    NSNumber *_sentAbsoluteTime;
    int _retryCount;
    CDUnknownBlockType _retryAction;
    double _retryInterval;
}

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(int)arg2 retryInterval:(double)arg3 withAction:(CDUnknownBlockType)arg4;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned short typeID; // @synthesize typeID=_typeID;
@property(retain, nonatomic) NSNumber *sentAbsoluteTime; // @synthesize sentAbsoluteTime=_sentAbsoluteTime;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

