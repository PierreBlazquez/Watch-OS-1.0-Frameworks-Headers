//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSString, SUBDocumentation;

@interface SUBDescriptor : NSObject <NSSecureCoding>
{
    BOOL _userDidAcceptTermsAndConditions;
    BOOL _willProceedWithInstallation;
    BOOL _isAwaitingAdmissionControlForInstallation;
    SUBDocumentation *_documentation;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSString *_documentationID;
    NSString *_marketingVersion;
    NSString *_publisher;
    NSString *_productSystemName;
    NSError *_denialReasons;
    long _msuHandle;
    long long _downloadSize;
    long long _installationSize;
    long long _totalRequiredFreeSpace;
    long long _unarchivedSize;
    long long _msuPrepareSize;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isAwaitingAdmissionControlForInstallation; // @synthesize isAwaitingAdmissionControlForInstallation=_isAwaitingAdmissionControlForInstallation;
@property(nonatomic) BOOL willProceedWithInstallation; // @synthesize willProceedWithInstallation=_willProceedWithInstallation;
@property(nonatomic) long msuHandle; // @synthesize msuHandle=_msuHandle;
@property(nonatomic) long long msuPrepareSize; // @synthesize msuPrepareSize=_msuPrepareSize;
@property(nonatomic) long long unarchivedSize; // @synthesize unarchivedSize=_unarchivedSize;
@property(retain, nonatomic) NSError *denialReasons; // @synthesize denialReasons=_denialReasons;
@property(nonatomic) long long totalRequiredFreeSpace; // @synthesize totalRequiredFreeSpace=_totalRequiredFreeSpace;
@property(nonatomic) long long installationSize; // @synthesize installationSize=_installationSize;
@property(nonatomic) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSString *productSystemName; // @synthesize productSystemName=_productSystemName;
@property(retain, nonatomic) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(retain, nonatomic) NSString *documentationID; // @synthesize documentationID=_documentationID;
@property(retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(retain, nonatomic) SUBDocumentation *documentation; // @synthesize documentation=_documentation;
@property(readonly, nonatomic) long long preparationSize;
@property(nonatomic) BOOL userDidAcceptTermsAndConditions; // @synthesize userDidAcceptTermsAndConditions=_userDidAcceptTermsAndConditions;
@property(readonly, retain, nonatomic) NSString *humanReadableUpdateName;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
- (int)compare:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

