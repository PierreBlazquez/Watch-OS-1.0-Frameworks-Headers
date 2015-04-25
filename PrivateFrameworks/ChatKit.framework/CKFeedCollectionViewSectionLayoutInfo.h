//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject
{
    BOOL _hidden;
    NSArray *_fixedLayoutAttributes;
    NSArray *_tileLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    int _sectionType;
    int _previousVisibleSection;
    int _nextVisibleSection;
    int _firstJoinedSection;
    int _lastJoinedSection;
    id _groupID;
    int _numberOfTilesOmitted;
    struct CGPoint _origin;
    struct CGSize _size;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct UIEdgeInsets _margins;
}

@property(nonatomic) int numberOfTilesOmitted; // @synthesize numberOfTilesOmitted=_numberOfTilesOmitted;
@property(nonatomic) int nextVisibleSection; // @synthesize nextVisibleSection=_nextVisibleSection;
@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(retain, nonatomic) NSArray *floatingLayoutAttributes; // @synthesize floatingLayoutAttributes=_floatingLayoutAttributes;
@property(retain, nonatomic) NSArray *tileLayoutAttributes; // @synthesize tileLayoutAttributes=_tileLayoutAttributes;
@property(retain, nonatomic) NSArray *fixedLayoutAttributes; // @synthesize fixedLayoutAttributes=_fixedLayoutAttributes;
@property(nonatomic) int previousVisibleSection; // @synthesize previousVisibleSection=_previousVisibleSection;
@property(retain, nonatomic) id groupID; // @synthesize groupID=_groupID;
@property(nonatomic) int lastJoinedSection; // @synthesize lastJoinedSection=_lastJoinedSection;
@property(nonatomic) int firstJoinedSection; // @synthesize firstJoinedSection=_firstJoinedSection;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) struct CGRect frame;
- (id)init;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;

@end

