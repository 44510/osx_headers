//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVAudioExtractor : NSObject
{
    unsigned long long _numberOfChannels;
}

@property(readonly, nonatomic) unsigned long long numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)init;
- (id)initWithNumberOfChannels:(unsigned long long)arg1;

@end

