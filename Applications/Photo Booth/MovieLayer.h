//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVPlayer, PBAVPlayerView;

@interface MovieLayer : CALayer
{
    AVPlayer *_player;
    PBAVPlayerView *_playerView;
}

- (void).cxx_destruct;
- (void)toggleTrim;
- (BOOL)canTrim;
- (id)movieURL;
- (void)setMovieURL:(id)arg1;
- (void)togglePlayback;
- (void)willBeRemovedFromSuperlayer;
- (void)willBeInsertedInSuperlayer;
- (void)setupViewBackedLayersForSuperview:(id)arg1;
- (id)init;

@end

