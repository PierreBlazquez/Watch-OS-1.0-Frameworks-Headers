//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion
{
    BOOL _parked;
}

@property(readonly, nonatomic, getter=isParked) BOOL parked; // @synthesize parked=_parked;
- (void)park;
- (void)unpark;
- (id)init;
- (void)dealloc;

@end

