//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPrintPreviewView, ABPrintingAccessoryController, ABPrintingMode, NSArray, NSBox, NSMenu, NSPopUpButton, NSProgressIndicator, NSViewController, NSWindow;

@interface ABPrintingController : NSObject
{
    NSWindow *fakeWindow;
    ABPrintPreviewView *previewArea;
    NSBox *styleBox;
    NSPopUpButton *styleChooser;
    NSProgressIndicator *spinner;
    ABPrintingAccessoryController *_settingsAccessoryViewController;
    NSViewController *_previewAccessoryViewController;
    ABPrintingMode *_currentMode;
    NSMenu *_sharedPaperMenu;
    id <ABPrintingDelegate> _printingDelegate;
    NSArray *_topLevelNibObjects;
}

@property(copy) NSArray *topLevelNibObjects; // @synthesize topLevelNibObjects=_topLevelNibObjects;
@property(readonly) id <ABPrintingDelegate> printingDelegate; // @synthesize printingDelegate=_printingDelegate;
- (id)itemInMenu:(id)arg1 matchingDescription:(id)arg2;
- (id)paperListMenuForMode:(id)arg1;
- (void)chosePaperSize:(id)arg1;
- (void)populateMenu:(id)arg1 withPaperList:(id)arg2;
- (id)menuItemForPaperDictionary:(id)arg1;
- (void)spin:(BOOL)arg1;
- (void)runPageLayout:(id)arg1;
- (void)sendMessageTracerLogWithPDF:(BOOL)arg1;
- (BOOL)isPrintInfoCreatingPDF:(id)arg1;
- (void)printPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)print;
- (id)previewView;
- (void)chooseStyleMode:(id)arg1;
- (id)window;
- (id)photoStore;
- (id)people;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

