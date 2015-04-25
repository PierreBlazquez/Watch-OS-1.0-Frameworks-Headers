//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)name;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)lockForWritingBeforeDate:(id)arg1;
- (BOOL)tryLockForWriting;
- (void)lockForWriting;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (BOOL)tryLockForReading;
- (void)lockForReading;

@end

