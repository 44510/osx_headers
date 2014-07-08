//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface VolumeIndicator : NSView
{
    float _floatValue;
    BOOL _isRemote;
    BOOL _isMute;
    float _opacity;
    NSImage *_onImage;
    NSImage *_offImage;
    NSImage *_muteImage;
    float _numSlices;
    BOOL _proStyle;
}

- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_invalidateValue:(float)arg1 to:(float)arg2;
- (float)_splicePointFor:(float)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (void)toggleMute:(id)arg1;
- (BOOL)isMute;
- (void)setMute:(BOOL)arg1;
- (BOOL)isRemote;
- (void)setRemote:(BOOL)arg1;
- (void)setSamplerLevelValue:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)takeFloatValueFrom:(id)arg1;
- (float)floatValue;
- (void)setFloatValue:(float)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)proStyle;
- (void)setProStyle:(BOOL)arg1;
- (void)_recacheImages;
- (void)_updateNumSlices:(float)arg1;
- (id)_loadScaledImage:(id)arg1;

@end

