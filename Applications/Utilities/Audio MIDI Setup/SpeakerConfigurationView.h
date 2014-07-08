//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImage, NSMutableArray;

@interface SpeakerConfigurationView : NSView
{
    int mSpeakerConfigurationType;
    NSImage *mUserImage;
    struct CGPoint mUserImageLocation;
    NSMutableArray *mSpeakerSelectors;
    NSColor *mBorderColor;
}

+ (void)initialize;
- (id).cxx_construct;
- (void)setTestFeatureEnabled:(BOOL)arg1;
- (BOOL)channelsInViewMatchLayout:(struct AudioChannelLayout *)arg1;
- (void)setChannelMap:(unsigned int *)arg1 forChannelCount:(unsigned int)arg2;
- (BOOL)getChannelMap:(unsigned int *)arg1 forChannelCount:(unsigned int *)arg2;
- (void)setLayout:(struct AudioChannelLayout *)arg1;
- (void)setLayout:(struct AudioChannelLayout *)arg1 preferredStereoChannels:(unsigned int *)arg2;
- (BOOL)getLayout:(struct AudioChannelLayout *)arg1;
- (void)setAvailableChannels:(id)arg1;
- (float)setupViewForOutputFormat:(int)arg1;
- (int)getConfigurationType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (id)privGetSpeakerSelectorWithChannelLabel:(unsigned int)arg1;

@end
