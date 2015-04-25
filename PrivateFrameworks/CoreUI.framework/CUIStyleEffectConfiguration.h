//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    int _state;
    int _presentationState;
    int _value;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
}

@property(nonatomic) BOOL useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property(nonatomic) BOOL foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property(nonatomic) int presentationState; // @synthesize presentationState=_presentationState;
- (BOOL)shouldIgnoreForegroundColor;
@property(nonatomic) int value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)description;
- (id)init;

@end
