//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCameraDevice, ICCameraFolder, NSDate, NSMutableDictionary, NSString;

@interface ICCameraItemProperties : NSObject
{
    ICCameraDevice *_device;
    ICCameraFolder *_parentFolder;
    NSString *_name;
    NSString *_UTI;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    BOOL _locked;
    NSMutableDictionary *_userData;
}

- (void)finalize;
@property ICCameraDevice *device; // @synthesize device=_device;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property ICCameraFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property BOOL locked; // @synthesize locked=_locked;
@property(retain) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

