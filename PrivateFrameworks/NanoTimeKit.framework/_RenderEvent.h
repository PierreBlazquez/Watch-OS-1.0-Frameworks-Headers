//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface _RenderEvent : NSObject
{
    NSDate *_timestamp;
    int _eventType;
    int _eventFaceStyle;
    int _selectedFaceStyle;
}

@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) int selectedFaceStyle; // @synthesize selectedFaceStyle=_selectedFaceStyle;
@property(nonatomic) int eventFaceStyle; // @synthesize eventFaceStyle=_eventFaceStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

@end

