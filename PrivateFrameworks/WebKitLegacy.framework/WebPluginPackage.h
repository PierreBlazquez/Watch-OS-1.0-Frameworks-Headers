//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle *nsBundle;
}

- (Class)viewFactory;
- (id)initWithPath:(id)arg1;
- (BOOL)load;
- (id)bundle;
- (void)dealloc;

@end

