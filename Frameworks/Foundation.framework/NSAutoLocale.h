//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLocale.h"

@interface NSAutoLocale : NSLocale
{
    NSLocale *loc;
}

+ (BOOL)supportsSecureCoding;
- (void)_update:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)_prefs;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;

@end

