//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUDataSourceConfiguration, NSString;

@interface MPUViewControllerConfiguration : NSObject
{
    BOOL _wantsModalPresentation;
    BOOL _wantsNavigationController;
    Class _cellConfigurationClass;
    Class _viewControllerClass;
    NSString *_aggregateStatisticDisplayCountKey;
    MPUDataSourceConfiguration *_dataSourceConfiguration;
    CDUnknownBlockType _configurationBlock;
    Class _navigationControllerClass;
}

+ (id)configurationWithViewControllerClass:(Class)arg1;
+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
@property(retain, nonatomic) Class navigationControllerClass; // @synthesize navigationControllerClass=_navigationControllerClass;
@property(nonatomic) BOOL wantsNavigationController; // @synthesize wantsNavigationController=_wantsNavigationController;
@property(nonatomic) BOOL wantsModalPresentation; // @synthesize wantsModalPresentation=_wantsModalPresentation;
@property(retain, nonatomic) MPUDataSourceConfiguration *dataSourceConfiguration; // @synthesize dataSourceConfiguration=_dataSourceConfiguration;
@property(copy, nonatomic) NSString *aggregateStatisticDisplayCountKey; // @synthesize aggregateStatisticDisplayCountKey=_aggregateStatisticDisplayCountKey;
@property(readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(readonly, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (id)initWithViewControllerClass:(Class)arg1;
- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;

@end

