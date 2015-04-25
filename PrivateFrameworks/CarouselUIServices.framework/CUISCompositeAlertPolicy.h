//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarouselUIServices/CUISAlertPolicy.h>

@class NSArray, NSMutableArray;

@interface CUISCompositeAlertPolicy : CUISAlertPolicy
{
    NSMutableArray *_policies;
}

@property(readonly, copy, nonatomic) NSArray *alertPolicies;
- (void)removeAlertPolicy:(id)arg1;
- (void)addAlertPolicy:(id)arg1;
- (id)_alertPolicyMatchingExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (BOOL)canRemoveAlertItem:(id)arg1;
- (unsigned int)presentationRuleForExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (BOOL)hasPresentationRuleForExistingAlertItem:(id)arg1 incomingAlertItem:(id)arg2;
- (void)removeAll;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSMutableArray *policies; // @synthesize policies=_policies;

@end

