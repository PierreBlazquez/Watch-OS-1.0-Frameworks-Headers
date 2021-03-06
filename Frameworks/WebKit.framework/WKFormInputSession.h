//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_WKFormInputSession.h"

@class NSObject<NSSecureCoding>, NSString, WKContentView;

@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    WKContentView *_contentView;
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;
}

- (id)initWithContentView:(id)arg1 userObject:(id)arg2;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
- (void).cxx_destruct;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

