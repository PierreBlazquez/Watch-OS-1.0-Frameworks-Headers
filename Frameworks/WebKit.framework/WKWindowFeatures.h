//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface WKWindowFeatures : NSObject
{
    struct RetainPtr<NSNumber> _menuBarVisibility;
    struct RetainPtr<NSNumber> _statusBarVisibility;
    struct RetainPtr<NSNumber> _toolbarsVisibility;
    struct RetainPtr<NSNumber> _allowsResizing;
    struct RetainPtr<NSNumber> _x;
    struct RetainPtr<NSNumber> _y;
    struct RetainPtr<NSNumber> _width;
    struct RetainPtr<NSNumber> _height;
}

@property(readonly, nonatomic) NSNumber *allowsResizing;
@property(readonly, nonatomic) NSNumber *toolbarsVisibility;
@property(readonly, nonatomic) NSNumber *statusBarVisibility;
@property(readonly, nonatomic) NSNumber *menuBarVisibility;
- (id)_initWithWindowFeatures:(const struct WindowFeatures *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *y;
@property(readonly, nonatomic) NSNumber *x;
- (id).cxx_construct;
@property(readonly, nonatomic) NSNumber *height;
@property(readonly, nonatomic) NSNumber *width;

@end

