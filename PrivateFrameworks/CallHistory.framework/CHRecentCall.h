//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSMutableArray, NSNumber, NSString;

@interface CHRecentCall : CHSynchronizedLoggable <NSSecureCoding, NSCopying>
{
    BOOL _read;
    BOOL _callerIdIsBlocked;
    BOOL _multiCall;
    BOOL _callerIdIsFormatted;
    BOOL _answered;
    BOOL _mobileOriginated;
    unsigned int _callerIdAvailability;
    NSString *_callerNetworkName;
    NSString *_uniqueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    unsigned int _callType;
    unsigned int _callStatus;
    NSDate *_date;
    NSNumber *_bytesOfDataUsed;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    unsigned int _unreadCount;
    NSMutableArray *_callOccurrences;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_callerName;
    id <CHPhoneBookManagerProtocol> _phoneBookManager;
    double _duration;
}

+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
@property unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property unsigned int callType; // @synthesize callType=_callType;
@property(copy) NSString *callerId; // @synthesize callerId=_callerId;
- (void)addressBookChanged;
@property(nonatomic) BOOL read; // @synthesize read=_read;
@property unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property BOOL mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
- (BOOL)representsCallAtDate:(id)arg1;
- (id)callerIdSubStringForDisplay;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
- (id)callerIdForDisplay;
- (id)callerNameForDisplay;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
- (BOOL)callerIdIsEmailAddress;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
- (BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)callOccurrencesAsStringSync;
@property BOOL callerIdIsFormatted; // @synthesize callerIdIsFormatted=_callerIdIsFormatted;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerIdForDisplaySync;
- (void)fetchAndSetAddressBookIdsSync;
- (BOOL)callerIdIsEmailAddressSync;
- (void)createOccurrenceArraySync;
- (unsigned int)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (BOOL)isAddressBookContactASuggestion;
- (BOOL)isAddressBookContactASuggestionSync;
@property(retain) id <CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
- (id)callerNameSync;
- (id)addressBookCallerIDMultiValueIdSync;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
- (id)addressBookRecordIdSync;
- (id)callOccurrencesSync;
- (id)callerIdLocationSync;
- (id)callerIdLabelSync;
@property(copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property BOOL callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(copy, nonatomic) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property BOOL answered; // @synthesize answered=_answered;
@property(copy, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property BOOL multiCall; // @synthesize multiCall=_multiCall;
@property(retain, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property(copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (unsigned int)numberOfOccurrences;
- (id)coalescingHash;
- (BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property double duration; // @synthesize duration=_duration;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;

@end

