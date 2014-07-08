//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Backup/BU_TMPushButton.h>

__attribute__((visibility("hidden")))
@interface BU_TMSkinnedPushButton : BU_TMPushButton
{
    _Bool fHasCustomImages;
    int fNormalID;
    struct TFCGImage fNormalImage;
    int fDisabledID;
    struct TFCGImage fDisabledImage;
    int fPressedID;
    struct TFCGImage fPressedImage;
    int fSelectedID;
    struct TFCGImage fSelectedImage;
    int fMouseOverID;
    struct TFCGImage fMouseOverImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)flushImages;
- (_Bool)loadedImages;
- (void)setOnePartButtonImagesWithNormalID:(int)arg1 pressedID:(int)arg2 selectedID:(int)arg3 disabledID:(int)arg4 mouseOverID:(int)arg5;
- (void)setTextColorsNormal:(short)arg1 disabled:(short)arg2 pressed:(short)arg3;
- (void)dealloc;
- (id)init;

@end

