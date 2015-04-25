//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface FBProcessExecutionContext : NSObject
{
    NSArray *_arguments;
    NSDictionary *_environment;
    NSURL *_standardOutputURL;
    NSURL *_standardErrorURL;
    BOOL _waitForDebugger;
    BOOL _disableASLR;
    BOOL _checkForLeaks;
    int _launchIntent;
    unsigned int _launchAssertionFlags;
    double _watchdogExtension;
}

+ (double)watchdogIntervalForLaunchIntent:(int)arg1;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) BOOL checkForLeaks; // @synthesize checkForLeaks=_checkForLeaks;
@property(nonatomic) int launchIntent; // @synthesize launchIntent=_launchIntent;
@property(nonatomic) double watchdogExtension; // @synthesize watchdogExtension=_watchdogExtension;
@property(retain, nonatomic) NSURL *standardErrorURL; // @synthesize standardErrorURL=_standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL; // @synthesize standardOutputURL=_standardOutputURL;
@property(nonatomic) BOOL disableASLR; // @synthesize disableASLR=_disableASLR;
@property(nonatomic) BOOL waitForDebugger; // @synthesize waitForDebugger=_waitForDebugger;
@property(retain, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(nonatomic) unsigned int launchAssertionFlags; // @synthesize launchAssertionFlags=_launchAssertionFlags;
- (double)_launchWatchdogInterval;
- (unsigned int)_launchAssertionFlags;
- (void)dealloc;

@end

