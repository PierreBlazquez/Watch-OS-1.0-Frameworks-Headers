//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewCell.h"

@class NSDate, NSString, UIDateLabel, UIImageView, UILabel;

@interface CKConversationListCell : PUICTableViewCell
{
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UIImageView *_chevronImageView;
    UILabel *_fromLabel;
    BOOL _isPlaceholder;
    UIImageView *_recipientPhotoView;
    NSString *_searchSummaryText;
    NSString *_searchMessageGUID;
    NSDate *_searchMessageDate;
}

+ (float)cellHeight;
+ (id)identifier;
- (void)_contentSizeCategoryDidChange:(id)arg1;
@property(copy, nonatomic) NSString *searchSummaryText; // @synthesize searchSummaryText=_searchSummaryText;
@property(copy, nonatomic) NSString *searchMessageGUID; // @synthesize searchMessageGUID=_searchMessageGUID;
- (void)updateWithSearchResult:(id)arg1;
- (BOOL)showingEditControl;
@property(retain, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
- (void)_conversationThumbnailChanged:(id)arg1;
- (void)_setupThumbnailForConversation:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)_calculateLayoutFrames;
- (void)superLayoutSubviews;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

