//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OSDDefaults : NSObject
{
    NSString *_domain;
}

+ (id)defaultsInDomain:(id)arg1;
+ (id)defaults;
- (void)setDomain:(id)arg1;
- (void)removeCurrentDomain;
- (BOOL)defaultExists:(id)arg1;
- (void)_defaultsSetter_Q:(unsigned long long)arg1;
- (void)_defaultsSetter_S:(unsigned short)arg1;
- (void)_defaultsSetter_L:(unsigned long)arg1;
- (void)_defaultsSetter_C:(unsigned char)arg1;
- (void)_defaultsSetter_I:(unsigned int)arg1;
- (void)_defaultsSetter_q:(long long)arg1;
- (void)_defaultsSetter_d:(double)arg1;
- (void)_defaultsSetter_s:(short)arg1;
- (void)_defaultsSetter_f:(float)arg1;
- (void)_defaultsSetter_B:(_Bool)arg1;
- (void)_defaultsSetter_c:(BOOL)arg1;
- (void)_defaultsSetter_l:(long)arg1;
- (void)_defaultsSetter_i:(int)arg1;
- (void)_defaultsSetter_id:(id)arg1;
- (unsigned long long)_defaultsGetter_Q;
- (unsigned short)_defaultsGetter_S;
- (unsigned long)_defaultsGetter_L;
- (unsigned char)_defaultsGetter_C;
- (unsigned int)_defaultsGetter_I;
- (long long)_defaultsGetter_q;
- (double)_defaultsGetter_d;
- (short)_defaultsGetter_s;
- (float)_defaultsGetter_f;
- (_Bool)_defaultsGetter_B;
- (BOOL)_defaultsGetter_c;
- (long)_defaultsGetter_l;
- (int)_defaultsGetter_i;
- (id)_defaultsGetter_id;
- (void)_defaultsCtor;
- (SEL)_selForEncodeType:(const char *)arg1 andMap:(id)arg2 withOutType:(unsigned short *)arg3;
- (void)__setValueFromSEL:(SEL)arg1 withValue:(id)arg2;
- (id)__doLookupFromSEL:(SEL)arg1;
- (void)__setValueInDefaults:(id)arg1 forName:(id)arg2;
- (id)__doLookupForName:(id)arg1;
- (id)__getDefaults;
- (id)__getRealDomain;
- (id)_setterList;
- (_Bool)_addMethodsForProperties:(struct objc_property **)arg1 withCount:(unsigned int)arg2 andSELMap:(id)arg3 areSetters:(BOOL)arg4;
- (id)_getterList;
- (id)_methodListForPrefix:(const char *)arg1;
- (SEL)_selForEncodeType:(const char *)arg1 andMap:(id)arg2 withOutType:(unsigned short *)arg3 andOutAttrList:(id *)arg4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDomain:(id)arg1;

@end

