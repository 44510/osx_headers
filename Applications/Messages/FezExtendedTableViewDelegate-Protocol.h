//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FezExtendedTableView, NSEvent, NSTableView, Tooltip;

@protocol FezExtendedTableViewDelegate

@optional
- (BOOL)tableViewShouldDrawBackgroundOverhang:(FezExtendedTableView *)arg1;
- (void)tableViewDidFinishScrolling:(FezExtendedTableView *)arg1;
- (BOOL)tableView:(NSTableView *)arg1 prepareTooltip:(Tooltip *)arg2 row:(int)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldDrawWhenMovingFrom:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)tableViewTrackingChanged:(NSTableView *)arg1;
- (void)tableView:(NSTableView *)arg1 dragStarted:(NSEvent *)arg2 originPoint:(struct CGPoint)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldStartDraggingForGroupRow:(int)arg2;
- (void)tableView:(NSTableView *)arg1 refreshTracking:(BOOL)arg2;
- (void)tableView:(NSTableView *)arg1 mouseMoved:(NSEvent *)arg2;
- (void)tableView:(NSTableView *)arg1 mouseEntered:(NSEvent *)arg2;
- (void)tableView:(NSTableView *)arg1 mouseExited:(NSEvent *)arg2;
- (void)tableView:(NSTableView *)arg1 mouseUp:(NSEvent *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 mouseDown:(NSEvent *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 acceptsFirstMouse:(NSEvent *)arg2;
- (void)tableView:(NSTableView *)arg1 spaceBarPressedAtRow:(int)arg2;
- (void)tableView:(NSTableView *)arg1 returnKeyPressedAtRow:(int)arg2;
@end

