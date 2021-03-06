//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MigrationHiCloudViewController.h"

@class NSAlert, NSView;

@interface MigrationCustomizeController : MigrationHiCloudViewController
{
    NSAlert *_reconnectAlert;
    BOOL _customizeControllerObserversRegistered;
    NSView *_customizeUIPlaceholder;
}

@property BOOL customizeControllerObserversRegistered; // @synthesize customizeControllerObserversRegistered=_customizeControllerObserversRegistered;
@property NSView *customizeUIPlaceholder; // @synthesize customizeUIPlaceholder=_customizeUIPlaceholder;
- (void)willBecomeVisible;
- (void)registerObservers;
- (void)_deregisterObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willEnterPaneNavigatingForward:(BOOL)arg1;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)alternateViewIdentifier;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end

