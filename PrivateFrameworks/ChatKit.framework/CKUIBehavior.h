//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDateFormatter, NSDictionary, NSString, UIColor, UIFont, UIImage;

@interface CKUIBehavior : NSObject
{
    int _HUDStyle;
    float _waveformMaxWidth;
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) float waveformMaxWidth; // @synthesize waveformMaxWidth=_waveformMaxWidth;
@property(nonatomic) int HUDStyle; // @synthesize HUDStyle=_HUDStyle;
@property(readonly, nonatomic) UIFont *headerFont;
@property(readonly, nonatomic) UIFont *locationSubtitleFont;
@property(readonly, nonatomic) UIFont *recipientNameFont;
@property(readonly, nonatomic) UIFont *nameFieldFont;
@property(readonly, nonatomic) UIColor *detailsBackgroundColor;
@property(readonly, nonatomic) float attachmentBrowserHeaderLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserFeedLayoutSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserGridSectionInset;
@property(readonly, nonatomic) float attachmentBrowserGridMinimumLineSpacing;
@property(readonly, nonatomic) float attachmentBrowserGridInterItemSpacing;
@property(readonly, nonatomic) struct CGSize attachmentBrowserDefaultSizeForSquare;
@property(readonly, nonatomic) UIColor *recipientsDividerColor;
@property(readonly, nonatomic) float dividerHeight;
@property(readonly, nonatomic) UIFont *audioHintFont;
@property(readonly, nonatomic) UIColor *entryFieldTextColor;
@property(readonly, nonatomic) double maxAudioRecordingDuration;
@property(readonly, nonatomic) double minAudioRecordingDuration;
@property(readonly, nonatomic) BOOL presentsFullscreenInViewService;
@property(readonly, nonatomic) BOOL shouldHomogenizeAtomsForPreferredService;
@property(readonly, nonatomic) UIImage *textDocumentIcon;
@property(readonly, nonatomic) UIImage *errorDocumentIcon;
@property(readonly, nonatomic) UIImage *genericDocumentIcon;
@property(readonly, nonatomic) UIFont *contactAttachmentOrgFont;
@property(readonly, nonatomic) UIFont *attachmentTextFont;
@property(readonly, nonatomic) UIColor *waveformDisabledColor;
@property(readonly, nonatomic) UIColor *waveformUnplayedColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonSubtitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonActionColor;
@property(readonly, nonatomic) float contactBalloonOrgBottomSpacing;
@property(readonly, nonatomic) float contactBalloonNameOrgSpacing;
@property(readonly, nonatomic) float contactBalloonTopNameSpacing;
@property(readonly, nonatomic) float contactBalloonHeight;
@property(readonly, nonatomic) float contactBalloonInnerItemSpacing;
@property(readonly, nonatomic) struct CGSize documentIconSize;
@property(readonly, nonatomic) BOOL supportsPassbookAttachments;
@property(readonly, nonatomic) BOOL showsFileSizeInSubtitle;
@property(readonly, nonatomic) BOOL calculatesWidthForAttachmentBalloons;
- (struct CGSize)locationShareBalloonSizeForWidth:(float)arg1 offerState:(int)arg2;
@property(readonly, nonatomic) NSString *strokedTaillessBalloonName;
@property(readonly, nonatomic) NSString *strokedBalloonName;
@property(readonly, nonatomic) NSString *skinnyTaillessBalloonName;
@property(readonly, nonatomic) NSString *skinnyBalloonName;
@property(readonly, nonatomic) NSString *taillessBallonName;
@property(readonly, nonatomic) NSString *balloonName;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) float nanoNoteSenderContentSpace;
- (float)audioBalloonTimeWidthForDuration:(double)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameCapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTextContainerInset;
- (struct CGSize)skinnyBalloonMaskSizeWithTail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL modifiesSingleLineBalloonLayout;
@property(readonly, nonatomic) BOOL modifiesFirstBalloonLayout;
@property(readonly, nonatomic) BOOL playsInlineVideo;
@property(readonly, nonatomic) BOOL shouldAdjustWidthForSendFailure;
@property(readonly, nonatomic) NSDictionary *drawerTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *senderTranscriptTextAttributes;
- (id)statusTranscriptTextAttributesForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) float entryCoverViewPortraitWidth;
@property(readonly, nonatomic) float contactPhotoBalloonMargin;
@property(readonly, nonatomic) float largeTranscriptSpace;
@property(readonly, nonatomic) float mediumTranscriptSpace;
@property(readonly, nonatomic) float smallTranscriptSpace;
@property(readonly, nonatomic) float topTranscriptSpace;
@property(readonly, nonatomic) float checkmarkHorizontalPadding;
- (void)invalidateTranscriptDrawerWidth;
- (float)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contactPhotoTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets senderTranscriptInsets;
@property(readonly, nonatomic) float emojiPreviewMaxWidth;
@property(readonly, nonatomic) float statusButtonCharge;
@property(readonly, nonatomic) struct UIEdgeInsets statusButtonContentEdgeInsets;
@property(readonly, nonatomic) float transcriptDrawerContactImagePadding;
@property(readonly, nonatomic) BOOL transcriptCanUseOpaqueMask;
@property(readonly, nonatomic) BOOL usesDataDetectorsUI;
@property(readonly, nonatomic) BOOL shouldInsetForStatusBar;
@property(readonly, nonatomic) BOOL shouldUseDynamicScrolling;
@property(readonly, nonatomic) BOOL shouldShowContactPhotosInTranscript;
@property(readonly, nonatomic) UIFont *readerFont;
@property(readonly, nonatomic) UIFont *transcriptHeaderTextFont;
@property(readonly, nonatomic) float updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) float editingTransitionAnimationDuration;
@property(readonly, nonatomic) float throwMessageAnimationDuration;
@property(readonly, nonatomic) float scrollInNewMessageAnimationDuration;
@property(readonly, nonatomic) float fadeInBubbleAnimationDuration;
@property(readonly, nonatomic) BOOL shouldUseSendAnimation;
@property(readonly, nonatomic) BOOL shouldBackfillTranscript;
@property(readonly, nonatomic) UIFont *conversationListGroupSenderFont;
@property(readonly, nonatomic) float conversationListMultipleContactsImageDiameter;
@property(readonly, nonatomic) BOOL selectNewConversationOnStateRestore;
@property(readonly, nonatomic) Class conversationListNavigationControllerClass;
@property(readonly, nonatomic) UIColor *notificationSubtitleColor;
@property(readonly, nonatomic) UIColor *darkAppTintColor;
@property(readonly, nonatomic) UIColor *messagesControllerBackgroundColor;
@property(readonly, nonatomic) float conversationListCellBackgroundPadding;
- (float)leftSplitPaneWidthFraction;
- (float)leftSplitPaneMaximumWidth;
- (float)leftSplitPaneMinimumWidth;
@property(readonly, nonatomic) BOOL showMMSSetup;
@property(readonly, nonatomic) BOOL mailIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) BOOL phoneIsWhitelisted;
@property(readonly, nonatomic) unsigned int conversationCacheSize;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) float transcriptHeaderViewMaxRows;
@property(readonly, nonatomic) BOOL isAccessibilityPreferredContentSizeCategory;
@property(readonly, nonatomic) BOOL joystickUsesWindow;
@property(readonly, nonatomic) BOOL presentForwardingUIModally;
@property(readonly, nonatomic) BOOL showsCompositionPanel;
@property(readonly, nonatomic) BOOL resetsIdleTimer;
@property(readonly, nonatomic) BOOL shouldGrabBackgroundAssertion;
@property(readonly, nonatomic) BOOL presentsQuickLookController;
@property(readonly, nonatomic) BOOL shouldReconfigureNewComposeOnRotation;
@property(readonly, nonatomic) BOOL usesCustomSplitViewMasterColumnWidth;
@property(readonly, nonatomic) BOOL usesUncollapsedSplitview;
@property(readonly, nonatomic) int locationShareEODHour;
@property(readonly, nonatomic) double locationShareOneHourTimeInterval;
@property(readonly, nonatomic) double muteEightHourTimeInterval;
@property(readonly, nonatomic) double muteOneHourTimeInterval;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)red_progressViewColor;
- (id)siri_progressViewColor;
- (id)blue_progressViewColor;
- (id)green_progressViewColor;
- (id)gray_progressViewColor;
- (id)red_waveformColor;
- (id)siri_waveformColor;
- (id)blue_waveformColor;
- (id)green_waveformColor;
- (id)gray_waveformColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonTitleTextColor;
@property(readonly, nonatomic) unsigned int waveformMinPowerLevelsCount;
@property(readonly, nonatomic) float locationShareBalloonAdditionalVertPadding;
- (struct CGSize)mapThumbnailFillSizeForWidth:(float)arg1;
- (id)whiteChevronImage;
- (id)systemGrayChevronImage;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (struct UIEdgeInsets)taillessAttachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskCapInsets;
- (struct UIEdgeInsets)taillessSkinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
@property(readonly, nonatomic) float skinnyBalloonWidthDifference;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)taillessSkinnyBalloonMaskSize;
- (struct CGSize)taillessBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
- (struct CGSize)skinnyBalloonMaskSize;
- (id)_rightStatusTranscriptBoldTextAttributes;
- (id)_leftStatusTranscriptBoldTextAttributes;
- (id)_rightStatusTranscriptTextAttributes;
- (id)_leftStatusTranscriptTextAttributes;
@property(readonly, nonatomic) UIColor *transcriptTextColor;
- (float)balloonBalloonTranscriptSpace:(unsigned char)arg1;
- (id)transcriptDrawerFont;
- (float)transcriptDrawerSpace;
@property(readonly, nonatomic) struct UIEdgeInsets stampTranscriptInsets;
@property(readonly, nonatomic) BOOL shouldUseRotisserieScrolling;
- (float)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) UIColor *grayTextColor;
@property(readonly, nonatomic) BOOL usesPersistentConversationSelection;
- (float)conversationListSummaryBodyLeading;
- (float)conversationListSenderBodyLeading;
- (float)leftSplitPaneWidthForUIInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) BOOL shouldShowDisclosureChevronInRecipientAtoms;
@property(readonly, nonatomic) BOOL recordsRecentContact;
@property(readonly, nonatomic) unsigned int commonRepliesLoadLimit;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hyphenatesTextContent;
@property(readonly, nonatomic) UIFont *balloonSubjectFont;
@property(readonly, nonatomic) float waveformMinDbPowerLevel;
@property(readonly, nonatomic) float audioBalloonWaveformTimeSpace;
@property(readonly, nonatomic) BOOL handlesBalloonViewTitleTapsSeparately;
@property(readonly, nonatomic) float previewTitleBarHeight;
@property(readonly, nonatomic) UIFont *previewTitleFont;
@property(readonly, nonatomic) UIColor *activeRecordingDotColor;
@property(readonly, nonatomic) BOOL supportsContiguousAttachments;
@property(readonly, nonatomic) NSDictionary *stampTranscriptTextAttributes;
- (id)progressViewColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIFont *audioBalloonTimeFont;
@property(readonly, nonatomic) float audioBalloonTimeInset;
@property(readonly, nonatomic) struct CGSize attachmentBalloonSize;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsetsWithTail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldFillAttachmentBalloon;
@property(readonly, nonatomic) Class attachmentViewClass;
@property(readonly, nonatomic) float balloonMaskTailWidth;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPlayButtonInsets;
@property(readonly, nonatomic) int playButtonBackdropStyle;
@property(readonly, nonatomic) BOOL playButtonPunchesOutArrow;
@property(readonly, nonatomic) UIImage *playButtonArrowImage;
@property(readonly, nonatomic) unsigned int waveformPowerLevelWidth;
@property(readonly, nonatomic) float waveformHeight;
@property(readonly, nonatomic) unsigned int waveformMaxPowerLevelsCount;
@property(readonly, nonatomic) float waveformMinLinearPowerLevel;
@property(readonly, nonatomic) unsigned int waveformPowerLevelWidthIncrement;
@property(readonly, nonatomic) unsigned int waveformGapWidth;
- (id)waveformColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) double waveformMaxWidthDuration;
@property(readonly, nonatomic) Class audioBalloonViewClass;
@property(readonly, nonatomic) UIFont *conversationListGroupCountFont;
@property(readonly, nonatomic) struct CGSize contactImageSize;
@property(readonly, nonatomic) BOOL useSingleLineForContactVCardNames;
@property(readonly, nonatomic) Class contactBalloonViewClass;
@property(readonly, nonatomic) float contactBalloonMinWidth;
- (id)balloonTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIFont *contactAttachmentNameFont;
- (id)chevronImageForColorType:(BOOL)arg1;
@property(readonly, nonatomic) BOOL showsBalloonChevron;
- (struct CGSize)thumbnailFillSizeForWidth:(float)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) BOOL showsVCalViewer;
@property(readonly, nonatomic) BOOL showsPlaceCardForBalloonViewTitleTap;
@property(readonly, nonatomic) BOOL opensLocationsInMapsApp;
@property(readonly, nonatomic) BOOL presentsReaderController;
@property(readonly, nonatomic) BOOL canAccessPhotos;
@property(readonly, nonatomic) BOOL supportsTypingIndicatorAnimation;
- (id)balloonColorsForColorType:(BOOL)arg1;
@property(readonly, nonatomic) CDStruct_a5e6b1d2 typingIndicatorSpec;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsetsWithTail:(BOOL)arg1;
- (struct UIEdgeInsets)balloonMaskCapInsetsWithTail:(BOOL)arg1 skinny:(BOOL)arg2;
@property(readonly, nonatomic) int transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) float locationShareBalloonContactImageDiameter;
@property(readonly, nonatomic) float transcriptDrawerContactImageDiameter;
@property(readonly, nonatomic) float transcriptContactImageDiameter;
@property(readonly, nonatomic) BOOL showPendingInConversationList;
@property(readonly, nonatomic) BOOL shouldDimTranscript;
@property(readonly, nonatomic) UIImage *trashImage;
@property(readonly, nonatomic) UIImage *detailsImage;
@property(readonly, nonatomic) BOOL selectNewConversationOnDeletion;
@property(readonly, nonatomic) BOOL darkUIEnabled;
@property(readonly, nonatomic) Class conversationListTableViewClass;
@property(readonly, nonatomic) BOOL shouldShowSearchBarInConversationList;
@property(readonly, nonatomic) BOOL showsNoMessagesDialog;
@property(readonly, nonatomic) BOOL hideUnreadCountInTitleBar;
@property(readonly, nonatomic) BOOL hidesUnreadIndicatorWhenEditing;
@property(readonly, nonatomic) float conversationListContactImageDiameter;
@property(readonly, nonatomic) UIImage *readDNDImage;
@property(readonly, nonatomic) UIImage *unreadDNDImage;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) BOOL showsConversationListCellChevronImage;
@property(readonly, nonatomic) UIImage *unreadImage;
@property(readonly, nonatomic) UIFont *conversationListSummaryFont;
@property(readonly, nonatomic) unsigned int conversationListCellSummaryNumberOfLines;
@property(readonly, nonatomic) UIColor *conversationListSummaryColor;
@property(readonly, nonatomic) UIFont *conversationListSenderFont;
@property(readonly, nonatomic) UIColor *conversationListSenderColor;
@property(readonly, nonatomic) UIFont *conversationListDateFont;
@property(readonly, nonatomic) UIColor *conversationListDateColor;
@property(readonly, nonatomic) struct CGSize statusSaveButtonTranscriptTextSize;
@property(readonly, nonatomic) UIColor *appTintColor;
@property(readonly, nonatomic) UIFont *transcriptBoldTextFont;
@property(readonly, nonatomic) NSAttributedString *statusSaveButtonTranscriptText;
@property(readonly, nonatomic) NSDateFormatter *timestampDateFormatter;
@property(readonly, nonatomic) float transcriptBoldTextHeight;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptBoldTextAlignmentInsets;
@property(readonly, nonatomic) UIFont *transcriptTextFont;
- (id)statusTranscriptBoldTextAttributesForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTranscriptInsets;
@property(readonly, nonatomic) BOOL shouldShowContactPhotosInConversationList;
- (float)transcriptDrawerOverlapForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) BOOL timestampsPushBalloons;
- (float)transcriptDrawerWidthForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) float balloonMaskTailHeight;
@property(readonly, nonatomic) BOOL automaticallyShowsKeyboard;
@property(readonly, nonatomic) BOOL photosIsWhitelisted;
@property(readonly, nonatomic) BOOL cameraIsWhitelisted;
@property(readonly, nonatomic) BOOL usesEntryView;
@property(readonly, nonatomic) UIImage *forwardImage;
@property(readonly, nonatomic) UIColor *transcriptSeparatorColor;
@property(readonly, nonatomic) BOOL shouldUseTranslucentBars;
@property(readonly, nonatomic) UIColor *progressBarTrackTintColor;
@property(readonly, nonatomic) BOOL showsProgressInNavigationBar;
@property(readonly, nonatomic) float resizeMessageEntryViewAnimationDuration;
@property(readonly, nonatomic) BOOL showsSendAnimation;
@property(readonly, nonatomic) BOOL shouldUseDynamicGradient;
@property(readonly, nonatomic) float bottomTranscriptSpace;
- (struct CGSize)balloonMaskSizeWithTail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL usesNavigationBarControls;
@property(readonly, nonatomic) BOOL scrollToBottomStopsAtTopOfLastBubble;
- (float)leftBalloonMaxWidthForTranscriptWidth:(float)arg1 marginInsets:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptMarginInsets;
- (float)rightBalloonMaxWidthForEntryContentViewWidth:(float)arg1;
@property(readonly, nonatomic) BOOL promptsForReadReceiptsSetting;
@property(readonly, nonatomic) BOOL shouldSuppressRotationInNewCompose;
@property(readonly, nonatomic) BOOL lowClearanceInLandscape;
@property(readonly, nonatomic) UIColor *transcriptBackgroundColor;
@property(readonly, nonatomic) unsigned int numberOfButtonsInPhotoPicker;
@property(readonly, nonatomic) float photoPickerMaxZoomedPhotoHeight;
@property(readonly, nonatomic) float photoPickerMaxPhotoWidth;
@property(readonly, nonatomic) float photoPickerMaxPhotoHeight;
@property(readonly, nonatomic) BOOL photoPickerShouldZoomOnSelection;
@property(readonly, nonatomic) struct UIEdgeInsets photoPickerSectionInsets;
@property(readonly, nonatomic) float photoPickerInterItemSpacing;
@property(readonly, nonatomic) float photoPickerPopoverWidth;
- (float)composeBalloonMaxWidthForEntryContentViewWidth:(float)arg1;
@property(readonly, nonatomic) float entryContentViewPortraitWidth;
- (float)transcriptWaveformWidthForDuration:(double)arg1;
@property(readonly, nonatomic) BOOL isSizeConstrained;
@property(readonly, nonatomic) UIColor *entryFieldButtonColor;
@property(readonly, nonatomic) BOOL shouldNotShowSendButton;
@property(readonly, nonatomic) double raiseToTalkAutoSendMaxDuration;
@property(readonly, nonatomic) double raiseToTalkErrorMaxDuration;
@property(readonly, nonatomic) UIColor *dimmingViewBackgroundColor;
@property(readonly, nonatomic) float entryFieldCoverLineWidth;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverBorderColor;
@property(readonly, nonatomic) UIColor *entryFieldGrayColor;
@property(readonly, nonatomic) BOOL usesJoystick;
- (id)sendButtonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) BOOL entryFieldShouldUseBackdropView;
@property(readonly, nonatomic) UIColor *entryFieldBackgroundColor;
@property(readonly, nonatomic) float balloonLineFragmentPadding;
@property(readonly, nonatomic) UIFont *characterCountFont;
@property(readonly, nonatomic) float transcriptPortraitWidth;
@property(readonly, nonatomic) UIFont *balloonTextFont;
@property(readonly, nonatomic) float entryFieldDividerHeight;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewCoverInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewVerticalAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewMarginInsets;
@property(readonly, nonatomic) BOOL shouldRefreshAlternateAddressesSheet;
- (id)recipientTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
@property(readonly, nonatomic) BOOL usesPopovers;
@property(readonly, nonatomic) BOOL canAccessContacts;
- (float)toFieldPreferredHeight;
@property(readonly, nonatomic) UIColor *entryFieldDividerColor;
- (float)locationShareBalloonLabelMaxHeightForOfferState:(int)arg1;
@property(readonly, nonatomic) float locationShareBalloonButtonHeight;
- (struct UIEdgeInsets)thumbnailContentAlignmentInsetsForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) float previewMaxWidth;
@property(readonly, nonatomic) double locationValidInterval;
- (struct CGSize)locationOfferMapThumbnailFillSizeForWidth:(float)arg1;
@property(readonly, nonatomic) UIColor *entryFieldAudioRecordingBaloonColor;
@property(readonly, nonatomic) float conversationListCellRightMargin;
@property(readonly, nonatomic) float conversationListCellLeftMargin;
@property(readonly, nonatomic) float bottomConversationListSpace;
@property(readonly, nonatomic) float summaryDateConversationListSpace;
@property(readonly, nonatomic) float senderSummaryConversationListSpace;
@property(readonly, nonatomic) float topConversationListSpace;
@property(readonly, nonatomic) unsigned int conversationListCellMaxSummaryLength;
@property(readonly, nonatomic) UIColor *conversationListGroupCountColor;
@property(readonly, nonatomic) UIImage *locationShareActionIcon;
@property(readonly, nonatomic) NSDictionary *stampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) Class navigationBarClass;
@property(readonly, nonatomic) int keyboardAppearance;
@property(readonly, nonatomic) UIColor *lightGrayColor;
@property(readonly, nonatomic) unsigned int supportedInterfaceOrientations;
@property(readonly, nonatomic) UIImage *playButtonImage;

@end

