//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface UIWebClipIcon : NSObject
{
    BOOL _precomposed;
    BOOL _siteWide;
    struct CGSize _bestSize;
    NSURL *_url;
}

@property(nonatomic) struct CGSize bestSize; // @synthesize bestSize=_bestSize;
@property(nonatomic, getter=isSiteWide) BOOL siteWide; // @synthesize siteWide=_siteWide;
@property(nonatomic, getter=isPrecomposed) BOOL precomposed; // @synthesize precomposed=_precomposed;
- (int)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end

