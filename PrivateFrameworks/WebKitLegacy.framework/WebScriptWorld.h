//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject
{
    WebScriptWorldPrivate *_private;
}

+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg1;
+ (id)findOrCreateWorld:(struct DOMWrapperWorld *)arg1;
+ (id)world;
+ (id)standardWorld;
- (void)unregisterWorld;
- (id)initWithWorld:(PassRefPtr_7f281a75)arg1;
- (id)init;
- (void)dealloc;

@end

