//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSContext;

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent
{
    FBSContext *_context;
    BOOL _orderOut;
}

@property(nonatomic) BOOL orderOut; // @synthesize orderOut=_orderOut;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(retain, nonatomic) FBSContext *context; // @synthesize context=_context;
- (id)description;
- (void)dealloc;

@end

