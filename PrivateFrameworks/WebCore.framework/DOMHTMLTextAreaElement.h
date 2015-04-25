//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement
{
}

- (unsigned int)textLength;
- (void)setWrap:(id)arg1;
- (id)wrap;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)select;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
@property int selectionEnd;
@property int selectionStart;
@property(copy) NSString *defaultValue;
- (void)setRequired:(BOOL)arg1;
- (BOOL)required;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
- (void)setDirName:(id)arg1;
- (id)dirName;
@property int cols;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
- (id)labels;
- (id)validationMessage;
- (id)validity;
@property(readonly) BOOL willValidate;
@property BOOL autofocus;
@property(copy) NSString *accessKey;
@property BOOL readOnly;
@property int rows;
- (int)structuralComplexityContribution;
- (BOOL)_isEdited;
@property BOOL disabled;
- (id)placeholder;
- (BOOL)autocorrect;
- (int)_autocapitalizeType;
@property(readonly) DOMHTMLFormElement *form;
- (void)setPlaceholder:(id)arg1;
@property(copy) NSString *value;
@property(copy) NSString *name;
@property(readonly, copy) NSString *type;

@end

