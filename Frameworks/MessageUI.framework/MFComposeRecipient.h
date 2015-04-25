//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDraggableItem.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MFComposeRecipientOriginContext, NSArray, NSString;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem, NSCoding>
{
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    MFComposeRecipientOriginContext *_originContext;
}

+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)children;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (int)recordID;
- (int)property;
- (id)shortName;
- (id)address;
- (void)setOriginContext:(id)arg1;
- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)objectForDragType:(id)arg1;
- (id)supportedDragTypes;
- (id)unlocalizedLabel;
- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (void *)record;
- (id)commentedAddress;
- (id)uncommentedAddress;
- (id)compositeName;
@property(readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
- (BOOL)isGroup;
- (id)displayString;
- (void)setIdentifier:(int)arg1;
- (id)label;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)identifier;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) MFComposeRecipientOriginContext *originContext; // @synthesize originContext=_originContext;
- (id)preferredSendingAddress;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
@property(readonly, nonatomic) BOOL showsAccessoryButton;
- (id)normalizedAddress;
- (id)_unformattedAddress;
- (id)placeholderName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

