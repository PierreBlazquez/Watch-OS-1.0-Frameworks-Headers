//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSTextStorage;

@interface _NSAttributeRun : NSObject <NSCopying>
{
    struct _NSRange _range;
    NSTextStorage *_textStorage;
    NSMutableArray *_attributesArray;
}

- (void)restoreAttributesOfTextStorage:(id)arg1;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)range;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

