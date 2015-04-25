//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"

@class NSMutableDictionary, NSString, PUICTableView;

@interface PUICTableViewController : UITableViewController <PUICTableViewDelegate, PUICTableViewDataSource>
{
    int _localCopyOfStyle;
    struct __CFDictionary *_sectionHeaders;
    struct __CFDictionary *_sectionFooters;
    NSMutableDictionary *_estimatedHeights;
    BOOL _cachesEstimatedHeights;
}

@property(nonatomic) BOOL cachesEstimatedHeights; // @synthesize cachesEstimatedHeights=_cachesEstimatedHeights;
- (unsigned int)tableView:(id)arg1 swipeControlsForRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PUICTableView *tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

