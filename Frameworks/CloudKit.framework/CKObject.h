//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKPropertyCoding.h"

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>
{
}

@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSSet *propertyNamesNotToEncode;
@property(readonly, nonatomic) CKObjCClass *objcClass;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)dictionaryPropertyEncoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

