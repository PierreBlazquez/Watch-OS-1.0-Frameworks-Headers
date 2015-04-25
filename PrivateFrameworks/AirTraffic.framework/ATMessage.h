//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSStream;

@interface ATMessage : NSObject <NSSecureCoding>
{
    unsigned int _messageID;
    unsigned int _sessionID;
    NSDictionary *_parameters;
    NSStream *_dataStream;
    double _timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) unsigned int messageID; // @synthesize messageID=_messageID;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSStream *dataStream; // @synthesize dataStream=_dataStream;
- (id)additionalDescription;
- (void).cxx_destruct;
@property(nonatomic) unsigned int options;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterForKey:(id)arg1;

@end

