//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition
{
    int _offset;
    int _affinity;
}

+ (id)positionWithOffset:(int)arg1 affinity:(int)arg2;
+ (id)positionWithOffset:(int)arg1;
@property int affinity; // @synthesize affinity=_affinity;
@property int offset; // @synthesize offset=_offset;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

