//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary, NSOperationQueue, NSStringDrawingContext;

@interface MPUTextDrawingCache : NSObject
{
    NSStringDrawingContext *_stringDrawingContext;
    unsigned int _cacheCostScale;
    unsigned int _cacheSize;
    NSMutableDictionary *_cachesForOtherAllowedSizes;
    NSCache *_drawingsForCurrentAllowedSize;
    struct CGSize _referenceSizeForCostComputation;
    NSHashTable *_invalidationObservers;
    unsigned int _invalidationNotificationCoalescingRequestsCount;
    BOOL _wasInvalidatedWithoutNotifyingObservers;
    NSOperationQueue *_preHeatingOperationQueue;
    BOOL _opaque;
    NSDictionary *_textAttributes;
    unsigned int _maximumNumberOfLines;
    float _displayScale;
    CDUnknownBlockType _textEmphasizer;
    NSDictionary *_emphasizedTextAttributes;
    NSDictionary *_regularTextAttributes;
    struct CGSize _allowedSize;
}

+ (id)_drawingForText:(id)arg1 fromCache:(id)arg2 usingStringDrawingContext:(id)arg3 allowedSize:(struct CGSize)arg4 textAttributes:(id)arg5 opaque:(BOOL)arg6 displayScale:(float)arg7 textEmphasizer:(CDUnknownBlockType)arg8 regularTextAttributes:(id)arg9 emphasizedTextAttributes:(id)arg10 cacheSize:(unsigned int)arg11 cacheCostScale:(unsigned int)arg12 referenceSizeForCostComputation:(struct CGSize)arg13;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
@property(copy, nonatomic) NSDictionary *emphasizedTextAttributes; // @synthesize emphasizedTextAttributes=_emphasizedTextAttributes;
@property(copy, nonatomic) CDUnknownBlockType textEmphasizer; // @synthesize textEmphasizer=_textEmphasizer;
@property(nonatomic) struct CGSize allowedSize; // @synthesize allowedSize=_allowedSize;
- (void)preHeatForStrings:(id)arg1;
- (void)endCoalescingInvalidationNotifications;
- (void)beginCoalescingInvalidationNotifications;
- (void)removeInvalidationObserver:(id)arg1;
- (void)addInvalidationObserver:(id)arg1;
- (id)drawingForText:(id)arg1;
@property(nonatomic) float displayScale; // @synthesize displayScale=_displayScale;
- (void)_notifyInvalidationObservers;
- (void)_ensureDrawingsForCurrentAllowedSizeCacheIsReady;
- (void)_drawingsForCurrentAllowedSizeWereInvalidated;
- (id)_keyForAllowedSize:(struct CGSize)arg1;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)_updateMaximumNumberOfLines;
- (void)_updateReferenceSizeForCostComputation;
- (struct CGSize)_validateAllowedSize:(struct CGSize)arg1;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
- (void).cxx_destruct;
- (void)_invalidate;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
- (id)init;
- (void)dealloc;

@end

