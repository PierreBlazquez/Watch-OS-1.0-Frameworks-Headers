//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface NTKChronoPalette : NSObject
{
    unsigned int _paletteColor;
    BOOL _showsShadows;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_tickColor;
    UIColor *_labelColor;
    UIColor *_chronoHandColor;
    UIColor *_dateComplicationColor;
    UIColor *_glyphColor;
    UIColor *_glyphBackgroundColor;
    float _smallTickValue;
    float _largeTickValue;
}

+ (id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(float)arg3;
+ (id)paletteWithColor:(unsigned int)arg1;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) BOOL showsShadows; // @synthesize showsShadows=_showsShadows;
@property(readonly, nonatomic) float largeTickValue; // @synthesize largeTickValue=_largeTickValue;
@property(readonly, nonatomic) float smallTickValue; // @synthesize smallTickValue=_smallTickValue;
@property(readonly, nonatomic) UIColor *dateComplicationColor; // @synthesize dateComplicationColor=_dateComplicationColor;
@property(readonly, nonatomic) UIColor *chronoHandColor; // @synthesize chronoHandColor=_chronoHandColor;
- (id)_initWithColor:(unsigned int)arg1;
@property(readonly, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(readonly, nonatomic) UIColor *glyphBackgroundColor; // @synthesize glyphBackgroundColor=_glyphBackgroundColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;

@end

