//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _type;
    NSString *_sourceKey;
    NSString *_externalKey;
    NSString *_contextSnippet;
    struct _NSRange _contextSnippetRange;
    NSDate *_date;
    NSString *_title;
    BOOL _fromForwardedMessage;
}

+ (id)originWithType:(unsigned int)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
@property(readonly, getter=isFromForwardedMessage) BOOL fromForwardedMessage; // @synthesize fromForwardedMessage=_fromForwardedMessage;
@property(readonly, nonatomic) NSString *externalKey; // @synthesize externalKey=_externalKey;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
- (BOOL)isEqualToOrigin:(id)arg1;
- (id)initWithType:(unsigned int)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *url;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

