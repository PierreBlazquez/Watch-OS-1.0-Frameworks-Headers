//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

@class CPList;

@interface CPListItem : NSObject <CPDisposable>
{
    CPList *list;
    int number;
    struct __CFArray *paragraphs;
}

- (void)finalize;
- (void)addParagraph:(id)arg1;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
@property(retain, nonatomic) CPList *list; // @synthesize list;
- (void)dispose;
@property(nonatomic) int number; // @synthesize number;
- (id)init;
- (void)dealloc;

@end

