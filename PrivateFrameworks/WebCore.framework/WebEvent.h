//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WebEvent : NSObject
{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    BOOL _popupVariant;
    unsigned int _keyboardFlags;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
    BOOL _wasHandled;
}

@property(readonly, nonatomic, getter=isTabKey) BOOL tabKey;
@property(readonly, nonatomic) unsigned int keyboardFlags;
@property(readonly, nonatomic, getter=isPopupVariant) BOOL popupVariant;
- (id)_modiferFlagsDescription;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 isPopupVariant:(BOOL)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (id)_eventDescription;
- (id)_touchPhasesDescription;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_characterSetDescription;
- (id)_touchPhaseDescription:(int)arg1;
@property(readonly, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;
@property(readonly, nonatomic) unsigned int touchCount;
@property(readonly, nonatomic) BOOL isGesture;
@property(readonly, nonatomic) float gestureRotation;
@property(readonly, nonatomic) float gestureScale;
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property(nonatomic) BOOL wasHandled; // @synthesize wasHandled=_wasHandled;
@property(readonly, nonatomic) float deltaY;
@property(readonly, nonatomic) float deltaX;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, nonatomic) int characterSet;
- (id)_typeDescription;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(BOOL)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
@property(readonly, retain, nonatomic) NSString *characters;
- (id).cxx_construct;
@property(readonly, retain, nonatomic) NSArray *touchPhases;
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property(readonly, retain, nonatomic) NSArray *touchLocations;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 withFlags:(unsigned int)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
@property(readonly, nonatomic) unsigned int modifierFlags;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (void)dealloc;

@end

