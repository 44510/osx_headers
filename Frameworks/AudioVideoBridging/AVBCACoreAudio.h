//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVBCAObject.h>

@interface AVBCACoreAudio : AVBCAObject
{
}

+ (id)sharedCoreAudioObject;
- (unsigned int)pluginWithBundleID:(id)arg1;
- (unsigned int)transportManagerWithBundleID:(id)arg1;
- (unsigned int)defaultOutputAudioDevice;
- (unsigned int)defaultInputAudioDevice;
- (unsigned int)deviceWithUID:(id)arg1;
- (unsigned int)boxWithUID:(id)arg1;

@end

