//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKPass.h"

@class NPKPassColorProfile, NSArray, PKImage;

@interface PKPass (NanoPassKitUI)
- (void)_npkLocateFirstFrontPassFieldsInArray:(id)arg1 outArray:(id)arg2 count:(int)arg3;
@property(readonly) BOOL secondaryFieldsUsedForSplittingPrimaryFields;
@property(readonly) PKImage *npkUIPaymentCardBackgroundImage;
@property(readonly) PKImage *npkUICroppedFooterImage;
@property(readonly) NSArray *nonEmptyFrontFieldBuckets;
@property(readonly) NPKPassColorProfile *colorProfile;
@end

