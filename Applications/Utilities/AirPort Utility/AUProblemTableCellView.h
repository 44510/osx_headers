//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "AUInfoViewDelegate.h"
#import "NSMenuDelegate.h"

@class AUSmallSummaryViewController, NSButton, NSImageView, NSString, NSTrackingArea, NSWindow;

@interface AUProblemTableCellView : NSTableCellView <NSMenuDelegate, AUInfoViewDelegate>
{
    BOOL mouseInView;
    NSButton *popdownButton;
    NSImageView *popdownImage;
    AUSmallSummaryViewController *controller;
    BOOL _mouseDown;
    NSWindow *_problemInfoWindow;
    BOOL _problemInfoWindowShowing;
    struct CGRect _defaultRect;
    struct CGRect _defaultTextRect;
    struct CGRect _defaultTitleRect;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) AUSmallSummaryViewController *controller; // @synthesize controller;
@property(retain, nonatomic) NSImageView *popdownImage; // @synthesize popdownImage;
@property(retain, nonatomic) NSButton *popdownButton; // @synthesize popdownButton;
- (void)hideInfoView;
- (void)showInfoView;
- (void)menuDidClose:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)createAndDisplayWindowAtPosition:(struct CGPoint)arg1;
- (struct CGPoint)calculateCorrectHoverOrigin:(struct CGPoint)arg1 forSize:(struct CGSize)arg2;
- (void)problemViewWillBeRemoved:(id)arg1;
- (void)closeInfoWindow;
- (id)tableView;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeFromNib;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)_bubbleRect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)__commonInit;
- (void)updateTrackingAreaForRect:(struct CGRect)arg1;
- (BOOL)canEditProblems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

