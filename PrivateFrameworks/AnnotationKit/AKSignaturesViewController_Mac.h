//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AKSignatureCaptureViewControllerDelegate.h"
#import "AKUserInterfaceItem.h"

@class AKController, AKSignatureCaptureViewController_Mac, NSButton, NSLayoutConstraint, NSString, NSTableView, NSTextField, NSView;

@interface AKSignaturesViewController_Mac : NSViewController <AKSignatureCaptureViewControllerDelegate, AKUserInterfaceItem>
{
    AKSignatureCaptureViewController_Mac *_captureViewController;
    double _signaturesListWidth;
    CDUnknownBlockType _completionHandler;
    id _presentingContainer;
    NSTableView *_tableView;
    NSView *_containerView;
    NSButton *_createSignatureButton;
    NSLayoutConstraint *_tableTrailingSpaceConstraint;
    NSTextField *_warningTextField;
    AKController *_controller;
}

+ (id)imageForSignature:(id)arg1 withFillColor:(id)arg2;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain) NSTextField *warningTextField; // @synthesize warningTextField=_warningTextField;
@property(retain) NSLayoutConstraint *tableTrailingSpaceConstraint; // @synthesize tableTrailingSpaceConstraint=_tableTrailingSpaceConstraint;
@property(retain) NSButton *createSignatureButton; // @synthesize createSignatureButton=_createSignatureButton;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak id presentingContainer; // @synthesize presentingContainer=_presentingContainer;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)captureControllerDidFinish:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)deleteSignature:(id)arg1;
- (id)_captureView;
- (void)_animatePopoverToNewSize;
- (void)_animate:(BOOL)arg1 toContentView:(id)arg2 startingSize:(struct CGSize)arg3 destinationSize:(struct CGSize)arg4;
- (void)switchToViewMode:(long long)arg1 animated:(BOOL)arg2;
- (void)showAddSignatureView:(id)arg1;
- (long long)tag;
- (id)signatures;
- (struct CGSize)idealContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

