//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, ILMediaObject, NSMutableArray;

@interface ILMediaBrowserAudioPlayer : NSObject
{
    NSMutableArray *fileList;
    AVPlayer *avPlayer;
    AVPlayerItem *mCurrentAudioPlayerItem;
    ILMediaObject *mCurrentAudioMediaObject;
    BOOL _isPlaying;
}

+ (id)_notificationsToObserve;
+ (id)sharedAudioPlayer;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (id)audioOutputDeviceUniqueID;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void)stop:(id)arg1;
- (void)play:(id)arg1;
- (BOOL)_isItemAuthorized:(id)arg1;
- (id)currentAudioFile;
- (void)removeAllFiles;
- (void)removeAudioFileAtIndex:(long long)arg1;
- (void)addAudioFiles:(id)arg1;
- (void)addAudioFile:(id)arg1;
- (void)setCurrentMediaObject:(id)arg1;
- (void)_observeAtEndNotifications:(id)arg1 add:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

