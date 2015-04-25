//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSFormatter;

@interface _NSStringProxyForContext : NSString
{
    NSString *_string;
    NSFormatter *_formatter;
    id <NSCopying><NSSecureCoding><NSObject> _item;
}

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
@property(copy) NSString *string; // @synthesize string=_string;
@property(copy) id item; // @synthesize item=_item;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)length;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_retainFormatter:(id)arg1;
@property(copy) NSFormatter *formatter; // @synthesize formatter=_formatter;
- (id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2;

@end
