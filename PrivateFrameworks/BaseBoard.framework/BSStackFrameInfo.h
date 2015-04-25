//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BSStackFrameInfo : NSObject
{
    NSString *_realFunctionName;
    unsigned long _address;
    NSString *_functionName;
    NSString *_executableName;
    NSString *_className;
}

@property(readonly, nonatomic) unsigned long address; // @synthesize address=_address;
@property(readonly, retain, nonatomic) NSString *executableName; // @synthesize executableName=_executableName;
@property(readonly, retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)initWithReturnAddress:(unsigned long)arg1;
@property(readonly, retain, nonatomic) NSString *className; // @synthesize className=_className;
- (id)description;
- (void)dealloc;

@end

