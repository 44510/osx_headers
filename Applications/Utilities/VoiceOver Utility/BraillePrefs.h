//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrefsBase.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSString, SCROBrailleClient;

@interface BraillePrefs : PrefsBase <NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _tablesLoaded;
    BOOL _skipConfig;
    SCROBrailleClient *_brailleClient;
}

+ (void)backgroundWorkAtStartup;
- (void)handleBrailleConfigurationChanged:(id)arg1;
- (void)handleBrailleDidReconnect:(id)arg1;
- (void)handleBrailleDidDisconnect:(id)arg1;
- (void)updateUI;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

