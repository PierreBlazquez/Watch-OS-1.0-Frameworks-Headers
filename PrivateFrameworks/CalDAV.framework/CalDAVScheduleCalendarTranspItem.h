//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_transparent;
}

- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *transparent; // @synthesize transparent=_transparent;
@property(readonly, nonatomic) BOOL isScheduleTransparent;
- (void)dealloc;

@end

