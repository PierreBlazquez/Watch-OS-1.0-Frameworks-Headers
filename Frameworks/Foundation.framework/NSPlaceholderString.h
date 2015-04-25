//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
{
}

- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithData:(id)arg1 encoding:(unsigned int)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)length;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void *)arg3;
- (id)initWithCString:(const char *)arg1 length:(unsigned int)arg2;

@end

