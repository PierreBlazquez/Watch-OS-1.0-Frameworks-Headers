//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UIView, _UIBackdropView;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    _UIBackdropView *_backdrop;
    UIView *_plusDView;
    BOOL _wantsPlusDLayer;
    int _graphicsQuality;
    NSString *_backdropGroupName;
}

+ (id)defaultBackgroundColorForGraphicsQuality:(int)arg1;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (int)initialGraphicsQuality;
@property(nonatomic) int graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
- (void)setFloating:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL wantsPlusDLayer; // @synthesize wantsPlusDLayer=_wantsPlusDLayer;

@end

