//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface NMRProtobufSerialization : NSObject
{
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;
    Class _protobufClass;
    CDUnknownBlockType _dictionaryValueToProtobufValueTransformer;
    CDUnknownBlockType _protobufValueToDictionaryValueTransformer;
}

@property(copy, nonatomic) CDUnknownBlockType protobufValueToDictionaryValueTransformer; // @synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer;
@property(copy, nonatomic) CDUnknownBlockType dictionaryValueToProtobufValueTransformer; // @synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer;
@property(retain, nonatomic) Class protobufClass; // @synthesize protobufClass=_protobufClass;
@property(copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // @synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping;
- (id)dictionaryFromProtobufData:(id)arg1;
- (id)protobufDataFromDictionary:(id)arg1;
- (id)dictionaryFromProtobuf:(id)arg1;
- (id)protobufFromDictionary:(id)arg1;
- (void).cxx_destruct;

@end

