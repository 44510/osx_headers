//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

#import "NSSplitViewDelegate.h"

@class AMSSplitDragButton, AudioDeviceOutlineView, NSString, NSView;

@interface AMSDeviceSplitView : NSSplitView <NSSplitViewDelegate>
{
    AMSSplitDragButton *splitDragButton;
    NSView *deviceView;
    AudioDeviceOutlineView *outlineView;
    NSView *infoView;
    BOOL inResizeMode;
    double minPosition;
}

- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (double)dividerThickness;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

