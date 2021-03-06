//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSURL;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding>
{
    BOOL _createSandbox;
    NSURL *_url;
    NSData *_scope;
}

+ (id)wrapperWithURL:(id)arg1;
+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL createSandbox; // @synthesize createSandbox=_createSandbox;
@property(copy, nonatomic) NSData *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

