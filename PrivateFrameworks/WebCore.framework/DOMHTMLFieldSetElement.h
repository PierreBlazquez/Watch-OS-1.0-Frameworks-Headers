//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement;

@interface DOMHTMLFieldSetElement : DOMHTMLElement
{
}

- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
- (id)validationMessage;
- (id)validity;
- (BOOL)willValidate;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
@property(readonly) DOMHTMLFormElement *form;
- (id)elements;
- (id)name;
- (void)setName:(id)arg1;
- (id)type;

@end

