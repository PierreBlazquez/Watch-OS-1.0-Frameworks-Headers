//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBasicServerClient.h"

@class NSString;

@interface FBSystemServiceServerClient : BSBasicServerClient
{
    BOOL _uiApp;
    NSString *_bundleID;
    BOOL _extension;
    NSString *_bundlePath;
}

- (id)initWithConnection:(id)arg1;
@property(readonly, nonatomic) int pid;
@property(nonatomic, getter=isExtension) BOOL extension; // @synthesize extension=_extension;
@property(nonatomic, getter=isUIApp) BOOL UIApp; // @synthesize UIApp=_uiApp;
@property(retain, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (id)description;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;

@end

