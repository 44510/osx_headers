//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class CALayer;

@interface NCListImageView : NSImageView
{
    CALayer *_bezel;
    CALayer *_topBezel;
    CALayer *_bottmBezel;
}

- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end
