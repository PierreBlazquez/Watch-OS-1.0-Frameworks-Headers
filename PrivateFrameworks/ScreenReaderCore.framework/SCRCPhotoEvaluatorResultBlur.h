//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult
{
    float _blurLevel;
}

- (id)humanReadableResult;
@property(readonly, nonatomic) float blurLevel; // @synthesize blurLevel=_blurLevel;
- (id)initWithBlurLevel:(float)arg1;

@end

