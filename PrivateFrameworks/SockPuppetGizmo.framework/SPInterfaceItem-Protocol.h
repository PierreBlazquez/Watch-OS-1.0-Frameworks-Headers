//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPInterfaceObject.h"

@protocol SPInterfaceItem <SPInterfaceObject>
- (BOOL)hasIntrinsicHeight;
- (void)setFixedSize:(struct CGSize)arg1;
- (struct CGSize)fixedSize;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setHeight:(float)arg1;
- (float)height;
- (int)verticalInterfaceAlignment;
- (void)setVerticalInterfaceAlignment:(int)arg1;
- (int)interfaceAlignment;
- (void)setInterfaceAlignment:(int)arg1;

@optional
- (void)prepareInterfaceItemForIB;
- (void)contentSizeCategoryDidChange;
@end

