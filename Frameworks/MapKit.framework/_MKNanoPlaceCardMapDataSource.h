//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKNanoPlaceCardSectionData.h>

@class _MKNanoPlaceCardFooterView;

@interface _MKNanoPlaceCardMapDataSource : _MKNanoPlaceCardSectionData
{
    _MKNanoPlaceCardFooterView *_cell;
}

- (id)initWithMapItem:(id)arg1;
@property(nonatomic) unsigned int pinColor;
- (void).cxx_destruct;
- (int)numberOfRows;
- (id)title;
@property(nonatomic) BOOL showsName;
- (void)preloadSnapshotForWidth:(float)arg1;
- (void)notifyDelegateForActionAtRow:(unsigned int)arg1;
- (id)cellForRow:(unsigned int)arg1 inTableView:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <_MKNanoPlaceCardMapDataDelegate> delegate;

@end

