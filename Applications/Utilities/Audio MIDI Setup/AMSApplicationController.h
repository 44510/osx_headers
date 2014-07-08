//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"
#import "NSWindowDelegate.h"

@class AudioPanelController, MIDIPanelController, NSString, NetworkBrowserController;

@interface AMSApplicationController : NSObject <NSWindowDelegate, NSFileManagerDelegate>
{
    MIDIPanelController *midiController;
    AudioPanelController *audioController;
    NetworkBrowserController *networkController;
    BOOL isAVBSupported;
}

@property(readonly, nonatomic) NetworkBrowserController *networkController; // @synthesize networkController;
@property(readonly, nonatomic) AudioPanelController *audioController; // @synthesize audioController;
@property(readonly, nonatomic) MIDIPanelController *midiController; // @synthesize midiController;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)isNetworkWindowOpen;
- (BOOL)isMIDIWindowOpen;
- (BOOL)isAudioWindowOpen;
- (void)getHelp:(id)arg1;
- (void)showAbout:(id)arg1;
- (void)toggleNetworkBroswer:(id)arg1;
- (void)toggleMIDIWindow:(id)arg1;
- (void)toggleAudioWindow:(id)arg1;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

