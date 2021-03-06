//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CKTranscriptManagementView : UIView
{
    BOOL _suppressMapMovement;
    UIView *_mapView;
    UIView *_attachmentsCollectionView;
    UIView *_nameField;
    float _navigationBarTopInset;
    float _scrollYOffset;
}

@property(nonatomic) float scrollYOffset; // @synthesize scrollYOffset=_scrollYOffset;
@property(nonatomic) float navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) BOOL suppressMapMovement; // @synthesize suppressMapMovement=_suppressMapMovement;
@property(retain, nonatomic) UIView *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) UIView *attachmentsCollectionView; // @synthesize attachmentsCollectionView=_attachmentsCollectionView;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

