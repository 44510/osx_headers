//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSMutableDictionary;

@interface FPIMHighlightingButton : NSButton
{
    int mTrackingRectTag;
    NSMutableDictionary *mImagesForStates;
}

- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setImageStateForKey:(id)arg1;
- (void)setImage:(id)arg1 forState:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)arg1;

@end

