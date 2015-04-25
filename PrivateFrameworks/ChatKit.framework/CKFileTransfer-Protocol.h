//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@protocol CKFileTransfer <NSObject>
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property(readonly, nonatomic) unsigned long long totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSURL *fileURL;
@property(readonly, copy, nonatomic) NSString *guid;
@property(retain, nonatomic) IMMessage *IMMessage;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2;
- (id)initWithTransferGUID:(NSString *)arg1 imMessage:(IMMessage *)arg2;
@end

