//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNNode, SCNScene;

@protocol SCNViewJSExport <JSExport>
@property(nonatomic) BOOL showsStatistics;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) id delegate;
@property(nonatomic) double currentTime;
@property(nonatomic) unsigned int antialiasingMode;
@property(nonatomic) BOOL allowsCameraControl;
@property(copy, nonatomic) id backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)snapshot;
@end

