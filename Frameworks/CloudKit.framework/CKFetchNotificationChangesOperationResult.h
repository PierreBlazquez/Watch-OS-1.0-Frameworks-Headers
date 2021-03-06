//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import "NSSecureCoding.h"

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding>
{
    BOOL _moreComing;
    CKServerChangeToken *_serverChangeToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (id)CKPropertiesDescription;

@end

