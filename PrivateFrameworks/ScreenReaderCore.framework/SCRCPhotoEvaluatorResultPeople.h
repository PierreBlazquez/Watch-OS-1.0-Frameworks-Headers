//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@class NSArray;

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult
{
    struct CGSize _imageSize;
    NSArray *_people;
}

- (id)humanReadableResult;
- (id)initWithPeople:(id)arg1 inImageOfSize:(struct CGSize)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;

@end

