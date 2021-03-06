//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode
{
    BOOL _paddedWithZeros;
    unsigned int _labels;
    unsigned int _start;
    unsigned int _multiple;
    unsigned int _repeat;
    int _font;
    float _fontSize;
    float _color;
    struct LabelPosition *_positions;
}

+ (void)overrideLabelPositions:(id)arg1 with:(struct LabelPosition *)arg2 center:(struct CGPoint)arg3;
+ (void)overrideLabelPositions:(id)arg1 with:(struct LabelPosition *)arg2;
@property(nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property(nonatomic) unsigned int multiple; // @synthesize multiple=_multiple;
@property(nonatomic) unsigned int labels; // @synthesize labels=_labels;
@property(nonatomic) struct LabelPosition *positions; // @synthesize positions=_positions;
@property(nonatomic) BOOL paddedWithZeros; // @synthesize paddedWithZeros=_paddedWithZeros;
- (void)colorize:(id)arg1 c1:(float)arg2 c2:(float)arg3;
- (void)createSubNodes;
- (void)overrideLabelPositionsIfNeeded;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned int start; // @synthesize start=_start;
@property(nonatomic) float color; // @synthesize color=_color;
@property(nonatomic) int font; // @synthesize font=_font;
- (id)init;

// Remaining properties
@property(nonatomic) float alpha;

@end

