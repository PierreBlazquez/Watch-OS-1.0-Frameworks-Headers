//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKConversationListCell.h>

@class CKGroupCountView, CKPhoneNumberCompressor;

@interface CKNanoConversationListCell : CKConversationListCell
{
    CKGroupCountView *_groupCountView;
    CKPhoneNumberCompressor *_phoneNumberCompressor;
}

- (void)updateContentsForConversation:(id)arg1;
- (void)_calculateLayoutFrames;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
