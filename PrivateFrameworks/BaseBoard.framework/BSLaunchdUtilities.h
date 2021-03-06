//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BSLaunchdUtilities : NSObject
{
}

+ (int)pidForLabel:(id)arg1;
+ (BOOL)createJobWithLabel:(id)arg1 bundleIdentifier:(id)arg2 path:(id)arg3 containerPath:(id)arg4 arguments:(id)arg5 environment:(id)arg6 standardOutputPath:(id)arg7 standardErrorPath:(id)arg8 machServices:(id)arg9 threadPriority:(long long)arg10 waitForDebugger:(BOOL)arg11 denyCreatingOtherJobs:(BOOL)arg12 runAtLoad:(BOOL)arg13 disableASLR:(BOOL)arg14 systemApp:(BOOL)arg15;
+ (void)deleteAllJobsWithLabelPrefix:(id)arg1;
+ (void)deleteJobWithLabel:(id)arg1;
+ (unsigned long long)lastExitReasonForLabel:(id)arg1;
+ (id)currentJobLabel;
+ (id)labelForPID:(int)arg1;
+ (BOOL)startJobWithLabel:(id)arg1;
+ (BOOL)stopJobWithLabel:(id)arg1;
+ (id)allJobLabels;

@end

