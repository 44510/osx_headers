//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSServicesMenuUpdater.h>

@interface _NSServicesPrincipalMenuUpdater : _NSServicesMenuUpdater
{
}

+ (id)_sharedPrincipalUpdater;
- (id)menus;
- (void)updateVisibilityOfServicesItemsForMenu:(id)arg1 isForDisplay:(BOOL)arg2;
- (id)menuContext;
- (void)populateMenu:(id)arg1 withServiceEntries:(id)arg2 forDisplay:(BOOL)arg3;
- (void)addNonserviceMenuItemsToMenu:(id)arg1;
- (void)populateMenuForUnavailableServices:(id)arg1;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (unsigned long long)serviceEntryKinds;
- (BOOL)contentsNeedsUpdatingForMenu:(id)arg1;
- (BOOL)menuShowsKeyEquivalents;
- (void)dealloc;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;

@end
