//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityLabelComplicationView.h>

#import "NTKLocationComplicationDisplay.h"

@class NSString;

@interface NTKLongLocationUtilityComplicationView : NTKUtilityLabelComplicationView <NTKLocationComplicationDisplay>
{
}

- (void)setLatitude:(id)arg1 longitude:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

