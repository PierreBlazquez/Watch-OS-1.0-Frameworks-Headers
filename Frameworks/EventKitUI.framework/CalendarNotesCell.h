//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class NSString, UITextView;

@interface CalendarNotesCell : EKUIConstrainedFontsTableViewCell
{
    UITextView *_textView;
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UITextView *textView;
@property(retain, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

