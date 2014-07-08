//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BraillePrefs.h"

#import "NSSoundDelegate.h"
#import "NSWindowDelegate.h"

@class AddRemoveBar, BrailleDisplayBluetoothTabController, BrailleDisplayNoDisplayTabController, BrailleDisplayTabController, InputTableView, NSMutableArray, NSMutableSet, NSNumber, NSSound, NSString, NSTabView, NSTabViewItem, NSTableView, NSTimer, NSWindow, SCROBrailleDisplayInputManager;

__attribute__((visibility("hidden")))
@interface BrailleDisplaysPrefs : BraillePrefs <NSWindowDelegate, NSSoundDelegate>
{
    AddRemoveBar *_addRemoveDisplaySegmentedControl;
    NSTabViewItem *_tabViewItem;
    NSTableView *_displayTableView;
    NSTabView *_displayInfoTabView;
    NSWindow *_brailleInputSheet;
    InputTableView *_inputTableView;
    AddRemoveBar *_addRemoveCommandSegmentedControl;
    BrailleDisplayTabController *_usbDisplayTabController;
    BrailleDisplayBluetoothTabController *_bluetoothDisplayTabController;
    BrailleDisplayNoDisplayTabController *_noDisplayTabController;
    SCROBrailleDisplayInputManager *_inputManager;
    long long _prefixCommandsCount;
    double _playMemorizeSoundUntil;
    NSNumber *_selectedBrailleDisplayToken;
    NSMutableArray *_displayTableData;
    NSString *_loadingBluetoothDeviceAddressString;
    NSTimer *_bluetoothDeviceLoadFailedTimer;
    NSSound *_clockTickSound;
    NSSound *_chordMemorizedSound;
    NSSound *_chordFailedSound;
    NSMutableSet *_playingSounds;
    BOOL _audioDucked;
    BOOL _isKeyboardHelpEnabled;
    int _inputAccessMode;
    struct OpaqueIOBluetoothNotificationRef *_bluetoothHCINotification;
    BOOL _isBluetoothHCIAvailable;
    BOOL _isBluetoothOn;
    BOOL _hasBluetoothDisplay;
}

- (void)closeBrailleInputSheet:(id)arg1;
- (void)showBrailleInputSheet:(id)arg1;
- (void)_brailleInputSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_delayedDisableDucking;
- (void)_duckAudio:(BOOL)arg1;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (void)_playSound:(id)arg1;
- (id)_chordFailedSound;
- (id)_chordMemorizedSound;
- (id)_clockTickSound;
- (void)setPrimaryDisplayClicked:(id)arg1;
- (id)_displayTableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_displayTableViewSelectionDidChange:(id)arg1;
- (void)_setBluetoothLoadingStateHidden:(BOOL)arg1;
- (void)_bluetoothDeviceRemovalSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeBluetoothBrailleDisplay:(id)arg1;
- (void)_bluetoothDeviceLoadFailedTimerFireMethod:(id)arg1;
- (void)_bluetoothDeviceSelectorSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)addBluetoothBrailleDisplayButtonPressed:(id)arg1;
- (void)addBluetoothBrailleDisplay:(id)arg1;
- (void)pressAddRemoveDisplaySegmentedControl:(id)arg1;
- (void)pressAddRemoveCommandSegmentedControl:(id)arg1;
- (BOOL)tableViewCaptureDeleteKeyPress:(id)arg1;
- (void)bluetoothPreferencesAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showBluetoothPreferencesSheet:(id)arg1;
- (BOOL)_isBluetoothOn;
- (void)_setIsBluetoothOn:(BOOL)arg1;
- (BOOL)_isBluetoothHCIAvailable;
- (void)_setIsBluetoothHCIAvailable:(BOOL)arg1;
- (void)_handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)_handleFailedToLoadBluetoothDeviceNotification:(id)arg1;
- (void)_continueMemorizingKey:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)_handleBrailleKeyMemorizeNotification:(id)arg1;
- (void)_handleBrailleKeyMemorize:(id)arg1;
- (void)_handleBrailleKeyWillMemorizeNotification:(id)arg1;
- (void)_handleBrailleKeyWillMemorize:(id)arg1;
- (void)_playMemorizeSound;
- (void)_handleBrailleKeypressNotification:(id)arg1;
- (void)_handleBrailleKeypress:(id)arg1;
- (void)_unprepareForMemorization;
- (void)memorizeKey:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)updateUI;
- (void)_updateButtonStatusBasedOnCurrentSelection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)helpAnchor;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)newEntry:(id)arg1;
- (void)resetSpecificPreferences:(id)arg1;
- (void)resetAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)validateMenuItem:(id)arg1;
- (void)removeCommand:(id)arg1;
- (void)removeAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addCommand:(id)arg1;
- (void)inputTableViewDidResignFirstResponder:(id)arg1;
- (void)inputTableViewDidBecomeFirstResponder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1 forTableView:(id)arg2;
- (void)moveInputDown:(id)arg1;
- (void)moveInputUp:(id)arg1;
- (BOOL)_inputTableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)_inputTableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)_inputTableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)handleReassignFactoryCommandForMenuItem:(id)arg1;
- (void)handleUnassignCommandForMenuItem:(id)arg1;
- (void)handleAssignCommandForMenuItem:(id)arg1;
- (void)handleAssignCustomCommand:(id)arg1;
- (void)_inputTableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)_inputTableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)_inputTableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_inputTableViewSelectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

