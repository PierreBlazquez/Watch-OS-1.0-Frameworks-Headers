//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface NSFilesystemItemMoveOperation : NSOperation
{
    id _delegate;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSError *_error;
}

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (id)error;
- (void)main;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)_setError:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;

@end

