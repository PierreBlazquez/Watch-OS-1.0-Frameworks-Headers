//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIKernel : NSObject
{
    void *_priv;
}

+ (id)kernelWithString:(id)arg1;
+ (id)_getDictForSourceString:(id)arg1 dimensionality:(int *)arg2;
+ (id)kernelsWithString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)name;
- (id)description;
- (id)init;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 cpuCallback:(CDUnknownBlockType)arg3 colorManagement:(_Bool)arg4 andArguments:(id)arg5;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 andArguments:(id)arg3;
- (int)_argumentTypeAtIndex:(int)arg1;
- (id)initWithDict:(id)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void *)_internalRepresentation;

@end

