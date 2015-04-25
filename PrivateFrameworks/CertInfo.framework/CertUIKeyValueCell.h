//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UILabel;

@interface CertUIKeyValueCell : UITableViewCell
{
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

- (void)_setup;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_setupConstraints;

@end

