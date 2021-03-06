//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
@property(retain, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property(retain, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;

@end

