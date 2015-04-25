//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDictionary, NSString;

@interface PFAssetAdjustments : NSObject <NSCopying>
{
    NSDictionary *_propertyListDictionary;
}

@property(retain, nonatomic) NSDictionary *propertyListDictionary; // @synthesize propertyListDictionary=_propertyListDictionary;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(int)arg4;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
@property(readonly, nonatomic) NSData *adjustmentData;
@property(readonly, nonatomic) int adjustmentBaseVersion;
- (id)initWithPropertyListDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)description;

@end
