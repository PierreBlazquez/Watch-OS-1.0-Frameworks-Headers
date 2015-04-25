//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView
{
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    unsigned int _pendingDirection;
    BOOL _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

- (id)currentAttributedText;
- (void)setAttributedTextUnanimated:(id)arg1;
- (void)sizeToFitAttributedText:(id)arg1;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned int)arg2 perCharacter:(BOOL)arg3;
- (void)_processPendingStringIfNeeded;
- (void)_layoutForPushStartWithDirection:(unsigned int)arg1;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (void)_layoutViewsAtIndex:(unsigned int)arg1 forPushEndWithDirection:(unsigned int)arg2;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

