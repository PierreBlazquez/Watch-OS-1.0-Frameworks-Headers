//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    int _dataclass;
}

@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;
@property(readonly, nonatomic) int dataclass; // @synthesize dataclass=_dataclass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
