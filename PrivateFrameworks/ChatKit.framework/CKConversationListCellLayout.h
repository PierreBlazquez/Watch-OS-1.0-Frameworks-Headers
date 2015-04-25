//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKConversationListCellLayout : NSObject
{
    BOOL _invalid;
    float _summaryLabelCapFrameYOrigin;
    struct CGRect _summaryFrame;
    struct CGRect _dateFrame;
    struct CGRect _senderFrame;
    struct CGRect _senderFrameWhenUnread;
    struct CGRect _groupViewFrame;
    struct CGRect _chevronFrame;
    struct CGRect _unreadFrame;
}

+ (id)sharedInstance;
@property(nonatomic) float summaryLabelCapFrameYOrigin; // @synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin;
@property(nonatomic) struct CGRect groupViewFrame; // @synthesize groupViewFrame=_groupViewFrame;
@property(nonatomic) struct CGRect senderFrame; // @synthesize senderFrame=_senderFrame;
@property(nonatomic) struct CGRect senderFrameWhenUnread; // @synthesize senderFrameWhenUnread=_senderFrameWhenUnread;
@property(nonatomic) struct CGRect dateFrame; // @synthesize dateFrame=_dateFrame;
@property(nonatomic) struct CGRect summaryFrame; // @synthesize summaryFrame=_summaryFrame;
@property(nonatomic) struct CGRect unreadFrame; // @synthesize unreadFrame=_unreadFrame;
@property(nonatomic) struct CGRect chevronFrame; // @synthesize chevronFrame=_chevronFrame;
- (void)invalidate;
- (id)init;
@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;

@end

