//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPaymentForbiddenResponse : PKPaymentWebServiceResponse
{
    NSNumber *_errorCode;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end

