//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

@class UIView<CKAttachmentView>;

@interface CKAttachmentBalloonView : CKColoredBalloonView
{
    UIView<CKAttachmentView> *_attachmentView;
}

@property(retain, nonatomic) UIView<CKAttachmentView> *attachmentView; // @synthesize attachmentView=_attachmentView;
- (void)transferUpdated:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)description;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

