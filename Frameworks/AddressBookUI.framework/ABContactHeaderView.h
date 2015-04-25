//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ABContactPhotoView, CNContact, CNContactStyle, NSDictionary, NSMutableArray;

@interface ABContactHeaderView : UIView
{
    BOOL _needsReload;
    NSDictionary *_nameTextAttributes;
    id <ABPresenterDelegate> _delegate;
    id <ABContactHeaderViewDelegate> _headerDelegate;
    CNContactStyle *_contactStyle;
    NSMutableArray *_headerConstraints;
    ABContactPhotoView *_photoView;
    CNContact *_contact;
    struct UIEdgeInsets _contentMargins;
}

- (void)setNeedsReload;
- (void)updateConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(nonatomic) id <ABPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(nonatomic) id <ABContactHeaderViewDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
- (void)saveContactPhoto;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
- (void)updateFontSizes;
- (void)updateWithNewContact:(id)arg1;
@property(copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property(readonly, nonatomic) ABContactPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) NSMutableArray *headerConstraints; // @synthesize headerConstraints=_headerConstraints;
- (void)reloadDataIfNeeded;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;

@end

