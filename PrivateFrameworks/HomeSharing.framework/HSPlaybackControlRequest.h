//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest
{
    int _controlCommand;
    unsigned int _interfaceID;
}

@property(readonly, nonatomic) int controlCommand; // @synthesize controlCommand=_controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(int)arg2;
@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;

@end

