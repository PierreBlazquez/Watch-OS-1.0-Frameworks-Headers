//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCentral, CBScalablePipeManager, NSInputStream, NSOutputStream, NSString;

@interface CBScalablePipe : NSObject
{
    CBScalablePipeManager *_pipeManager;
    CBCentral *_central;
    NSString *_name;
    int _type;
    int _priority;
    int _socket;
    NSInputStream *_input;
    NSOutputStream *_output;
}

@property(readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSInputStream *input; // @synthesize input=_input;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (void)dealloc;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;
- (void)setOrphan;
@property(readonly, nonatomic) NSOutputStream *output; // @synthesize output=_output;

@end

