//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class NSDate, NSMutableDictionary;

@interface NSFileAttributes : NSDictionary
{
    NSMutableDictionary *dict;
    struct stat statInfo;
    struct {
        char extensionHidden;
        NSDate *creationDate;
        struct _fields {
            unsigned int extensionHidden:1;
            unsigned int creationDate:1;
            unsigned int reserved:30;
        } validFields;
    } catInfo;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
}

+ (id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id *)arg4;
+ (id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
+ (id)attributesWithStat:(struct stat *)arg1;
+ (id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id *)arg4;
- (unsigned long long)fileSize;
- (id)fileModificationDate;
- (id)fileType;
- (id)keyEnumerator;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (unsigned int)fileSystemFileNumber;
- (int)fileSystemNumber;
- (unsigned int)fileGroupOwnerAccountNumber;
- (id)fileGroupOwnerAccountName;
- (unsigned int)fileOwnerAccountNumber;
- (id)fileOwnerAccountName;
- (unsigned int)filePosixPermissions;
- (BOOL)isDirectory;

@end

