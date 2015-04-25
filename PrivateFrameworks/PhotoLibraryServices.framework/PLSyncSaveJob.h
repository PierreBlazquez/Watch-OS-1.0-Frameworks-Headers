//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject
{
    BOOL isVideo;
    BOOL isSyncComplete;
    BOOL _cleanupSyncState;
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    NSString *originalFileName;
    NSDate *_cleanupBeforeDate;
    CDUnknownBlockType _finishedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(copy, nonatomic) NSDate *cleanupBeforeDate; // @synthesize cleanupBeforeDate=_cleanupBeforeDate;
@property(nonatomic) BOOL cleanupSyncState; // @synthesize cleanupSyncState=_cleanupSyncState;
@property(nonatomic) BOOL isSyncComplete; // @synthesize isSyncComplete;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;
@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (void)processFacesWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;
@property(copy, nonatomic) CLLocation *location; // @synthesize location;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
- (id)description;
- (void)dealloc;

@end

