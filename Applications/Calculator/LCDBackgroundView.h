//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface LCDBackgroundView : NSView
{
    NSImage *_topLeftImage;
    NSImage *_topMidImage;
    NSImage *_topRightImage;
    NSImage *_leftMidImage;
    NSImage *_centerImage;
    NSImage *_rightMidImage;
    NSImage *_bottomLeftImage;
    NSImage *_bottomMidImage;
    NSImage *_bottomRightImage;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

