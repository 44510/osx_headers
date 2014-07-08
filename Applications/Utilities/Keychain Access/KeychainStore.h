//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable, NSMutableArray, NSString, SFKeychain;

@interface KeychainStore : NSObject
{
    struct OpaqueSecKeychainRef *_secKeychainRef;
    SFKeychain *_keychain;
    NSString *_storeHandle;
    NSLock *_filteredTableLock;
    NSMutableArray *_allKeychainItems;
    NSMapTable *_filteredTable;
    NSMutableArray *_cachedIdentities;
    NSLock *_lock;
    int _state;
    BOOL _isLogicalSearchStore;
    BOOL _isCloudKeychainStore;
    BOOL _inBatchMode;
    BOOL _showExpiredCerts;
}

+ (BOOL)isCloudKeychain:(id)arg1;
+ (BOOL)isSystemRootCertificates:(id)arg1;
+ (BOOL)isRemoteKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (id)iconForKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (id)displayNameForKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (BOOL)isSystemKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (void)removeStoreFromCache:(id)arg1;
+ (id)registerAvailableStore:(id)arg1;
+ (id)cachedStore:(id)arg1;
+ (id)storeForSearchString:(id)arg1;
+ (id)storeForKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (BOOL)isStoreForKeychainRefInCache:(struct OpaqueSecKeychainRef *)arg1;
+ (id)secSearchToStoreHandle:(id)arg1;
+ (id)secKeychainRefToStoreHandle:(struct OpaqueSecKeychainRef *)arg1;
+ (void)initialize;
- (void)keychainTrustSettingsChangedNotification:(id)arg1;
- (void)keychainLeftBatchModeNotification:(id)arg1;
- (void)_keychainLeftBatchMode;
- (void)keychainEnteredBatchModeNotification:(id)arg1;
- (void)_keychainEnteredBatchMode;
- (void)keychainUpdateNotification:(id)arg1;
- (void)keychainDeleteNotification:(id)arg1;
- (void)keychainAddNotification:(id)arg1;
- (void)_cacheIdentities;
- (void)_cacheAllKeychainItemsFromKeychain;
- (void)_cacheAllKeychainItemsFromSearch;
- (void)_cacheAllKeychainItems;
- (BOOL)_cacheAllKeychainItemsFromKeychain:(id)arg1;
- (id)icon;
- (BOOL)isCloudKeychain;
- (BOOL)isSystemRootCertificates;
- (BOOL)isRemoteKeychainStore;
- (BOOL)isSystemKeychainStore;
- (_Bool)isKeychainDefault;
- (void)makeDefault;
- (void)toggleLock:(id)arg1;
- (void)toggleLock;
- (BOOL)isLocked:(id)arg1;
- (BOOL)isLocked;
- (BOOL)isPhysicallyPresent;
- (BOOL)isSmartCard;
- (BOOL)isFileBased;
- (BOOL)canModify;
- (BOOL)isLogicalSearchStore;
- (struct OpaqueSecKeychainRef *)secKeychainRef;
- (void)setShowExpiredCerts:(BOOL)arg1;
- (BOOL)isViewableItem:(id)arg1;
- (id)nsKeychainItemToIdentityKeychainItem:(id)arg1;
- (id)nsKeychainItemToKeychainItem:(id)arg1;
- (id)keyItemFromIdentityItem:(id)arg1;
- (id)certificateItemFromIdentityItem:(id)arg1;
- (BOOL)itemIsIdentity:(id)arg1;
- (struct OpaqueSecIdentityRef *)_getIdentityRefForKeychainItem:(id)arg1;
- (id)_getIdentityItemForKeychainItem:(id)arg1;
- (void)pasteKeychainItems;
- (void)copyKeychainItems:(id)arg1 cut:(_Bool)arg2;
- (BOOL)clipboardHasItems;
- (id)uniqueTrustedCertificatesInSelection:(id)arg1;
- (int)removeTrustSettingsInSelection:(id)arg1;
- (BOOL)itemHasTrustSettings:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)deleteKeychainItemsSynchronously:(id)arg1;
- (void)deleteKeychainItems:(id)arg1;
- (void)addKeychainItemToStore:(id)arg1;
- (id)newSecureNoteItem:(id)arg1 note:(id)arg2;
- (id)newKeychainItem:(id)arg1 account:(id)arg2 password:(id)arg3;
- (id)keychainItemsFilteredUsingClass:(unsigned int)arg1 attributes:(id)arg2;
- (id)keychainItemsFilteredUsingAttributes:(id)arg1;
- (id)noteKeychainItems:(id)arg1;
- (id)keyKeychainItems:(id)arg1;
- (id)identityKeychainItems:(id)arg1;
- (id)certKeychainItems:(id)arg1;
- (id)passwordKeychainItems:(id)arg1;
- (void)_sortKeychainItemList:(id)arg1 usingAttributes:(id)arg2;
- (void)fetchAllKeychainItemsSynchronously;
- (void)updateSearchItemsSynchronously;
- (void)_releaseAllKeychainItems;
- (void)_rebuildFilteredKeychainItemList;
- (id)_keyKeychainItemsByKeyOrItemClass:(id)arg1 itemClass:(unsigned int)arg2 attributes:(id)arg3;
- (unsigned long long)indexOfKeychainItem:(id)arg1;
- (unsigned long long)totalCount;
- (id)allKeychainItems;
- (id)storeHandle;
- (int)storeState;
- (void)openKeychainAsynchronously;
- (void)dealloc;
- (void)release;
- (id)initWithSearch:(id)arg1;
- (id)initWithRef:(struct OpaqueSecKeychainRef *)arg1;

@end
