//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABAbstractMainWindowViewModelUIAction.h"

@class ABOpenInWindowsService;

@interface ABCleanContactListDoubleClickUIAction : ABAbstractMainWindowViewModelUIAction
{
    ABOpenInWindowsService *_openInWindowsService;
}

- (id)groupEntryForSelectionWithEntries:(id)arg1;
- (void)performWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 openInWindowsService:(id)arg2;

@end

