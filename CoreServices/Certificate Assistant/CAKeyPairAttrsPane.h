//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFAssistantPane.h"

@class NSObjectController, NSPopUpButton, NSTextField, NSWindow;

@interface CAKeyPairAttrsPane : AFAssistantPane
{
    NSObjectController *_panelObjectController;
    NSTextField *_caKeyPairAttributesMessage;
    NSWindow *_learnMoreWindow;
    NSPopUpButton *_keySzPopupButton;
    NSPopUpButton *_keyAlgPopupButton;
    BOOL _selectedECC;
}

- (void)_learnMoreSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_learnMoreOKClicked:(id)arg1;
- (void)_learnMoreClicked:(id)arg1;
- (void)_keyTypePopupClicked:(id)arg1;
- (id)nextPane;
- (void)didExitPane:(unsigned int)arg1;
- (id)title;
- (void)didEnterPane:(unsigned int)arg1;
- (void)willEnterPane:(unsigned int)arg1;

@end

