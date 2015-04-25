//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableIndexSet, UITableView, UITableViewRowData;

@interface _UITableViewUpdateSupport : NSObject
{
    int oldSection;
    int newSection;
    int oldGlobalRow;
    int newGlobalRow;
    UITableView *tableView;
    struct _NSRange visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange oldRowRange;
    struct _NSRange newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    struct CGRect oldTableViewVisibleBounds;
    struct CGRect newTableViewVisibleBounds;
    struct CGRect tableViewVisibleBoundsUnion;
    float tableViewVisibleBoundsOffset;
    int oldSectionCount;
    int newSectionCount;
    int *oldSectionMap;
    int *newSectionMap;
    int oldGlobalRowCount;
    int newGlobalRowCount;
    int *oldGlobalRowMap;
    int *newGlobalRowMap;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    int globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}

- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (void)_setupAnimationStructures;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (void)_validateAnimatedCells;
- (id)_imageViewForView:(id)arg1;
- (BOOL)_isReloadSectionUpdate;
- (void)_setupDeleteAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1;
- (void)_setupInsertAnimationForFooterInSection:(int)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(int)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupAnimations;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange)arg5 newRowRange:(struct _NSRange)arg6 context:(id)arg7;
- (void)dealloc;

@end

