//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, asn1Token;

@interface asn1ReceiptToken : NSObject
{
    unsigned int mType;
    unsigned int mTypeVersion;
    asn1Token *mContentToken;
}

+ (id)readFromBuffer:(const char *)arg1;
@property(readonly) unsigned int typeVersion; // @synthesize typeVersion=mTypeVersion;
- (id)_initWithType:(unsigned int)arg1 typeVersion:(unsigned int)arg2 contentToken:(id)arg3;
@property(readonly) asn1Token *contentToken; // @synthesize contentToken=mContentToken;
@property(readonly) NSString *stringValue; // @dynamic stringValue;
@property(readonly) unsigned int type; // @synthesize type=mType;
@property(readonly) unsigned long long integerValue; // @dynamic integerValue;
- (id)description;
- (void)dealloc;

@end

