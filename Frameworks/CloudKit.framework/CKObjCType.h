//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CKObjCType : NSObject
{
    int _code;
    NSString *_encoding;
    NSString *_name;
    NSString *_className;
    unsigned int _size;
    unsigned int _flags;
}

+ (id)typeForValue:(id)arg1;
+ (id)typeForEncoding:(const char *)arg1;
@property(readonly, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int code; // @synthesize code=_code;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic, getter=isNumber) BOOL number;
- (id)initWithCode:(int)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned int)arg5 flags:(unsigned int)arg6;
@property(readonly, nonatomic, getter=isFloatingPointNumber) BOOL floatingPointNumber;
@property(readonly, nonatomic, getter=isIntegerNumber) BOOL integerNumber;
- (void)getBytes:(void *)arg1 forObject:(id)arg2;
- (id)objectWithBytes:(const void *)arg1;
@property(readonly, nonatomic, getter=isObject) BOOL object;

@end

