//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBApplicationInfo, IOSSHLApplication;

@interface IOSSHLApplicationManagerAppProxy : NSObject
{
    FBApplicationInfo *_appInfo;
    IOSSHLApplication *_application;
}

+ (void)load;
@property(retain, nonatomic) FBApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void)releaseApplication;
- (void)loadApplication:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;

@end
