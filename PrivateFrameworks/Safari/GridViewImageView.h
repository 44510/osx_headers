//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface GridViewImageView : NSView
{
    CALayer *_imageLayer;
    CALayer *_selectionOverlayLayer;
    BOOL _usesCustomContentsRect;
    BOOL _selected;
    BOOL _roundsImage;
    NSImage *_image;
    NSColor *_backgroundColor;
}

@property(nonatomic) BOOL roundsImage; // @synthesize roundsImage=_roundsImage;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL usesCustomContentsRect; // @synthesize usesCustomContentsRect=_usesCustomContentsRect;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_performBlockDisablingLayerActionsIfNeeded:(CDUnknownBlockType)arg1;
- (void)_updateCustomContentsRectIfNeeded;
- (void)layout;
- (struct CGRect)_contentsRectForSnapshot:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_setUpSelectionOverlayLayer;
- (void)_setUpImageLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

