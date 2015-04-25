//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "WeatherValidatorDelegate.h"

@class CLLocationManager, NSString;

@interface WeatherUpdateController : NSObject <CLLocationManagerDelegate, WeatherValidatorDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType searchCompletion;
    CDUnknownBlockType currentLocationCompletion;
    CDUnknownBlockType weatherInfoCompletion;
    CLLocationManager *locationManager;
}

+ (id)sharedWeatherUpdateController;
@property(copy, nonatomic) CDUnknownBlockType weatherInfoCompletion; // @synthesize weatherInfoCompletion;
- (void)weatherInformationForIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)weatherInformationForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)weatherInformationForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllCities;
- (BOOL)weatherListContainsCity:(id)arg1;
- (id)addCityToWeatherAppList:(id)arg1;
- (int)activeCity;
- (void)searchForCitiesWithName:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType currentLocationCompletion; // @synthesize currentLocationCompletion;
- (id)citiesInWeatherAppList;
- (void)didFailWithError:(id)arg1;
- (void)didValidateLocation:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType searchCompletion; // @synthesize searchCompletion;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

