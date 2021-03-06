//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKMedicalIDEditorCell.h>

@class NSDate, UIDatePicker;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell
{
    UIDatePicker *_picker;
    NSDate *_dateValue;
}

@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
- (void)_hideDatePicker;
- (void)_showDatePicker;
- (void)_configureDatePicker;
- (void)_dateChanged:(id)arg1;
- (id)shortenedFormattedValue;
- (id)formattedValue;
- (void).cxx_destruct;
- (void)beginEditing;
- (void)commitEditing;

@end

