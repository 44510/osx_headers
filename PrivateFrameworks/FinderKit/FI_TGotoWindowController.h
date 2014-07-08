//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TScriptableWindowController.h>

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class FI_TBrowserContainerController, FI_TEditTextField, NSProgressIndicator, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface FI_TGotoWindowController : FI_TScriptableWindowController <NSTextFieldDelegate, NSWindowDelegate>
{
    FI_TEditTextField *_pathFld;
    NSProgressIndicator *_progress;
    NSString *_errorMsgText;
    _Bool _isGoingToFolder;
    _Bool _isAutoCompleting;
    FI_TBrowserContainerController *_parentContainerController;
    NSWindow *_parentWindow;
    _Bool _selectionChangedDuringAutoCompletion;
    struct TFENode _relativeNode;
    struct TFENode _candidateNode;
    struct TFENode _backupResolvedNode;
    struct TString _previousDecomposedPath;
    CDUnknownBlockType _completionHandler;
}

+ (id)keyPathsForValuesAffectingShowProgress;
+ (id)keyPathsForValuesAffectingEnableGoBtn;
+ (id)gotoWindowController;
+ (void)showGotoForContainerController:(id)arg1 window:(id)arg2 initialFilename:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showGotoForContainerController:(id)arg1;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(nonatomic) FI_TBrowserContainerController *parentContainerController; // @synthesize parentContainerController=_parentContainerController;
@property(nonatomic) _Bool isAutoCompleting; // @synthesize isAutoCompleting=_isAutoCompleting;
@property(nonatomic) _Bool isGoingToFolder; // @synthesize isGoingToFolder=_isGoingToFolder;
@property(retain, nonatomic) NSString *errorMsgText; // @synthesize errorMsgText=_errorMsgText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)threadedGoWithPath:(id)arg1;
- (void)gotoNodeItem:(const struct TFENode *)arg1 lastPathComponent:(id)arg2;
- (void)go:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)autoCompletionDone:(id)arg1;
- (void)autoCompletionWithArgs:(id)arg1;
- (void)autoCompleteNowAndValidate:(_Bool)arg1;
- (void)autoCompleteNow;
- (void)autoCompleteSoon;
- (id)autocompletePath:(id)arg1 validate:(_Bool)arg2;
- (struct TFENode)candidateNodeForPath:(id)arg1 allowCompletion:(_Bool)arg2 path:(id *)arg3;
- (_Bool)shouldAutoCompletePath:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)unsetup;
- (void)setupWithFilename:(id)arg1;
@property(readonly, nonatomic) _Bool showProgress; // @dynamic showProgress;
- (void)updateEnableGoBtn;
@property(readonly, nonatomic) _Bool enableGoBtn; // @dynamic enableGoBtn;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

