//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSTextLayoutOrientationProvider.h"

@class NSArray, NSDictionary, NSLayoutManager;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    id _textView;
    struct CGSize _size;
    float _lineFragmentPadding;
    unsigned int _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int oldAPI:1;
        unsigned int _reserved:8;
    } _tcFlags;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    float _cacheBoundsMinY;
    float _cacheBoundsMaxY;
    float _minimumWidth;
    int _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
}

+ (void)initialize;
- (void)setMinimumLineFragmentWidth:(float)arg1;
- (void)replaceLayoutManager:(id)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (float)minimumLineFragmentWidth;
- (void)_resizeAccordingToTextView:(id)arg1;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned int)arg2 writingDirection:(int)arg3 remainingRect:(struct CGRect *)arg4;
@property(readonly) BOOL isSimpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (struct CGSize)containerSize;
- (id)attributesForExtraLineFragment;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumLines;
@property(nonatomic) float lineFragmentPadding;
@property(copy, nonatomic) NSArray *exclusionPaths;
- (void)setContainerSize:(struct CGSize)arg1;
@property(nonatomic) BOOL heightTracksTextView;
@property(nonatomic) BOOL widthTracksTextView;
- (id)textView;
@property(nonatomic) int lineBreakMode;
@property(nonatomic) NSLayoutManager *layoutManager;
@property(nonatomic) int layoutOrientation;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (struct CGPoint)textContainerOrigin;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
@property(nonatomic) struct CGSize size;
- (void)_commonInit;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
