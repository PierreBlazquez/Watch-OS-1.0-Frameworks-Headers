//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIFormPeripheral.h"

@class DOMHTMLInputElement;

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLInputElement *_inputElement;
    id <UIWebFormControl> _control;
}

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;
- (id)initWithDOMHTMLInputElement:(id)arg1;
@property(retain, nonatomic) id <UIWebFormControl> _control; // @synthesize _control;
- (int)_datePickerModeForInputType:(id)arg1;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (id)assistantView;
- (void)endEditing;
- (void)beginEditing;
- (void)dealloc;

@end

