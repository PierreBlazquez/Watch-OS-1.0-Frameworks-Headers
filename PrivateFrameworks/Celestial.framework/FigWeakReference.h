//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FigWeakReference : NSObject
{
    id _referencedObject;
}

+ (id)weakReferenceToObject:(id)arg1;
- (id)retainReferencedObject;
- (void)dealloc;
@property(readonly) id referencedObject;
- (id)initWithReferencedObject:(id)arg1;

@end

