//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UIKeyboardCandidateGridCollectionViewControllerDelegate.h"

@class NSString, TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, UIView;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    UIView *_clippingView;
    UIView *_topBorder;
    unsigned int _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateSortControl *_scrollViewSortControl;
    CDStruct_961fb75c _visualStyling;
}

- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned int)arg2;
@property(retain, nonatomic) UIKeyboardCandidateSortControl *scrollViewSortControl; // @synthesize scrollViewSortControl=_scrollViewSortControl;
- (void)sortSelectionBarAction:(id)arg1;
@property(nonatomic) unsigned int selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)updateCollectionViewController:(BOOL)arg1;
- (void)clearCollectionViewController;
- (void)updateCollectionViewController;
- (BOOL)isTenKey;
- (void)displayLayer:(id)arg1;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)headerViewForCandidateSet:(id)arg1;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (id)candidateList;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (BOOL)hasCandidates;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)addSubview:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

