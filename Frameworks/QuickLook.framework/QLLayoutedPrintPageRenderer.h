//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper
{
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (int)numberOfPages;
- (void)dealloc;
- (id)_currentNodes;
- (id)pdfDataForPageAtIndex:(int)arg1 printingDone:(char *)arg2;
- (id)_htmlPageXPath;

@end

