//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSSpecifierAction : NSObject
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
}

+ (id)actionWithBoolDetailClass:(Class)arg1;
+ (id)actionWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType getter; // @synthesize getter=_getter;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType setter; // @synthesize setter=_setter;

@end

