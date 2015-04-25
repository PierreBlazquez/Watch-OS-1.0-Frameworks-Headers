//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface NSNotification : NSObject <NSCopying, NSCoding>
{
}

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
@property(readonly, retain) id object;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly, copy) NSString *name;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

