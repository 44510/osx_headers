//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TLAccessQueue;

@interface TLAlertController : NSObject
{
    NSMutableDictionary *_alertsBySoundIDs;
    TLAccessQueue *_alertsBySoundIDsAccessQueue;
}

+ (id)sharedAlertController;
@property(retain, setter=_setAlertsBySoundIDsAccessQueue:) TLAccessQueue *_alertsBySoundIDsAccessQueue; // @synthesize _alertsBySoundIDsAccessQueue;
@property(retain, nonatomic, setter=_setAlertsBySoundIDs:) NSMutableDictionary *_alertsBySoundIDs; // @synthesize _alertsBySoundIDs;
- (void)_didReachTimeoutForSystemSound:(id)arg1;
- (void)_systemSoundDidFinishPlaying:(unsigned int)arg1;
- (void)_removeSoundID:(unsigned int)arg1 shouldStopSound:(BOOL)arg2 fireCompletionHandler:(BOOL)arg3;
- (BOOL)_stopAllAlerts;
- (unsigned int)_soundIDForAlert:(id)arg1;
- (void)_stopAlert:(id)arg1;
- (BOOL)_playAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 targetQueue:(struct dispatch_queue_s *)arg3;
- (BOOL)stopAllAlerts;
- (void)dealloc;
- (id)init;

@end

