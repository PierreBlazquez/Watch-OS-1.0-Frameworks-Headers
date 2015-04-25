//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "ABCountryPickerControllerDelegate.h"
#import "ABText.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CNContactStyle, CNPostalAddress, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor, UITableView;

@interface ABPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, ABCountryPickerControllerDelegate, ABText>
{
    CNPostalAddress *_address;
    NSDictionary *_valueTextAttributes;
    id <ABPresenterDelegate> _delegate;
    CNContactStyle *_contactStyle;
    UITableView *_tableView;
    NSDictionary *_addressFormats;
    NSArray *_cellsLayout;
    NSMutableDictionary *_textFields;
}

@property(copy, nonatomic) CNPostalAddress *address;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSMutableDictionary *textFields; // @synthesize textFields=_textFields;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(copy, nonatomic) UIColor *separatorColor;
- (struct CGSize)intrinsicContentSize;
- (BOOL)canBecomeFirstResponder;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
@property(nonatomic) id <ABPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSDictionary *addressFormats; // @synthesize addressFormats=_addressFormats;
@property(copy, nonatomic) NSDictionary *ab_textAttributes;
@property(copy, nonatomic) NSString *ab_text;
- (id)_normalizeCountryCodeToISO:(id)arg1;
- (void)_setupCoutryPickerOnTextField:(id)arg1;
- (void)_setupCountryPickerOnLine:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (id)_addressPlaceholderForKey:(id)arg1;
- (id)_addressValueForKey:(id)arg1;
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;
- (id)_cellsLayoutForCountryCode:(id)arg1;
@property(copy, nonatomic) NSArray *cellsLayout; // @synthesize cellsLayout=_cellsLayout;
- (void)_invalidateCellsLayout;
@property(readonly, nonatomic) int lineCount;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)countryPickerDidCancel:(id)arg1;
- (id)_countryCode;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

