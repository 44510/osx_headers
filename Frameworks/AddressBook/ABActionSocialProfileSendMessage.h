//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABActionSocialProfile.h>

#import "NSSharingServiceDelegate.h"

@class NSString;

@interface ABActionSocialProfileSendMessage : ABActionSocialProfile <NSSharingServiceDelegate>
{
    id <ABShareKitTransitionProvider> _transitionProvider;
}

@property(retain) id <ABShareKitTransitionProvider> transitionProvider; // @synthesize transitionProvider=_transitionProvider;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)_localizationStringKeyForProfile:(id)arg1;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)sharingServiceNameForSocialProfileService:(id)arg1;
- (id)_actionURLForProfile:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

