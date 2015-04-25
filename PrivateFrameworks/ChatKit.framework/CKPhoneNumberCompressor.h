//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIFont;

@interface CKPhoneNumberCompressor : NSObject
{
    NSString *_phoneNumber;
    UIFont *_font;
    float _desiredWidth;
    NSArray *_preferredCompressions;
}

@property(nonatomic) float desiredWidth; // @synthesize desiredWidth=_desiredWidth;
@property(copy, nonatomic) NSArray *preferredCompressions; // @synthesize preferredCompressions=_preferredCompressions;
- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1;
- (id)compress;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)dealloc;

@end

