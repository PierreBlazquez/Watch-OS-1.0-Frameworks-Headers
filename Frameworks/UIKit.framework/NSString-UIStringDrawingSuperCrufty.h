//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (UIStringDrawingSuperCrufty)
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(float)arg2 withFont:(id)arg3 minFontSize:(float)arg4 actualFontSize:(float *)arg5 lineBreakMode:(int)arg6 baselineAdjustment:(int)arg7 includeEmoji:(BOOL)arg8;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(float)arg2 withFont:(id)arg3 fontSize:(float)arg4 lineBreakMode:(int)arg5 baselineAdjustment:(int)arg6 includeEmoji:(BOOL)arg7;
- (struct CGSize)_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(struct CGRect *)arg7;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(int)arg3 lineSpacing:(int)arg4;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4;
@end

