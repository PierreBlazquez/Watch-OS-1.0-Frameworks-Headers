//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractAlternateTracksViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UINavigationBar, UIProgressIndicator, UITableView, UITextLabel, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_table;
    UIProgressIndicator *_progressIndicator;
    UITextLabel *_loadingLabel;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)dealloc;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)_setCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)_exitAnimated:(BOOL)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

