//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAGKPodView.h>

@class NSNumber, SALocation, SAUIAppPunchOut;

@interface SAGKMapPod : SAGKPodView
{
}

+ (id)mapPodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapPod;
@property(copy, nonatomic) NSNumber *zoomLevel;
@property(copy, nonatomic) NSNumber *showButton;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
- (id)encodedClassName;
@property(retain, nonatomic) SALocation *location;
- (id)groupIdentifier;

@end

