//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactCell.h>

@class ABPropertyGroupItem, UIResponder, UITextField;

@interface ABPropertyNameCell : ABContactCell
{
    UITextField *_textField;
    UIResponder *_firstResponderItem;
    id <ABPropertyCellDelegate> _delegate;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) ABPropertyGroupItem *propertyItem;
- (void)textFieldChanged:(id)arg1;
@property(readonly, nonatomic) UIResponder *firstResponderItem; // @synthesize firstResponderItem=_firstResponderItem;
- (id)constantConstraints;
- (void)setCardGroupItem:(id)arg1;
- (void)setContactStyle:(id)arg1;

@end

