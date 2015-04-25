//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSVSystemDialogTextField : NSObject
{
    BOOL _secure;
    NSString *_title;
    int _keyboardType;
}

+ (id)textFieldWithTitle:(id)arg1;
+ (id)textFieldWithTitle:(id)arg1 secure:(BOOL)arg2;
- (void).cxx_destruct;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
- (id)initWithTitle:(id)arg1;
@property(nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

