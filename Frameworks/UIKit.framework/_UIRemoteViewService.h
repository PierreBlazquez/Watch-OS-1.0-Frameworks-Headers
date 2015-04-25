//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject
{
    NSExtension *_extension;
    NSUUID *_contextToken;
}

@property(copy, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)dealloc;

@end

