//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface _MFSearchProcessResultsOperation : NSOperation
{
    id <_MFSearchResultsConsumer> _consumer;
    unsigned int _type;
    CDUnknownBlockType _completionBlock;
}

+ (id)operationWithResultsOfType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2 consumer:(id)arg3;
- (void)main;
- (void)dealloc;

@end

