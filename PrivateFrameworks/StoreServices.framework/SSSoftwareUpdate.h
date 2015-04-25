//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface SSSoftwareUpdate : NSObject
{
    NSDictionary *_dictionary;
    NSDate *_installDate;
    int _updateState;
}

@property(readonly, nonatomic) int parentalControlsRank;
@property(readonly, nonatomic) NSDictionary *updateDictionary; // @synthesize updateDictionary=_dictionary;
@property(nonatomic) int updateState; // @synthesize updateState=_updateState;
- (id)initWithUpdateDictionary:(id)arg1;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (void)dealloc;
@property(readonly, nonatomic) long long storeItemIdentifier;

@end

