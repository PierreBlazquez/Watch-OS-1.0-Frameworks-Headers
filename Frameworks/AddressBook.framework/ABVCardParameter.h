//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ABVCardParameter : NSObject
{
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (void)finalize;
- (id)grouping;
- (void)setGrouping:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)value;
- (id)name;
- (void)setValue:(id)arg1;
- (id)types;
- (id)description;
- (void)dealloc;
- (BOOL)isPrimary;
- (void)addType:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)setIsPrimary:(BOOL)arg1;

@end

