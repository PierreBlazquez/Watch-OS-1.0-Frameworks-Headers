//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MFEmailSetEmail : NSObject
{
    unsigned long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

- (BOOL)isEqualToEmail:(id)arg1;
@property(retain, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *commentedAddress;
- (id)description;
@property(readonly, nonatomic) unsigned long hash;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

