//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet
{
    PKImage *_placeHolderImage;
    struct CGRect _logoRect;
}

+ (int)currentVersion;
+ (id)archiveName;
+ (int)imageSetType;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;
- (void)preheatImages;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

