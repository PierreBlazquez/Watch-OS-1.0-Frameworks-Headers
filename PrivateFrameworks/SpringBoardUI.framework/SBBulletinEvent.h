//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBBulletinEvent : NSObject
{
    NSString *_bulletinID;
    CDUnknownBlockType _handler;
}

+ (id)eventForBulletin:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithBulletin:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)execute;
- (id)bulletinID;
- (void)dealloc;

@end

