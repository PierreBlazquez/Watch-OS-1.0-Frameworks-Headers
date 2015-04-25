//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CertUICertificatePropertiesInfo : NSObject
{
    NSArray *_sections;
    NSArray *_sectionTitles;
}

@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_cellInfosForSection:(id)arg1;
- (id)initWithSendableCertificateProperties:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (void)_setup:(id)arg1;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end

