//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleTransportCell.h>

@interface ABPropertyEmailAddressCell : ABPropertySimpleTransportCell
{
    BOOL _VIP;
}

@property(nonatomic, getter=isVIP) BOOL VIP; // @synthesize VIP=_VIP;
- (void)updateTransportButtons;
- (BOOL)shouldShowStar;
- (BOOL)shouldPerformDefaultAction;

@end

