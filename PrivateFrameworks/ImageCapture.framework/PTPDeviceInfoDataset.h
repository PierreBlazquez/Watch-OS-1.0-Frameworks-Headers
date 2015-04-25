//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSString;

@interface PTPDeviceInfoDataset : NSObject
{
    NSMutableData *_content;
    BOOL _dirty;
    unsigned short _standardVersion;
    unsigned long _vendorExtensionID;
    unsigned short _vendorExtensionVersion;
    NSString *_vendorExtensionDescription;
    unsigned short _functionalMode;
    NSMutableArray *_operationsSupported;
    NSMutableArray *_eventsSupported;
    NSMutableArray *_devicePropertiesSupported;
    NSMutableArray *_captureFormats;
    NSMutableArray *_imageFormats;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_deviceVersion;
    NSString *_serialNumber;
    BOOL _readOnlyObject;
}

- (void)setDeviceVersion:(id)arg1;
- (id)deviceVersion;
- (void)setContent:(id)arg1;
- (id)canonicalManufacturer;
- (void)setImageFormats:(id)arg1;
- (id)imageFormats;
- (void)setCaptureFormats:(id)arg1;
- (id)captureFormats;
- (void)setDevicePropertiesSupported:(id)arg1;
- (void)setEventsSupported:(id)arg1;
- (id)eventsSupported;
- (void)setOperationsSupported:(id)arg1;
- (void)setFunctionalMode:(unsigned short)arg1;
- (unsigned short)functionalMode;
- (void)setVendorExtensionDescription:(id)arg1;
- (id)vendorExtensionDescription;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (unsigned short)vendorExtensionVersion;
- (void)setVendorExtensionID:(unsigned long)arg1;
- (unsigned long)vendorExtensionID;
- (void)setStandardVersion:(unsigned short)arg1;
- (void)updateContent;
- (id)devicePropertiesSupported;
- (id)initWithMutableData:(id)arg1;
- (unsigned short)standardVersion;
- (id)operationsSupported;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (id)serialNumber;
- (void)setSerialNumber:(id)arg1;
- (void)setModel:(id)arg1;
- (id)content;
- (id)model;
- (id)initWithData:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
