//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem
{
    NSString *_originatorProfileImageURLString;
    NSString *_profileURLComponent;
}

@property(copy, nonatomic) NSString *profileURLComponent; // @synthesize profileURLComponent=_profileURLComponent;
@property(copy, nonatomic) NSString *originatorProfileImageURLString; // @synthesize originatorProfileImageURLString=_originatorProfileImageURLString;
- (id)_profileImageURLWithImageSizeString:(id)arg1;
- (id)originatorProfileURL;
- (id)sourceRecordURL;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (id)biggerOriginatorProfileImageURL;
- (id)originatorProfileImageURL;
- (id)socialSource;
- (void).cxx_destruct;

@end

