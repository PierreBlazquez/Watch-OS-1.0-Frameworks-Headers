//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewRowAction.h"

@class UIColor, UIImage;

@interface PUICTableViewRowAction : UITableViewRowAction
{
    UIImage *_image;
    UIColor *_tintColor;
    CDUnknownBlockType _puicHandler;
}

+ (id)pepperRowActionWithStyle:(int)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)rowActionWithStyle:(int)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType puicHandler; // @synthesize puicHandler=_puicHandler;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

// Remaining properties
@property(readonly, nonatomic) int style;

@end

