//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSValue, JSVirtualMachine, JSWrapperMap, NSString;

@interface JSContext : NSObject
{
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext *m_context;
    JSWrapperMap *m_wrapperMap;
    struct Strong<JSC::JSObject> m_exception;
    CDUnknownBlockType exceptionHandler;
}

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg1;
+ (id)currentContext;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentThis;
@property(retain) JSValue *exception;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (void).cxx_destruct;
- (id).cxx_construct;
@property(copy) NSString *name;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)evaluateScript:(id)arg1;
@property(readonly) JSValue *globalObject;
- (id)wrapperForJSObject:(struct OpaqueJSValue *)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData *)arg1;
- (void)beginCallbackWithData:(struct CallbackData *)arg1 calleeValue:(struct OpaqueJSValue *)arg2 thisValue:(struct OpaqueJSValue *)arg3 argumentCount:(unsigned long)arg4 arguments:(const struct OpaqueJSValue **)arg5;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue *)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (void)notifyException:(struct OpaqueJSValue *)arg1;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg1;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setRemoteInspectionEnabled:(BOOL)arg1;
- (BOOL)_remoteInspectionEnabled;
@property(readonly) JSVirtualMachine *virtualMachine;
@property(readonly, retain) JSWrapperMap *wrapperMap;
- (id)valueFromNotifyException:(struct OpaqueJSValue *)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
@property(copy) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler;
- (id)initWithVirtualMachine:(id)arg1;

@end

