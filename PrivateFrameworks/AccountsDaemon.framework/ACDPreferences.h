//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACDPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (double)serverTimeoutInterval;
- (void)reset;
- (void)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

