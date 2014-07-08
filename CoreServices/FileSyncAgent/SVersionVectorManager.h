//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSManagedObjectContext, NSMutableDictionary, NSSet, SStore;

@interface SVersionVectorManager : NSObject
{
    NSManagedObjectContext *_moc;
    SStore *_store;
    NSMutableDictionary *_uniqueStoreIDs;
    NSMutableDictionary *_vvMap;
}

+ (id)vvManagerForStore:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *vvMap; // @synthesize vvMap=_vvMap;
@property(nonatomic) SStore *store; // @synthesize store=_store;
@property(nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (id)persistentVersionVectorsNotInSetOfCanonicalDescriptions:(id)arg1;
- (id)persistentVersionVectorForVersionVector:(id)arg1;
- (id)persistentVersionVectorForCanonicalDescription:(id)arg1;
- (void)garbageCollect;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, retain, nonatomic) NSMutableDictionary *allUniqueStoreIDs;
@property(readonly, retain, nonatomic) NSArray *allPersistentVersionVectors;
@property(readonly, retain, nonatomic) NSSet *allCanonicalDescriptions;
- (void)dealloc;
- (id)initWithSStore:(id)arg1;

@end

