//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "PTSHUDControl.h"

@class NSString, _UISettings;

@interface PTSSavedModeTableView : UITableView <PTSHUDControl>
{
    BOOL _enabled;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
}

+ (struct CGRect)defaultFrame;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void).cxx_destruct;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

