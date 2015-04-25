//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMHandle, NSString, UIImage;

@interface CKEntity : NSObject
{
    IMHandle *_handle;
}

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *rawAddress;
@property(retain, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(readonly, retain, nonatomic) UIImage *locationMapViewContactImage;
@property(readonly, retain, nonatomic) UIImage *transcriptDrawerContactImage;
@property(readonly, retain, nonatomic) UIImage *transcriptContactImage;
@property(readonly, copy, nonatomic) NSString *textVibrationIdentifier;
@property(readonly, copy, nonatomic) NSString *textToneIdentifier;
@property(readonly, copy, nonatomic) NSString *originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1;
@property(readonly, nonatomic) void *abRecord;
@property(readonly, retain, nonatomic) UIImage *locationShareBalloonContactImage;
- (id)initWithIMHandle:(id)arg1;
@property(readonly, copy, nonatomic) NSString *IDSCanonicalAddress;
@property(readonly, retain, nonatomic) IMHandle *defaultIMHandle;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) int identifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int propertyType;

@end

