//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface MPMediaItemArray : NSObject <NSSecureCoding>
{
    Class _itemArrayCoderPIDDataCodingClass;
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

