//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class CALayer, CAValueFunction, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    BOOL _enabled;
    void *_priv;
}

+ (id)forceField;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(retain) CAValueFunction *function;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(getter=isEnabled) BOOL enabled;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
@property(retain) CALayer *layer;
@property(copy) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;

@end

