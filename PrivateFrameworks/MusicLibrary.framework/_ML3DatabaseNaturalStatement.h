//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface _ML3DatabaseNaturalStatement : NSObject
{
    NSString *_sql;
    NSMutableArray *_parameters;
}

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
- (void)setParameter:(id)arg1 forPosition:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)init;

@end

