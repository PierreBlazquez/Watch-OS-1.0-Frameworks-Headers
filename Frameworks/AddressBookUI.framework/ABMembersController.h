//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContentController.h>

#import "ABMembersDataSourceDelegate.h"
#import "ABSearchOperationDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITextFieldDelegate.h"

@class ABMembersDataSource, ABMembersFilteredDataSource, NSIndexPath, NSOperationQueue, NSString, UISearchBar, UISearchController, UISearchDisplayController, UITableView, UITableViewController, UIViewController, _UIContentUnavailableView, _UINavigationControllerPalette;

@interface ABMembersController : ABContentController <UISearchControllerDelegate, UISearchResultsUpdating, ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate>
{
    ABMembersDataSource *_membersDataSource;
    ABMembersFilteredDataSource *_searchDataSource;
    id <ABStyleProvider> _styleProvider;
    unsigned int _cellsCreated;
    unsigned int _memberCount;
    UITableView *_tableView;
    UISearchController *_searchController;
    UISearchDisplayController *_searchDisplayController;
    UITableViewController *_searchResultsController;
    _UIContentUnavailableView *_contentUnavailableView;
    UIViewController *_parentViewController;
    unsigned int _searchSequenceNumber;
    NSOperationQueue *_operationQueue;
    id <ABMembersControllerDelegate> _membersControllerDelegate;
    BOOL _showingCardFromSearch;
    BOOL _shouldDeactivateSearch;
    NSIndexPath *_selectedIndexPath;
    BOOL _searchEnabled;
    BOOL _needToClearOldResults;
    int _initiallyVisibleRow;
    id <ABMembersControllerSearchCompletionDelegate> _searchCompletionDelegate;
    _UINavigationControllerPalette *_searchPalette;
}

+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void *)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned int *)arg5;
- (id)selectedCell;
- (id)initWithAddressBook:(void *)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
@property(retain, nonatomic) _UINavigationControllerPalette *searchPalette; // @synthesize searchPalette=_searchPalette;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (BOOL)_shouldDeactivateOnCancelButtonClicked;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
@property(readonly) UITableView *searchResultsTableView;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)tableView;
- (BOOL)shouldShowIndex;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)contentView;
- (void)reload;
- (void)dealloc;
- (id)operationQueue;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)setAddressBook:(void *)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
@property(nonatomic) id <ABMembersControllerSearchCompletionDelegate> searchCompletionDelegate; // @synthesize searchCompletionDelegate=_searchCompletionDelegate;
@property(nonatomic, getter=isSearchEnabled) BOOL searchEnabled; // @synthesize searchEnabled=_searchEnabled;
- (void)_deselectAllRowsWithAnimation;
- (void)displayedMembersListChanged;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (id)_localizedStringForError:(int)arg1;
- (id)__searchController;
- (id)__searchBar;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (void)setCellsCreated:(unsigned int)arg1;
- (unsigned int)cellsCreated;
- (void)scrollMemberToTop:(void *)arg1;
- (void)stopScrolling;
@property(nonatomic) id <ABMembersControllerDelegate> membersControllerDelegate; // @synthesize membersControllerDelegate=_membersControllerDelegate;
- (void)abScrollViewDidBeginDragging:(id)arg1;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void *)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (BOOL)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)_updateCountString;
- (BOOL)selectAndScrollMemberVisible:(void *)arg1;
- (void *)_selectedPerson;
- (void)_searchForWords:(id)arg1;
@property(readonly, nonatomic) NSString *currentSearchText;
- (void)reloadSearchTableView;
@property(readonly, nonatomic) BOOL isServerSearchGroup;
- (void)_cancelGALSearch;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (BOOL)shouldShowGroups;
@property(readonly, nonatomic) UITableView *currentTableView;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_scrollIndexToTop:(int)arg1;
- (id)tableViewPathToMember:(void *)arg1;
- (int)globalIndexOfMember:(void *)arg1;
- (id)searchDataSource;
- (id)membersDataSource;
- (void)_updateRowsHeights;
- (id)contactsFilter;
- (BOOL)isSearching;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_reloadFontSizes;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

