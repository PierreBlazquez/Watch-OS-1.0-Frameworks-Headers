//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface UILexiconEntry : NSObject <NSCopying>
{
    NSString *_userInput;
    NSString *_documentText;
}

+ (id)_entryWithTILexiconEntry:(id)arg1;
@property(readonly, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(readonly, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

