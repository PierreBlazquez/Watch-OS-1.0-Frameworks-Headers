//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _PUICAlertConfirmationViewController;

@interface PUICAlertConfirmationController : NSObject
{
    _PUICAlertConfirmationViewController *_alertConfirmationViewController;
    NSString *_title;
    NSString *_detail;
    id <PUICAlertConfirmationControllerDelegate> _delegate;
}

@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PUICAlertConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)show;

@end

