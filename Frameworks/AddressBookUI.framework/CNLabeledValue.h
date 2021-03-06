//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying>
{
    int _multiValueIdentifier;
    NSString *_label;
    id _value;
}

+ (void *)addressBook;
+ (id)allLabels;
+ (id)defaultLabels;
+ (id)builtinLabelsForProperty:(id)arg1;
+ (id)labeledValueWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)allCustomLabels;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) id value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *identifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)labeledValueBySettingValue:(id)arg1;
- (BOOL)isEqualToLabelledValue:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (id)initWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (BOOL)isEqualToLabelledValue:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
@property(readonly, copy) NSString *localizedLabel;
@property(readonly) int multiValueIdentifier;
- (void)setMultiValueIdentifier:(int)arg1;

@end

