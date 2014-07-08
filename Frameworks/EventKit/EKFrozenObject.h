//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKFrozenMeltedPair.h"
#import "EKProtocolObject.h"
#import "NSCoding.h"

@class NSDictionary, NSManagedObjectID, NSString;

@interface EKFrozenObject : NSObject <EKFrozenMeltedPair, EKProtocolObject, NSCoding>
{
    BOOL isNew;
    BOOL _isPartialObject;
    NSManagedObjectID *_managedObjectID;
    unsigned long long *_cachedHash;
}

+ (Class)meltedClass;
+ (Class)frozenClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)frozenObjectForObject:(id)arg1 preFrozenRelationshipObjects:(id)arg2 forceUpdate:(BOOL)arg3;
+ (id)frozenObjectForObject:(id)arg1 preFrozenRelationshipObjects:(id)arg2;
+ (id)frozenObjectForObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3 forceUpdate:(BOOL)arg4;
+ (id)frozenObjectForObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;
+ (id)frozenObjectForObject:(id)arg1 createPartialObject:(BOOL)arg2;
+ (id)frozenObjectForObject:(id)arg1;
@property(nonatomic) unsigned long long *cachedHash; // @synthesize cachedHash=_cachedHash;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(nonatomic) BOOL isPartialObject; // @synthesize isPartialObject=_isPartialObject;
@property(nonatomic) BOOL isNew; // @synthesize isNew;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompletelyEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)meltedObjectInStore:(id)arg1;
- (id)frozenObject;
- (id)existingMeltedObject;
- (id)changeSet;
@property(readonly, nonatomic) BOOL isFrozen;
- (BOOL)isPropertyUnavailable:(id)arg1;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

