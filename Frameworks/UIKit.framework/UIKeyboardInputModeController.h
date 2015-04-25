//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIKeyboardInputMode;

@interface UIKeyboardInputModeController : NSObject
{
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    BOOL _skipExtensionInputModes;
    BOOL _cacheNeedsRefresh;
    NSArray *keyboardInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    UIKeyboardInputMode *_lastUsedInputMode;
    NSString *_inputModeContextIdentifier;
    id <UIKeyboardInputModeControllerDelegate> _delegate;
    UIKeyboardInputMode *_nextInputModeToUse;
    UIKeyboardInputMode *_currentUsedInputMode;
}

+ (id)sharedInputModeController;
@property(readonly) NSArray *enabledInputModeLanguages;
@property(readonly) NSArray *inputModesWithoutHardwareSupport;
- (id)enabledInputModeIdentifiers:(BOOL)arg1;
@property(readonly) NSArray *supportedInputModeIdentifiers;
@property(readonly, nonatomic) NSArray *allowedExtensions; // @synthesize allowedExtensions=_allowedExtensions;
@property(retain) NSArray *defaultKeyboardInputModes; // @synthesize defaultKeyboardInputModes;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)performWithForcedExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)switchToCurrentSystemInputMode;
- (BOOL)deviceStateIsLocked;
- (id)suggestedInputModesForPreferredLanguages;
- (id)suggestedInputModesForCurrentLocale;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1;
- (BOOL)currentLocaleRequiresExtendedSetup;
@property(readonly, nonatomic) BOOL containsDictationSupportedInputMode;
- (id)inputModeWithIdentifier:(id)arg1;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
@property(retain, nonatomic) UIKeyboardInputMode *currentUsedInputMode; // @synthesize currentUsedInputMode=_currentUsedInputMode;
@property(retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode; // @synthesize lastUsedInputMode=_lastUsedInputMode;
@property(retain, nonatomic) UIKeyboardInputMode *nextInputModeToUse; // @synthesize nextInputModeToUse=_nextInputModeToUse;
- (id)_MCFilteredExtensionIdentifiers;
- (BOOL)verifyKeyboardExtensionsWithApp;
@property(retain) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(retain) NSArray *defaultNormalizedInputModes; // @synthesize defaultNormalizedInputModes;
@property(copy, nonatomic) NSArray *defaultRawInputModes; // @synthesize defaultRawInputModes;
- (id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2;
@property(retain) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(retain) NSArray *normalizedInputModes; // @synthesize normalizedInputModes;
- (void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2;
- (id)_systemInputModePassingTest:(CDUnknownBlockType)arg1;
- (void)updateCurrentInputMode:(id)arg1;
@property(retain) NSArray *keyboardInputModeIdentifiers; // @synthesize keyboardInputModeIdentifiers;
@property(retain) NSArray *keyboardInputModes; // @synthesize keyboardInputModes;
@property(readonly) NSArray *enabledInputModeIdentifiers;
- (void)didEnterBackground:(id)arg1;
- (id)extensionInputModes;
- (id)nextInputModeToUseForTraits:(id)arg1;
@property(retain) UIKeyboardInputMode *currentInputMode;
@property(copy, nonatomic) NSString *inputModeContextIdentifier; // @synthesize inputModeContextIdentifier=_inputModeContextIdentifier;
- (BOOL)identifierIsValidSystemInputMode:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)performWithoutExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)_clearAllExtensionIfNeeded;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (void)updateCurrentAndNextInputModes;
@property(nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned int)arg2 withTraits:(id)arg3;
@property(readonly) NSArray *activeInputModeIdentifiers;
- (id)preferredLanguages;
- (id)identifiersFromInputModes:(id)arg1;
- (id)activeInputModes;
@property(readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property(readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property(readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
@property(nonatomic) id <UIKeyboardInputModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

