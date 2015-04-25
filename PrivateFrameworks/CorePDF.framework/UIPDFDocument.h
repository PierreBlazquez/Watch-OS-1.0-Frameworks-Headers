//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject
{
    struct CGPDFDocument *_cgDocument;
    unsigned int _numberOfPages;
    float _cachedWidth;
    NSString *_documentID;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    unsigned int _imageCacheCount;
    unsigned int _imageCacheLookAhead;
    int _lock;
    int _imageCacheLock;
    UIPDFPageImageCache *_thumbnailCache;
    int _thumbnailLock;
    id <NSObject><UIPDFDocumentDelegate> _delegate;
}

+ (id)documentNamed:(id)arg1;
- (float)maxWidth;
- (float)maxHeight;
@property(retain) UIPDFPageImageCache *thumbnailCache; // @dynamic thumbnailCache;
@property(retain) UIPDFPageImageCache *pageImageCache; // @dynamic pageImageCache;
- (float)sumHeight;
- (float)sumWidth;
- (BOOL)copyDocumentTo:(id)arg1;
- (BOOL)allowsCopying;
@property(readonly) NSString *documentID; // @dynamic documentID;
- (void)purgePagesBefore:(unsigned int)arg1;
- (id)copyPageAtIndex:(unsigned int)arg1;
- (struct CGPDFDocument *)copyCGPDFDocument;
- (void)setImageCacheCount:(unsigned int)arg1 lookAhead:(unsigned int)arg2;
@property(readonly) struct CGPDFDocument *CGDocument; // @synthesize CGDocument=_cgDocument;
- (id)initWithCGPDFDocument:(struct CGPDFDocument *)arg1;
- (id)pageAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int numberOfPages; // @dynamic numberOfPages;
- (id)initWithURL:(id)arg1;
@property(nonatomic) id <NSObject><UIPDFDocumentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

