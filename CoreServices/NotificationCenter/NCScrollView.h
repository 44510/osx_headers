//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class _NCClipView;

@interface NCScrollView : NSScrollView
{
}

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;
- (void)tile;
@property(readonly) _NCClipView *clipView;
- (void)dealloc;
- (void)awakeFromNib;
- (long long)scrollerStyle;

@end

