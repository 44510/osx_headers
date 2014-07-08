//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSaveObjectController.h"

@class TSaveSearchAccessoryViewController;

@interface TSaveSearchSheetController : TSaveObjectController
{
    TSaveSearchAccessoryViewController *_accessoryViewController;
    id <TSaveSearchSheetControllerDelegate> _delegate;
}

+ (id)controllerForWindow:(id)arg1 withDelegate:(id)arg2 withName:(const struct TString *)arg3 forceAddToSidebar:(_Bool)arg4;
@property(readonly, retain) TSaveSearchAccessoryViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
- (void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2;
- (_Bool)validateName:(const struct TString *)arg1 inDestination:(const struct TFENode *)arg2;
- (void)dealloc;
- (id)init;

@end

