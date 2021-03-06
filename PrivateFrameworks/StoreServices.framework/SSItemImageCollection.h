//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying>
{
    NSArray *_itemImages;
}

- (id)_imagesForSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)imagesForSize:(struct CGSize)arg1;
- (id)_newImagesForDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
- (id)initWithItemImages:(id)arg1;
- (id)initWithImageCollection:(id)arg1;
- (id)imagesForKind:(id)arg1;
- (id)bestImageForSize:(struct CGSize)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

