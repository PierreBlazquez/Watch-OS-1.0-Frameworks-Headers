//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarouselUIServices/CUISAlertPolicy.h>

@class NSDictionary;

@interface CUISMatrixAlertPolicy : CUISAlertPolicy
{
    NSDictionary *_matrix;
}

+ (id)defaultAlertPolicy;
- (unsigned int)presentationRuleForExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (BOOL)hasPresentationRuleForExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (id)_ruleForExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

