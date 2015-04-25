//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CalClassAdditions)
+ (id)_phoneURLScheme;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned int)arg2;
+ (id)ellipsisString;
- (BOOL)isPhoneNumber;
- (id)stringRemovingMailto;
- (id)stringAddingMailto;
- (BOOL)resemblesEmailAddress;
- (BOOL)hasMailto;
- (id)trimWhiteSpace;
- (BOOL)hasPrefixCaseInsensitive:(id)arg1;
- (id)removeSlashIfNeeded;
- (id)stringByURLQuoting;
- (id)appendSlashIfNeeded;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)CalSafeHFSPathComponentName;
- (BOOL)isPathToICalTruthFile;
- (BOOL)isPathToICalBookmark;
- (BOOL)isPathToBackupFile;
- (BOOL)isPathToICalData;
- (BOOL)isPathToVCalData;
- (BOOL)isPathToAppleScript;
- (BOOL)isEqualAsURL:(id)arg1;
- (id)CalAddressComment;
- (id)CalUncommentedAddress;
- (id)phoneURL;
- (id)radarLink;
- (BOOL)isAddressBookURL;
- (BOOL)isMailURL;
- (id)hostFromEmail;
- (id)userFromEmail;
- (BOOL)isEqualToStringCaseInsensitive:(id)arg1;
- (BOOL)containsCaseAndDiacriticInsensitive:(id)arg1;
- (BOOL)containsCaseInsensitive:(id)arg1;
- (BOOL)hasSuffixCaseInsensitive:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)_phoneNumberDetector;
- (id)stringByURLUnquoting;
- (id)stringByURLQuotingPaths;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)quote;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalComma;
- (id)trimFirstComma;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
@end

