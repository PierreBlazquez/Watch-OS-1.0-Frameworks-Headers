//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TTSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _audioSessionIsSetUp;
    CDStruct_4e36ff54 _desiredState;
    CDStruct_4e36ff54 _cachedState;
    BOOL _bluetoothAllowed;
    struct __CFBag *_activityBag;
    int _serverGeneration;
}

+ (id)sharedInstance;
- (void)_safeSetBluetoothInputAllowed:(BOOL)arg1;
- (void)_safeSetActive:(BOOL)arg1 withActivity:(long)arg2;
- (void)_safeSetCategoryForActivity:(long)arg1;
- (int)_safeServerGeneration;
- (void)_safeSetupAudioSession;
- (long)_nextActivityForActive:(BOOL)arg1 activity:(long)arg2 serverActivity:(long)arg3;
- (void)_setCategoryForActivity:(long)arg1;
- (void)_setupAudioSession;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

