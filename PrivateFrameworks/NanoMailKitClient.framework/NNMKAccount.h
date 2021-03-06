//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NNMKAccount : NSObject <NSSecureCoding>
{
    BOOL _shouldArchive;
    NSString *_accountId;
    NSString *_displayName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

