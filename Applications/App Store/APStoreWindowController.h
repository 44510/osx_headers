//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRStoreWindowController.h"

#import "NSWindowDelegate.h"

@class FRStoreViewController, NSString, NSView;

@interface APStoreWindowController : FRStoreWindowController <NSWindowDelegate>
{
    BOOL _hasWindowFramePrefs;
    NSView *_layerBackedContentView;
    FRStoreViewController *_storeViewController;
}

- (id)storeViewController;
- (void).cxx_destruct;
- (void)_setWindowFrameToDefault;
- (void)reload:(id)arg1;
- (void)viewSource:(id)arg1;
- (void)showWebKitInspector:(id)arg1;
- (void)emulateGoForward:(id)arg1;
- (void)emulateGoBackward:(id)arg1;
- (void)startSearch:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
