//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSWindowDelegate.h"

@class CNAController, NSString;

@interface CNAAppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate>
{
    CNAController *_cnaController;
}

@property CNAController *cnaController; // @synthesize cnaController=_cnaController;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

