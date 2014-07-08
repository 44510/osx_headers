//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSButton, NSProgressIndicator, NSTextField;

@interface NSProgressPanel : NSPanel
{
    NSButton *cancelButton;
    NSTextField *captionTextField;
    NSProgressIndicator *progressIndicator;
    id cancellationDelegate;
    SEL cancellationSelector;
    void *cancellationContextInfo;
    BOOL wasCancelled;
}

+ (id)progressPanelWithNibName:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (id)progressIndicator;
- (id)captionTextField;
- (void)setCancellationDelegate:(id)arg1 wasCancelledSelector:(SEL)arg2 contextInfo:(void *)arg3;

@end

