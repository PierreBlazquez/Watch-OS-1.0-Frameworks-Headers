//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKNextEventComplicationDisplay.h"

@class NSString, NTKColoringImageView, NTKColoringLabel, UIFont;

@interface NTKNextEventModuleView : NTKComplicationModuleView <NTKNextEventComplicationDisplay>
{
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NTKColoringLabel *_footerLabel;
    NTKColoringImageView *_alertGlyph;
    unsigned int _alertGlyphPosition;
    UIFont *_headerLabelFont;
    UIFont *_footerLabelLocationFont;
    UIFont *_footerLabelEventFont;
}

- (void)setNextEventComplicationNoEventsAtAllTomorrow;
- (void)setNextEventComplicationCoincidingStartTimeEventsTomorrowWithStartDate:(id)arg1 endDate:(id)arg2 count:(unsigned int)arg3 firstCoincidentEventTitle:(id)arg4 secondCoincidentEventTitle:(id)arg5;
- (void)setNextEventComplicationSingleEventTomorrowWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 conflictFlag:(BOOL)arg5;
- (void)setNextEventComplicationNoEventsRemaining;
- (void)setNextEventComplicationNoEventsAtAll;
- (void)setNextEventComplicationCoincidingStartTimeEventsTodayWithStartDate:(id)arg1 endDate:(id)arg2 count:(unsigned int)arg3 firstCoincidentEventTitle:(id)arg4 secondCoincidentEventTitle:(id)arg5;
- (void)setNextEventComplicationSingleEventTodayWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 conflictFlag:(BOOL)arg5;
- (void)setNextEventComplicationFetching;
- (void)setNextEventComplicationLocked;
- (id)_paragraphStyleForIndentedText;
- (id)_timeStringForDate:(id)arg1 usingBaseFont:(id)arg2 overrideDesignatorAttributes:(id)arg3 hideDesignator:(BOOL)arg4;
- (id)_indentAttributedString:(id)arg1;
- (id)_attributedIndentedBodyTextForString:(id)arg1;
- (id)_headerLabelTimeRangeDisplayStringForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_setLayoutCoincidingStartTimeEventsWithStartDate:(id)arg1 count:(unsigned int)arg2 firstCoincidentEventTitle:(id)arg3 secondCoincidentEventTitle:(id)arg4;
- (void)_setLayoutSingleEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 conflictFlag:(BOOL)arg5;
- (void)_setLayoutSimpleMessageWithHeaderText:(id)arg1 andBodyText:(id)arg2;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)layoutContentView;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

