//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKSpriteNode.h>

@class NSObject<SKButtonNodeSpriteDelegate>, SKAction;

@interface SKButtonNodeSprite : SKSpriteNode
{
    NSObject<SKButtonNodeSpriteDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;
    CDUnknownBlockType _downBlock;
    CDUnknownBlockType _upBlock;
    CDUnknownBlockType _upInsideBlock;
    int _touches;
}

+ (id)buttonWithFontNamed:(id)arg1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak NSObject<SKButtonNodeSpriteDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) SKAction *upAction; // @synthesize upAction=_upAction;
@property(retain, nonatomic) SKAction *downAction; // @synthesize downAction=_downAction;
- (void)onTouchDownInside:(CDUnknownBlockType)arg1;
- (void)onTouchUp:(CDUnknownBlockType)arg1;
- (void)onTouchUpInside:(CDUnknownBlockType)arg1;
- (void)touchMoved:(unsigned int)arg1 location:(struct CGPoint)arg2;
- (void)touchEnded:(unsigned int)arg1 location:(struct CGPoint)arg2;
- (void)touchBegan:(unsigned int)arg1 location:(struct CGPoint)arg2;

@end

