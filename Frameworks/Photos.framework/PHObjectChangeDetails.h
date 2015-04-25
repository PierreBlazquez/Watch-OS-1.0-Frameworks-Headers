//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHObject;

@interface PHObjectChangeDetails : NSObject
{
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
}

- (void)_calculateDiffs;
- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL objectWasDeleted;
- (id)initWithPHObject:(id)arg1 assetContentChanged:(BOOL)arg2;
@property(readonly) BOOL assetContentChanged;
@property(readonly) id objectAfterChanges;
@property(readonly) id objectBeforeChanges;

@end

