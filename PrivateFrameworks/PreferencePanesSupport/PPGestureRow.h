//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSImageView, NSPopUpButton, NSTextField, NSView, PPGesture, PPGestureMovieView;

@interface PPGestureRow : NSObject
{
    NSView *mGroupRowView;
    NSTextField *mGroupTitle;
    NSView *mGestureRowView;
    NSButton *mGestureOptions;
    NSButton *mEnableGestureButton;
    NSPopUpButton *mGestureChoices;
    NSTextField *mGestureName;
    NSTextField *mGestureLabel;
    NSImageView *mWarningImageView;
    BOOL mWarningVisible;
    PPGesture *mGesture;
    BOOL mUIEnabled;
    PPGestureMovieView *mMovieView;
}

+ (id)gestureRowWithGesture:(id)arg1;
@property(readonly, getter=isWarningVisible) BOOL warningVisible; // @synthesize warningVisible=mWarningVisible;
@property(retain) PPGestureMovieView *movieView; // @synthesize movieView=mMovieView;
@property(readonly) NSPopUpButton *choicesPopUp; // @synthesize choicesPopUp=mGestureChoices;
@property(readonly) NSTextField *groupTitle; // @synthesize groupTitle=mGroupTitle;
@property(retain) PPGesture *gesture; // @synthesize gesture=mGesture;
- (void)setUIEnabled:(BOOL)arg1;
- (void)showWarning:(BOOL)arg1;
@property(readonly) NSButton *enableGestureButton; // @dynamic enableGestureButton;
@property(readonly) NSButton *optionsButton; // @dynamic optionsButton;
@property(readonly) NSTextField *title; // @dynamic title;
- (id)view;
- (void)setup;
- (void)refreshUI;
- (void)dealloc;
- (id)init;
- (void)_hideWarning:(id)arg1;
- (void)_refreshUIForGestureNotification:(id)arg1;
- (void)_popUpButtonWillPopUpNotification:(id)arg1;

@end

