//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class BKCollection, NSNumber, NSString;

@interface BKCollectionMember : NSManagedObject
{
}

+ (id)predicateForCollectionMemebersWithCollection:(id)arg1;
+ (id)predicateForCollectionMemebersWithAssetIDs:(id)arg1;
+ (id)collectionMemberDictionariesWithDatabaseKeys:(id)arg1;
+ (id)collectionMemberDictionaryWithLibraryAsset:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *assetID; // @dynamic assetID;
@property(retain, nonatomic) BKCollection *collection; // @dynamic collection;
@property(retain, nonatomic) NSNumber *sortKey; // @dynamic sortKey;

@end
