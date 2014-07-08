//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSpeechSynthesizer.h>

#import "SCROutputSpeechSynthesizerProtocol.h"

@class NSLock, NSString, SCROutputAction;

__attribute__((visibility("hidden")))
@interface SCROutputSpeechSynthesizer : SCRSpeechSynthesizer <SCROutputSpeechSynthesizerProtocol>
{
    id _owner;
    SCROutputAction *_action;
    NSString *_category;
    float _customizedNormalRate;
    float _customizedMinRate;
    float _customizedMaxRate;
    float _customizedNormalPitch;
    float _customizedMinPitch;
    float _customizedMaxPitch;
    float _customizedNormalVolume;
    float _customizedMaxVolume;
    float _customizedNormalIntonation;
    float _customizedMinIntonation;
    float _customizedMaxIntonation;
    NSLock *_synthesizerLock;
}

- (BOOL)canBePaused;
- (void)adjustOnTheFlyChangesForAction:(id)arg1 adjustRate:(BOOL)arg2 adjustPitch:(BOOL)arg3 adjustVolume:(BOOL)arg4 adjustIntonation:(BOOL)arg5 adjustVoice:(BOOL)arg6 adjustingCurrentSpeech:(BOOL)arg7 lastSpokenWordRange:(struct _NSRange)arg8 speakResults:(BOOL)arg9;
- (BOOL)spliceIntoCurrentOutput:(id)arg1 lastSpokenWordRange:(struct _NSRange)arg2 category:(id)arg3;
- (void)startAction;
- (void)_outputTestingLogging:(id)arg1;
- (float)customizedMaxIntonation;
- (void)setCustomizedMaxIntonation:(float)arg1;
- (float)customizedMinIntonation;
- (void)setCustomizedMinIntonation:(float)arg1;
- (float)customizedNormalIntonation;
- (void)setCustomizedNormalIntonation:(float)arg1;
- (float)customizedMaxVolume;
- (void)setCustomizedMaxVolume:(float)arg1;
- (float)customizedNormalVolume;
- (void)setCustomizedNormalVolume:(float)arg1;
- (float)customizedMaxPitch;
- (void)setCustomizedMaxPitch:(float)arg1;
- (float)customizedMinPitch;
- (void)setCustomizedMinPitch:(float)arg1;
- (float)customizedNormalPitch;
- (void)setCustomizedNormalPitch:(float)arg1;
- (float)customizedMaxRate;
- (void)setCustomizedMaxRate:(float)arg1;
- (float)customizedMinRate;
- (void)setCustomizedMinRate:(float)arg1;
- (float)customizedNormalRate;
- (void)setCustomizedNormalRate:(float)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)unlockSynthesizer;
- (void)lockSynthesizer;
- (void)dealloc;
- (id)initWithVoice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

