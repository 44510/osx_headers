//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVPlacesManager.h"

@class NVSerializableObject;

__attribute__((visibility("hidden")))
@interface NVRecentsManager : NVPlacesManager
{
    NVSerializableObject *_lastPerformedQuery;
}

+ (id)sharedManager;
@property(retain, nonatomic) NVSerializableObject *lastPerformedQuery; // @synthesize lastPerformedQuery=_lastPerformedQuery;
- (void).cxx_destruct;
- (id)propertyListFromCurrentElements;
- (id)elementsFromPropertyList:(id)arg1;
- (id)persistenceURL;
- (id)allElements;
- (BOOL)isValidElement:(id)arg1;
- (void)addElement:(id)arg1;
- (id)_newElementFromSearchRequestStorage:(id)arg1;
- (id)newSyncedItemForSyncData:(id)arg1;
- (BOOL)syncShouldUseItemPositions;
- (BOOL)syncInvertedOrdering;
- (BOOL)syncShouldUseCustomStore;
- (id)syncIdentifier;

@end

