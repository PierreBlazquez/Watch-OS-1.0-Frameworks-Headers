//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@class NSObject<OS_dispatch_semaphore>, NSString;

@interface _PLClientTransaction : PLClientServerTransaction
{
    int _fileDescriptor;
    id _processAssertion;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;
}

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;
@property(nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore; // @synthesize fdResourceSemaphore=_fdResourceSemaphore;
@property(retain, nonatomic) id processAssertion; // @synthesize processAssertion=_processAssertion;
- (void)completeTransaction;
- (void)abortTransaction;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;
- (id)init;
- (void)dealloc;

@end

