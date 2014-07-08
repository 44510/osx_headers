//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KeychainStore, NSDictionary, NSMutableArray, NSString;

@interface StoreViewingAttributes : NSObject
{
    struct {
        unsigned int isDirty:1;
        unsigned int isFocused:1;
        unsigned int displaysSearchRank:1;
        unsigned int displaySizes:1;
        unsigned int displayNumbers:1;
        unsigned int isSortedDescending:1;
        unsigned int wasSortedDescendingBeforeSortingByRank:1;
        unsigned int reserved:24;
    } _flags;
    NSString *_sortOrder;
    NSString *_sortOrderBeforeSortingByRank;
    KeychainStore *_store;
    NSMutableArray *_focusedKeychainItems;
    NSDictionary *_searchRanks;
}

- (long long)state;
- (void)readValuesFromDictionary:(id)arg1;
- (void)writeValuesToDictionary:(id)arg1;
- (void)noteChange;
- (void)setIsDirty:(BOOL)arg1;
- (BOOL)isDirty;
- (void)setIsSortedDescending:(BOOL)arg1;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSortedDescending;
- (BOOL)isSortedAscending;
- (void)setSortOrder:(id)arg1;
- (id)sortOrder;
- (void)setSearchRanks:(id)arg1;
- (id)searchRanks;
- (void)setDisplaysSearchRank:(BOOL)arg1;
- (BOOL)displaysSearchRank;
- (id)focusedKeychainItems;
- (void)setFocusedKeychainItems:(id)arg1;
- (BOOL)isFocused;
- (id)store;
- (void)setKeychainStore:(id)arg1;
- (id)init;

@end

