//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFMailComposeRecipientView.h>

@class MFComposeSMIMELockButton;

@interface MFMailComposeToField : MFMailComposeRecipientView
{
    MFComposeSMIMELockButton *_smimeButton;
    BOOL _smimeButtonVisible;
    id <MFMailComposeToFieldDelegate> _toFieldDelegate;
}

- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL smimeButtonVisible; // @synthesize smimeButtonVisible=_smimeButtonVisible;
- (void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_tappedSMIMEButton:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (void)setFocused:(BOOL)arg1;
@property(readonly, nonatomic) MFComposeSMIMELockButton *SMIMEButton;
@property(nonatomic) id <MFMailComposeToFieldDelegate> toFieldDelegate; // @synthesize toFieldDelegate=_toFieldDelegate;

@end

