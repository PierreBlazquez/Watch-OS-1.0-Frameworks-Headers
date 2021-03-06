//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCompletionListItem.h"

@class NSString, NSURL, WBSParsecImageRepresentation, WBSParsecSearchMapsResult;

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem>
{
    WBSParsecImageRepresentation *_icon;
    WBSParsecSearchMapsResult *_mapsResult;
    NSString *_title;
    NSURL *_url;
}

- (id)iconWithSession:(id)arg1;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
- (id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

