//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (CPLAdditions)
- (BOOL)isCPLError;
- (BOOL)isCPLErrorWithCode:(int)arg1;
- (id)cplShortDomainDescription;
- (id)_cplSafeUserInfoForXPCDidChange:(char *)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplUnderlyingPOSIXError;
- (BOOL)isCPLOperationCancelledError;
@end

