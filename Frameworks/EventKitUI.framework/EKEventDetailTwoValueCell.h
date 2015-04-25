//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell
{
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

- (void).cxx_destruct;
- (BOOL)update;
- (id)titleView;
- (int)twoValueCellStyle;
@property(readonly, nonatomic) unsigned int visibleItems;
- (id)value2View;
- (id)valueView;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;

@end

