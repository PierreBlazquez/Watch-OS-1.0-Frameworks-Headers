//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICActionItem.h"

@interface CKNanoBlockActionItem : PUICActionItem
{
    CDUnknownBlockType _completionBlock;
}

+ (id)actionItemWithImage:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)actionItemWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runCompletion:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;

@end
