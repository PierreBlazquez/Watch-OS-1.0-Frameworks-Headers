//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIElementProtocol.h"

@class NSString;

@interface AXUIElement : NSObject <UIElementProtocol>
{
    struct __AXUIElement *_axElement;
    int _cachedRefCount;
    struct __CFDictionary *_cachedAttributes;
    BOOL _isValid;
}

+ (id)uiApplicationAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 startWithElement:(id)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (struct __AXUIElement *)systemWideAXUIElement;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 cache:(struct __CFDictionary *)arg2;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 hitTestOrientation:(int)arg2;
+ (void)applyElementAttributeCacheScheme:(int)arg1;
+ (id)uiSystemWideApplication;
+ (void)initialize;
- (int)pid;
@property(nonatomic) struct __CFDictionary *cachedAttributes; // @synthesize cachedAttributes=_cachedAttributes;
- (id)_outputCache;
- (void *)modifyStaticCacheValue:(void *)arg1;
- (void)setAXElement:(struct __AXUIElement *)arg1;
- (BOOL)isMockElement;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned int)arg1 unit:(unsigned int)arg2 outputRange:(struct _NSRange *)arg3;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(int)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(int)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(int)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(int)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(int)arg1 withLong:(long)arg2;
- (void)setAXAttribute:(int)arg1 withString:(id)arg2;
- (void)setAXAttribute:(int)arg1 withBOOL:(BOOL)arg2;
- (id)previousElementsWithCount:(unsigned int)arg1;
- (id)nextElementsWithCount:(unsigned int)arg1;
- (void)disableCache;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)canPerformAXAction:(int)arg1;
- (id)uiElementsWithAttribute:(int)arg1;
- (id)objectWithAXAttribute:(int)arg1;
- (struct CGPoint)pointWithAXAttribute:(int)arg1;
- (struct CGPath *)pathWithAXAttribute:(int)arg1;
- (struct CGRect)rectWithAXAttribute:(int)arg1;
- (BOOL)boolWithAXAttribute:(int)arg1;
- (id)stringWithAXAttribute:(int)arg1;
- (id)arrayWithAXAttribute:(int)arg1;
- (BOOL)isValidForApplication:(id)arg1;
- (int)_lineStartPosition;
- (struct _NSRange)_lineRangeForPosition:(unsigned int)arg1;
- (int)_lineEndPosition;
- (id)_valueForRange:(struct _NSRange)arg1;
- (id)_attributedValueForRange:(struct _NSRange)arg1;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned int)arg1 unit:(unsigned int)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)_selectedTextRange;
- (id)numberWithAXAttribute:(int)arg1;
- (id)_objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(int)arg2;
- (struct _NSRange)rangeWithAXAttribute:(int)arg1;
- (void)updateCache:(int)arg1;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
- (void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
- (id)_elementsWithParameter:(int)arg1 andCount:(unsigned int)arg2;
- (id)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2;
- (void *)_cachedValueForAttribute:(int)arg1;
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (void)_createCache:(BOOL)arg1;
- (void)enableCache:(BOOL)arg1;
@property(readonly, nonatomic) struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (id)initWithAXElement:(struct __AXUIElement *)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1 cache:(struct __CFDictionary *)arg2;
- (id)objectWithAXAttribute:(int)arg1 parameter:(void *)arg2;
- (void)_invalidate;
- (BOOL)isValid;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

