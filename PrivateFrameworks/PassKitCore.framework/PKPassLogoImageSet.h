//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet
{
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    PKImage *_stripImage;
    PKImage *_footerImage;
    PKImage *_bankLogoImage;
    PKImage *_networkLogoImage;
    PKImage *_cobrandLogoImage;
    PKImage *_cardBackgroundImage;
    PKImage *_cardBackgroundCombinedImage;
}

+ (int)imageSetType;
+ (BOOL)shouldCache;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKImage *cobrandLogoImage; // @synthesize cobrandLogoImage=_cobrandLogoImage;
@property(retain, nonatomic) PKImage *networkLogoImage; // @synthesize networkLogoImage=_networkLogoImage;
@property(retain, nonatomic) PKImage *bankLogoImage; // @synthesize bankLogoImage=_bankLogoImage;
@property(retain, nonatomic) PKImage *cardBackgroundImage; // @synthesize cardBackgroundImage=_cardBackgroundImage;
@property(retain, nonatomic) PKImage *cardBackgroundCombinedImage; // @synthesize cardBackgroundCombinedImage=_cardBackgroundCombinedImage;
@property(retain, nonatomic) PKImage *footerImage; // @synthesize footerImage=_footerImage;
@property(retain, nonatomic) PKImage *stripImage; // @synthesize stripImage=_stripImage;
@property(retain, nonatomic) PKImage *logoImage; // @synthesize logoImage=_logoImage;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;
- (void)preheatImages;
@property(retain, nonatomic) PKImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

