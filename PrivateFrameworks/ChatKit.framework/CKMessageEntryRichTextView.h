//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMessageEntryTextView.h>

#import "NSTextStorageDelegate.h"

@class CKComposition, NSMutableDictionary, NSString;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate>
{
    BOOL _balloonColor;
    NSMutableDictionary *_mediaObjects;
    NSMutableDictionary *_composeImages;
    CKComposition *_pasteboardComposition;
    int _pasteboardChangeCount;
}

@property(retain, nonatomic) NSMutableDictionary *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
- (void)setCompositionText:(id)arg1;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange)arg3 changeInLength:(int)arg4;
@property(nonatomic) BOOL balloonColor; // @synthesize balloonColor=_balloonColor;
- (id)composeImageForTransferGUID:(id)arg1;
- (void)updateComposeImages;
@property(retain, nonatomic) NSMutableDictionary *composeImages; // @synthesize composeImages=_composeImages;
- (void)previewDidChange:(id)arg1;
- (id)attributedTextForCompositionText:(id)arg1;
@property(nonatomic) int pasteboardChangeCount; // @synthesize pasteboardChangeCount=_pasteboardChangeCount;
@property(retain, nonatomic) CKComposition *pasteboardComposition; // @synthesize pasteboardComposition=_pasteboardComposition;
- (id)compositionText;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

