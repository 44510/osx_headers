//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSWindowDelegate.h"

@class AFAssistantController, MigrationAssistantNibOwner, MigrationController, NSString;

@interface MigrateAsstDelegate : NSObject <NSWindowDelegate, NSApplicationDelegate>
{
    AFAssistantController *_asstController;
    MigrationController *migrationController;
    MigrationAssistantNibOwner *maNIBOwner;
}

@property(retain) MigrationController *migrationController; // @synthesize migrationController;
- (void)showAboutBox:(id)arg1;
- (void)dealloc;
- (BOOL)windowShouldClose:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)assistantCompleted:(id)arg1;
- (void)awakeFromNib;
- (void)applicationWillFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

