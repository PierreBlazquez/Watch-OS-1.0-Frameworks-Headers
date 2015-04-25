//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBSParsecSearchResult.h>

@class MKMapItem, NSArray, NSData, NSString, WBSParsecSearchMapsResultExtraCompletionItem;

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult
{
    MKMapItem *_mapItem;
    NSString *_mapsDataType;
    NSData *_mapsData;
    NSArray *_additionalMapItems;
    NSString *_mapsResultType;
    WBSParsecSearchMapsResultExtraCompletionItem *_extraCompletionItem;
}

@property(readonly, nonatomic) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
@property(readonly, nonatomic) NSString *mapsResultType; // @synthesize mapsResultType=_mapsResultType;
@property(readonly, nonatomic) NSArray *additionalMapItems; // @synthesize additionalMapItems=_additionalMapItems;
@property(readonly, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

