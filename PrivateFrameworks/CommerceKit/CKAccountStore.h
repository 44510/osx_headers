//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>

#import "ISStoreURLOperationDelegate.h"

@class ISStoreAccount, NSArray, NSString;

@interface CKAccountStore : CKServiceInterface <ISStoreURLOperationDelegate>
{
}

+ (id)sharedAccountStore;
- (void)removePrimaryAccountObserver:(id)arg1;
- (id)addPrimaryAccountObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)signOut;
- (void)viewAccount;
- (void)signIn;
- (void)signInWithSuggestedAppleID:(id)arg1 allowChangeOfAppleID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccount:(id)arg1;
- (id)accountWithAppleID:(id)arg1;
- (id)accountForDSID:(id)arg1;
@property(readonly) BOOL primaryAccountIsPresentAndSignedIn;
@property(readonly) ISStoreAccount *primaryAccount;
@property(readonly) NSArray *accounts;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

