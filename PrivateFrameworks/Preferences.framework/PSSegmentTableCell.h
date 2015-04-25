//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell
{
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (id)controlValue;
- (id)newControl;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (BOOL)canReload;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (void)setValue:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

