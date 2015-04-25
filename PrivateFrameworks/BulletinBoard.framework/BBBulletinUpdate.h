//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin;

@interface BBBulletinUpdate : NSObject
{
    BOOL _shouldSync;
    BBBulletin *_bulletin;
    int _type;
    unsigned int _feeds;
}

+ (id)removeForBulletin:(id)arg1 feeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
+ (id)modifyForBulletin:(id)arg1 feeds:(unsigned int)arg2;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned int)arg2 type:(int)arg3 shouldSync:(BOOL)arg4;
@property(readonly, nonatomic) BOOL shouldSync; // @synthesize shouldSync=_shouldSync;
@property(readonly, nonatomic) unsigned int feeds; // @synthesize feeds=_feeds;
@property(readonly, retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

