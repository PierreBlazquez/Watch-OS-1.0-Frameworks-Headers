//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask
{
    int _overwrite;
    NSURL *_destinationURL;
}

+ (id)stringFromOverwriteValue:(int)arg1;
- (id)requestBody;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;

@end

