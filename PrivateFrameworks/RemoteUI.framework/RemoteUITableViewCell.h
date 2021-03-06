//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIColor, UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView *_invalidRowView;
    BOOL _leftAlignDetailLabel;
    int _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
    UIButton *_detailLinkButton;
    CDUnknownBlockType _detailLinkHandler;
    UIColor *_accessoryColor;
    BOOL _forceFullSizeDetailLabel;
}

@property(retain, nonatomic) UIView *remoteUIAccessoryView; // @synthesize remoteUIAccessoryView=_remoteUIAccessoryView;
@property(nonatomic) int remoteUIAccessoryType; // @synthesize remoteUIAccessoryType=_remoteUIAccessoryType;
@property(nonatomic) BOOL leftAlignDetailLabel; // @synthesize leftAlignDetailLabel=_leftAlignDetailLabel;
@property(nonatomic) BOOL forceFullSizeDetailLabel; // @synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel;
- (void)setRowInvalid:(BOOL)arg1;
- (void)_detailLinkPressed;
- (void)_accessoriesChanged;
- (void)_setRemoteUIAccessoryType:(int)arg1 withColor:(id)arg2;
- (void)setDetailLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_disclosureChevronImage:(BOOL)arg1;
- (id)_checkmarkImage:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

