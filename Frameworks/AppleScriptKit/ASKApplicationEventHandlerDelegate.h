//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleScriptKit/ASKEventHandlerDelegate.h>

@interface ASKApplicationEventHandlerDelegate : ASKEventHandlerDelegate
{
}

- (id)nibNameForDocument:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)application:(id)arg1 printFile:(id)arg2;
- (BOOL)application:(id)arg1 openFileWithoutUI:(id)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (BOOL)application:(id)arg1 openTempFile:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;

@end

