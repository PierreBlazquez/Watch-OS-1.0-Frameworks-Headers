//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/UIFontDescriptor.h>

@interface UICTFontDescriptor : UIFontDescriptor
{
}

+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(float)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
- (void)finalize;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)fontAttributes;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (unsigned long)_cfTypeID;

@end

