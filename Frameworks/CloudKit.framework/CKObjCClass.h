//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CKObjCClass : NSObject
{
    Class _handle;
    NSString *_name;
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

+ (id)classForObject:(id)arg1;
+ (id)classForHandle:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *propertiesByName; // @synthesize propertiesByName=_propertiesByName;
- (id)allProperties;
@property(readonly, nonatomic) Class handle; // @synthesize handle=_handle;
- (id)initWithHandle:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *sortedProperties; // @synthesize sortedProperties=_sortedProperties;
- (id)propertyForName:(id)arg1;

@end

