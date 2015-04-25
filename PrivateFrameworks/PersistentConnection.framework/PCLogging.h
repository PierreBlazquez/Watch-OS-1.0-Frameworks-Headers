//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PCLogging : NSObject
{
}

+ (void)enableLoggingForCustomHandler:(CDUnknownBlockType)arg1;
+ (void)enableFileLogging:(BOOL)arg1;
+ (void)_printLoggingConfig;
+ (id)getMainBundleId;
+ (void)_appendString:(id)arg1 toFileNamed:(id)arg2;
+ (void)_configureLogFacilityIfNeeded:(id)arg1;
+ (CDUnknownBlockType)_formatBlock;
+ (id)_facilityForIdentifier:(id)arg1;
+ (id)_fileNameForIdentifier:(id)arg1;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(void *)arg4;
+ (void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3;
+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;
+ (void)initialize;

@end
