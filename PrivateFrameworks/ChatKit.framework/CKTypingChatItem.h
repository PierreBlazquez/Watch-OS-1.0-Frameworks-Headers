//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem
{
}

- (BOOL)displayDuringSend;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
- (BOOL)wantsDrawerLayout;
@property(readonly, nonatomic, getter=isFromMe) BOOL fromMe;
- (struct UIEdgeInsets)contentInsets;
- (Class)cellClass;

@end

