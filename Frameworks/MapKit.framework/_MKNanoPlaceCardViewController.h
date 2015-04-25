//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewController.h"

#import "_MKNanoPlaceCardAttributionDataDelegate.h"
#import "_MKNanoPlaceCardBusinessDataDelegate.h"
#import "_MKNanoPlaceCardMapDataDelegate.h"
#import "_MKNanoPlaceCardSectionDataDelegate.h"

@class MKMapItem, NSArray, NSString;

@interface _MKNanoPlaceCardViewController : PUICTableViewController <_MKNanoPlaceCardBusinessDataDelegate, _MKNanoPlaceCardMapDataDelegate, _MKNanoPlaceCardSectionDataDelegate, _MKNanoPlaceCardAttributionDataDelegate>
{
    NSArray *_sections;
    BOOL _showsAddressInline;
    BOOL _needsUpdate;
    BOOL _nextUpdateIsAnimated;
    MKMapItem *_mapItem;
    id <_MKNanoPlaceCardViewControllerDelegate> _delegate;
}

- (void)updateWithMapItem:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
@property(nonatomic) __weak id <_MKNanoPlaceCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL showsAddressInline; // @synthesize showsAddressInline=_showsAddressInline;
- (void)placeCardSectionSelectedAttribution:(id)arg1;
- (void)placeCardSectionTappedMap:(id)arg1;
- (id)cellForRow:(unsigned int)arg1 inSection:(id)arg2;
- (id)createSectionsForMapItem:(id)arg1;
- (void)updateWithMapItem:(id)arg1 animated:(BOOL)arg2;
- (void)setNeedsUpdateAnimated:(BOOL)arg1;
- (void)_updateWithMapItem:(id)arg1 animated:(BOOL)arg2;
- (void)placeCardSection:(id)arg1 selectedPhoneNumber:(id)arg2;
- (void)textSizeChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

