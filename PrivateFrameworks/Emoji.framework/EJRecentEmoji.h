//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Emoji/EJEmoji.h>

@class NSDate, NSNumber;

@interface EJRecentEmoji : EJEmoji
{
    NSNumber *_usageCount;
    NSDate *_dateLastUsed;
}

@property(retain, nonatomic) NSNumber *usageCount; // @synthesize usageCount=_usageCount;
@property(retain, nonatomic) NSDate *dateLastUsed; // @synthesize dateLastUsed=_dateLastUsed;
- (void).cxx_destruct;
- (id)description;

@end

