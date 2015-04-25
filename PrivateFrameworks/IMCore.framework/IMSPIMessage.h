//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSPIHandle, NSArray, NSAttributedString, NSDate, NSString, NSURL;

@interface IMSPIMessage : NSObject
{
    NSString *_guid;
    NSArray *_chatGUIDs;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_subject;
    NSArray *_recipients;
    NSURL *_url;
    NSDate *_date;
    IMSPIHandle *_sender;
    long long _messageID;
    BOOL _isOutgoing;
    BOOL _isRead;
    NSArray *_chatGuids;
}

@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property long long messageID; // @synthesize messageID=_messageID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
@property(readonly, retain) NSArray *chatGuids; // @synthesize chatGuids=_chatGuids;
@property BOOL isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property BOOL isRead; // @synthesize isRead=_isRead;
@property(retain) NSArray *chatGUIDs; // @synthesize chatGUIDs=_chatGUIDs;
@property(retain) NSString *subject; // @synthesize subject=_subject;
@property(retain) IMSPIHandle *sender; // @synthesize sender=_sender;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)dealloc;

@end

