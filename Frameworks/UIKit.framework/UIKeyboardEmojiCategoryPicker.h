//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardEmojiPicker.h>

#import "UIKeyboardEmojiCategoryControl.h"

@class NSString, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCategoryController *_categoryController;
}

- (id)categoryForCurrentRow;
- (id)symbolForRow:(int)arg1;
- (id)titleForRow:(int)arg1;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
