//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView<ABPersonTabsScrollView>, UIView;

@protocol ABPersonTabsLayoutManager <NSObject>
- (void)moveContentSwitchingTabsAboveView:(UIView *)arg1 inScrollView:(UIScrollView<ABPersonTabsScrollView> *)arg2;
- (void)didChangeContentOffset:(struct CGPoint)arg1 inScrollView:(UIScrollView<ABPersonTabsScrollView> *)arg2;
- (void)repositionContentSwitchingTabs;
- (float)heightForHeaderAndContentSwitchingTabs;
@end

