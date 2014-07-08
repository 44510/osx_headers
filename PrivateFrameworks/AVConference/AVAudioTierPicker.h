//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioTier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAudioTierPicker : NSObject
{
    NSMutableArray *audioTiers;
    BOOL isUsingCellular;
    AVAudioTier *defaultTier;
    AVAudioTier *fallbackTier;
    int mode;
}

+ (BOOL)shouldFilterTierForPayload:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 cellular:(BOOL)arg4 operatingMode:(int)arg5;
@property(readonly) AVAudioTier *fallbackTier; // @synthesize fallbackTier;
@property(readonly) AVAudioTier *defaultTier; // @synthesize defaultTier;
- (id)forcedAudioTier;
- (id)tierForNetworkBitrate:(unsigned int)arg1 duplication:(unsigned int)arg2;
- (id)AudioTier:(unsigned int)arg1;
- (void)dealloc;
- (unsigned long long)LargestCapTier:(unsigned int)arg1;
- (id)initWithOperatingMode:(int)arg1 payloads:(id)arg2 sampleRate:(unsigned int)arg3 packetsPerBundle:(id)arg4 headerSize:(unsigned int)arg5 usingCellular:(BOOL)arg6 defaultMaxCap:(unsigned int)arg7;
- (id)createTierForPayload:(id)arg1 bitrate:(unsigned int)arg2 sampleRate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 headerSize:(unsigned int)arg5;

@end

