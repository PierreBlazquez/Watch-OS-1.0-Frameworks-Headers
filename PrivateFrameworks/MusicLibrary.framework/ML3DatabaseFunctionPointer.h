//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
{
    CDUnknownFunctionPointerType _functionPointer;
    void *_userData;
}

@property(nonatomic) CDUnknownFunctionPointerType functionPointer; // @synthesize functionPointer=_functionPointer;
- (BOOL)registerWithConnection:(id)arg1;
@property(nonatomic) void *userData; // @synthesize userData=_userData;

@end

