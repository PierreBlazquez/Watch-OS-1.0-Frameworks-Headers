//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKStructuredLocation, NSDictionary;

@interface EKReminderLocationItem : NSObject
{
    BOOL _isLocationBeingDetermined;
    EKStructuredLocation *_location;
    NSDictionary *_addressDictionary;
    int _type;
}

@property(retain, nonatomic) EKStructuredLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDictionary *addressDictionary; // @synthesize addressDictionary=_addressDictionary;
- (void).cxx_destruct;
- (void)reset;
- (id)label;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
@property(nonatomic) BOOL isLocationBeingDetermined; // @synthesize isLocationBeingDetermined=_isLocationBeingDetermined;
- (id)stringForSubtitle;

@end

