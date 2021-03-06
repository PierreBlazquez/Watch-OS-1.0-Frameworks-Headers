//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewController.h"

@class NSArray, NSString;

@interface NCABPersonListViewController : PUICTableViewController
{
    CDUnknownBlockType _selectionHandler;
    NSArray *_people;
    NSString *_cellIdentifier;
}

@property(retain, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (id)initWithPeople:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;

@end

