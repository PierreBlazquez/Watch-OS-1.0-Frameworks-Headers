//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface NSFilesystemItemRemoveOperation : NSOperation
{
    id _delegate;
    NSString *_removePath;
    NSError *_error;
    void *_state;
    BOOL _filterUnderbars;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;
- (id)error;
- (void)main;
- (id)initWithPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_setFilterUnderbars:(BOOL)arg1;
- (BOOL)_filtersUnderbars;
- (void)_setError:(id)arg1;

@end

