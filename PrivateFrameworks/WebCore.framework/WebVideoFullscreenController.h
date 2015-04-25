//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<WebCore::HTMLMediaElement> _mediaElement;
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> _interface;
    struct RefPtr<WebCore::WebVideoFullscreenModelMediaElement> _model;
    struct WebVideoFullscreenControllerChangeObserver _changeObserver;
    struct RetainPtr<CALayer> _videoFullscreenLayer;
}

- (void)didCleanupFullscreen;
- (void)didExitFullscreen;
- (void)didEnterFullscreen;
- (void)didSetupFullscreen;
- (void)requestHideAndExitFullscreen;
- (void)exitFullscreen;
- (void)enterFullscreen:(id)arg1;
- (struct HTMLMediaElement *)mediaElement;
- (void)setMediaElement:(struct HTMLMediaElement *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

@end

