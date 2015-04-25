//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMRange.h"

#import "UIWebSelectionBlock.h"

@class NSString;

@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (BOOL)containsRange:(id)arg1;
- (void)unionWithRange:(id)arg1;
- (BOOL)rendersAsBlock;
- (id)largerParent;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)isSameBlock:(id)arg1;
- (id)rangeOfContents;
- (id)asDomRange;
- (id)enclosingDocument;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)parentBlock;
- (BOOL)selectable;
- (id)asDomNode;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (id)webFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

