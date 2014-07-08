//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
{
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4;
- (id)defaultOption;
- (BOOL)_isStreamingGroup;
- (id)dictionary;
- (id)asset;
- (id)options;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)init;

@end

