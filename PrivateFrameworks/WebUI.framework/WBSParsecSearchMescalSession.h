//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSParsecSearchMescalSession : NSObject
{
    BOOL _complete;
    struct FPSAPContextOpaque_ *_session;
    unsigned int _versionNumber;
}

- (id)signatureStringForData:(id)arg1;
- (id)exchangedDataForData:(id)arg1;
- (id)initWithVersionNumber:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end

