//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface MGDraggableView : NSView
{
    unsigned long long _flags;
    double _constraintMargins[4];
}

- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMargin:(double)arg1 forEdge:(unsigned long long)arg2;
- (double)marginForEdge:(unsigned long long)arg1;
@property(nonatomic, getter=isConstrainedToSuperview) BOOL constrainedToSuperview; // @dynamic constrainedToSuperview;
@property(nonatomic, getter=isDraggable) BOOL draggable; // @dynamic draggable;
- (id)initWithFrame:(struct CGRect)arg1;

@end
