//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, CLPlacemark, NSString;

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSString *_address;
    NSString *_title;
    NSString *_displayName;
    NSString *_abURLString;
    CLPlacemark *_placemark;
    BOOL _isCurrentLocation;
    double _radius;
    NSString *_routeType;
    int _type;
}

+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)routeTypeStringForCalLocationRoutingMode:(int)arg1;
+ (int)routingModeEnumForCalRouteType:(id)arg1;
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
- (double)distanceFromLocation:(id)arg1;
@property(copy, nonatomic) CLLocation *location;
@property(readonly, nonatomic) BOOL isCurrentLocation;
@property(copy) NSString *routeType; // @synthesize routeType=_routeType;
@property(copy) NSString *address; // @synthesize address=_address;
- (id)fullTitleAndAddressString;
- (id)geoURLString;
- (id)typeString;
@property(copy) NSString *abURLString; // @synthesize abURLString=_abURLString;
- (void).cxx_destruct;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSString *title; // @synthesize title=_title;
@property int type; // @synthesize type=_type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;

@end

