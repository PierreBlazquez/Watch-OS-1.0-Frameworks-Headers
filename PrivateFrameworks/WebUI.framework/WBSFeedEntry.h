//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface WBSFeedEntry : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_urlString;
    NSString *_title;
    NSString *_entryDescription;
    NSString *_content;
    NSDate *_datePublished;
    NSDate *_dateUpdated;
}

+ (id)feedEntryWithAtomFeedElement:(id)arg1;
+ (id)feedEntryWithRSSFeedElement:(id)arg1;
+ (id)dateFromAtomDateString:(id)arg1;
+ (id)dateFromRSSDateString:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *dateUpdated; // @synthesize dateUpdated=_dateUpdated;
@property(copy, nonatomic) NSDate *datePublished; // @synthesize datePublished=_datePublished;
@property(copy, nonatomic) NSString *entryDescription; // @synthesize entryDescription=_entryDescription;
- (id)initWithIdentifier:(id)arg1 urlString:(id)arg2;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

@end

