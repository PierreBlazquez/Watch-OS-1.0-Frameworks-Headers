//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOPointUtility : NSObject
{
}

+ (id)zilchData:(id)arg1 fromPointIndex:(unsigned int)arg2;
+ (id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3;
+ (BOOL)zilchPointsSupported;
+ (void *)controlPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (id)unpackBasicPoints:(id)arg1;
+ (id)unpackZilchPoints:(id)arg1;
+ (unsigned int)pointCount:(id)arg1 usesZilch:(BOOL)arg2;

@end

