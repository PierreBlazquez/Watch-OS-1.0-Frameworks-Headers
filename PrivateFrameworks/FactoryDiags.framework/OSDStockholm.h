//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFCardEmulationDelegate.h"

@class NFCardEmulation, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface OSDStockholm : NSObject <NFCardEmulationDelegate>
{
    unsigned char __emulationSource;
    _Bool __cardEmulationSuspended;
    _Bool __detectedField;
    id <OSDStockholmDelegate> _delegate;
    NSString *__devicePath;
    NSObject<OS_dispatch_queue> *__queue;
    NSObject<OS_dispatch_semaphore> *__sema;
    NFCardEmulation *__cardEmulation;
    NSString *__selectedCard;
}

@property(copy, nonatomic) NSString *_selectedCard; // @synthesize _selectedCard=__selectedCard;
@property(nonatomic) _Bool _detectedField; // @synthesize _detectedField=__detectedField;
@property(copy, nonatomic) NSString *_devicePath; // @synthesize _devicePath=__devicePath;
- (_Bool)stopCardEmulationWithTimeout:(double)arg1;
- (_Bool)startCardEmulationWithTimeout:(double)arg1;
- (_Bool)wakeOnStockholmSeconds:(int)arg1;
- (id)serverRegistrationInfo:(double)arg1;
- (_Bool)activateOnlyCardWithAID:(id)arg1 withTimeout:(double)arg2;
- (void)cardEmulation:(id)arg1 didChangeRestrictedMode:(BOOL)arg2;
- (void)cardEmulation:(id)arg1 didEndTransaction:(id)arg2;
- (void)cardEmulation:(id)arg1 didStartTransaction:(id)arg2;
- (void)cardEmulation:(id)arg1 didSelectCard:(id)arg2;
- (void)cardEmulation:(id)arg1 didDetectField:(BOOL)arg2;
- (void)cardEmulation:(id)arg1 isSuspended:(BOOL)arg2;
@property(nonatomic) _Bool _cardEmulationSuspended; // @synthesize _cardEmulationSuspended=__cardEmulationSuspended;
@property(retain, nonatomic) NFCardEmulation *_cardEmulation; // @synthesize _cardEmulation=__cardEmulation;
@property(nonatomic) unsigned char _emulationSource; // @synthesize _emulationSource=__emulationSource;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *_sema; // @synthesize _sema=__sema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
- (_Bool)setCardEmulationSource:(unsigned char)arg1;
- (_Bool)setDevicePath:(id)arg1;
- (id)serialNumber;
- (void).cxx_destruct;
@property(nonatomic) __weak id <OSDStockholmDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

