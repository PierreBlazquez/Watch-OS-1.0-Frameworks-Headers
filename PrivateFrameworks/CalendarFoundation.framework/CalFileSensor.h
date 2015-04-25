//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CalFileSensor : NSObject
{
    NSString *_path;
    int _type;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _eventBlock;
    BOOL _started;
}

+ (unsigned long)_maskForFileSensorType:(int)arg1;
+ (id)copyFileSensorTypeAsString:(int)arg1;
@property(nonatomic) BOOL started; // @synthesize started=_started;
- (id)initWithPath:(id)arg1 andType:(int)arg2;
- (void)stop;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)start;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;

@end

