//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPUViewControllerFactory.h"
#import "UIViewControllerRestoration.h"

@class NSString;

@interface MPUViewControllerFactory : NSObject <MPUViewControllerFactory, UIViewControllerRestoration>
{
}

+ (id)_allConfigurations;
+ (void)registerViewControllerIdentifiers;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(CDUnknownBlockType)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1;
+ (id)viewControllerForIdentifier:(id)arg1;
+ (id)_existingViewControllerWithRestorationIdentifierPath:(id)arg1;
+ (id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+ (id)configurationForViewControllerIdentifier:(id)arg1;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

