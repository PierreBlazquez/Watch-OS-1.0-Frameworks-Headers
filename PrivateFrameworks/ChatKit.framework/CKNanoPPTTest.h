//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIApplication;

@interface CKNanoPPTTest : NSObject
{
    UIApplication *_app;
    NSString *_testName;
    NSDictionary *_testOptions;
}

@property(copy, nonatomic) NSDictionary *testOptions; // @synthesize testOptions=_testOptions;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (void)didFinishLaunchingQuickboard;
- (void)didStartLaunchingQuickboard;
- (void)didFinishLaunchingLongLook;
- (void)didStartLaunchingLongLook;
- (void)didFinishLaunchingQuickLook;
- (void)didStartLaunchingQuickLook;
- (void)didReceiveMessage;
- (id)initWithUIApplication:(id)arg1;
- (void)didFinishTest;
@property(retain, nonatomic) UIApplication *app; // @synthesize app=_app;
- (void)startQuickboardTest;
- (void)startLongLookTest;
- (void)startQuickLookTest;
- (BOOL)runTest:(id)arg1 options:(id)arg2;

@end

