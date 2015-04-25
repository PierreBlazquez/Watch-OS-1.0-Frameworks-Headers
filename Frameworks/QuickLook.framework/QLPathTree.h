//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, QLPackageChecker;

@interface QLPathTree : NSObject
{
    NSString *_path;
    NSMutableDictionary *_directoryChildren;
    NSMutableArray *_packageChildren;
    QLPackageChecker *_packageChecker;
}

- (BOOL)isFolder;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (id)description;
- (void)dealloc;
- (void)insertInItemsSource:(id)arg1 archiveController:(id)arg2;
- (void)addPath:(id)arg1;
- (id)initWithPackageChecker:(id)arg1;
- (void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 atIndex:(unsigned int *)arg3 uiIndex:(unsigned int *)arg4 level:(int)arg5;
- (void)addPathComponents:(id)arg1;
- (void)addPathInsidePackage:(id)arg1;
- (id)initWithPath:(id)arg1 isPackage:(BOOL)arg2 packageChecker:(id)arg3;
- (BOOL)isPackage;

@end
