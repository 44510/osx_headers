//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPViewAction.h"

@class GScale, GView, NSView;

@interface CPMoveAction : CPViewAction
{
    GView *mDataView;
    NSView *mView;
    GScale *mScale;
    struct CGRect mBounds;
    struct CGPoint mMouseLoc;
}

+ (id)actionIdentifier;
- (SEL)menuItemAction;
- (id)cursor;
- (void)performWithEvent:(id)arg1 inView:(id)arg2;
- (void)performDrag:(id)arg1 inView:(id)arg2;
- (void)finishMoveBy:(struct CGSize)arg1;
- (void)moveBy:(struct CGSize)arg1;
- (void)moveScaleBy:(struct CGSize)arg1;
- (BOOL)startMove;

@end

