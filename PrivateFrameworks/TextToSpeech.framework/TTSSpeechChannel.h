//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject
{
    TTSSpeechVoice *_voice;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TTSSpeechVoice *voice; // @synthesize voice=_voice;
- (id)initWithVoice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

