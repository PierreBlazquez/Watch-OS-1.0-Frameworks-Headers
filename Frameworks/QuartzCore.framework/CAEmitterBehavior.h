//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CAEmitterBehavior : NSObject <NSCoding>
{
    unsigned int _type;
    NSString *_name;
    void *_attr;
    void *_cache;
    unsigned int _flags;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)behaviorTypes;
+ (id)behaviorWithType:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(getter=isEnabled) BOOL enabled;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithType:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
@property(copy) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property(readonly) NSString *type;
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

