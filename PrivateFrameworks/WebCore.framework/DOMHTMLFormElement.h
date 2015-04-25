//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement
{
}

- (void)submit;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setNoValidate:(BOOL)arg1;
- (BOOL)noValidate;
@property(copy) NSString *method;
@property(copy) NSString *encoding;
@property(copy) NSString *enctype;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
@property(copy) NSString *acceptCharset;
- (BOOL)checkValidity;
- (int)structuralComplexityContribution;
- (BOOL)autocorrect;
@property(readonly) DOMHTMLCollection *elements;
- (void)reset;
@property(copy) NSString *action;
@property(copy) NSString *name;
@property(copy) NSString *target;
@property(readonly) int length;

@end

