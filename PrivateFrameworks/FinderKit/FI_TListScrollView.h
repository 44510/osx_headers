//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface FI_TListScrollView : NSScrollView
{
    NSView *_bounceCoverHeaderView;
    struct TNSRef<NSView *> _topBarMirrorView;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSView *topBarMirrorView;
- (void)_handleBoundsChangeForSubview:(id)arg1;
- (void)awakeFromNib;

@end

