//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UICompletionTablePrivate *_private;
}

+ (id)_cellFont;
+ (id)_shadowImage;
- (void)setTopStrokeColor:(id)arg1;
- (id)_completionForRow:(int)arg1;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) id delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
