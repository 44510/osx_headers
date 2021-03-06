//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CPColorListInspector, CPFormatSampleView, NSMutableArray;

@interface CPColorListHandleView : NSView
{
    CPColorListInspector *mInspector;
    CPFormatSampleView *mColorListView;
    NSMutableArray *mPositions;
    NSMutableArray *mColors;
    long long mSelection;
    BOOL mDragging;
    double mVerticalPosition;
    BOOL mInvalidSelection;
}

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)doCommandBySelector:(SEL)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)move:(double)arg1;
- (void)deleteBackward:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)clickInColorListView:(id)arg1;
- (void)pickupColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)dragHandleAtIndex:(long long)arg1 fromEvent:(id)arg2;
- (void)removeHandle:(long long)arg1;
- (void)select:(long long)arg1;
- (void)invalHandle:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)positionFromPoint:(struct CGPoint)arg1;
- (struct CGRect)boundsForHandleAtIndex:(long long)arg1;
- (struct CGPoint)pointForHandleAtIndex:(long long)arg1;
- (void)updateColorListView:(BOOL)arg1;
- (void)addHandleAtPosition:(double)arg1 withColor:(id)arg2;
- (void)removeHandles;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

