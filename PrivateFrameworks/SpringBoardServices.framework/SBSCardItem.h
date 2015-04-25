//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _requiresPasscode;
    NSString *_identifier;
    NSData *_iconData;
    NSString *_title;
    NSString *_body;
    NSString *_bundleName;
    NSData *_attachmentData;
    NSDictionary *_userInfo;
    UIImage *_thumbnail;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(int)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
@property(nonatomic) BOOL requiresPasscode; // @synthesize requiresPasscode=_requiresPasscode;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 attachmentData:(id)arg7 userInfo:(id)arg8;
@property(copy, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)sortDate;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

