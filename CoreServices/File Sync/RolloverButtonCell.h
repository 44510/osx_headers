//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSImage;

@interface RolloverButtonCell : NSButtonCell
{
    NSImage *_pressedImage;
    NSImage *_idleImage;
}

- (void)setPressedImage:(id)arg1;
- (void)setImagePressed:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;

@end

