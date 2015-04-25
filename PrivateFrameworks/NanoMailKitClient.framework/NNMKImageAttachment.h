//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMailKitClient/NNMKAttachment.h>

#import "NSSecureCoding.h"

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding>
{
    BOOL _renderOnClient;
    struct CGSize _imageSize;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) BOOL renderOnClient; // @synthesize renderOnClient=_renderOnClient;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

