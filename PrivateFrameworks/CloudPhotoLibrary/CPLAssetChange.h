//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, NSArray, NSData, NSDate, NSString;

@interface CPLAssetChange : CPLItemChange
{
    BOOL _favorite;
    BOOL _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSDate *_addedDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    long long _orientation;
    long long _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    NSString *_timeZoneName;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    unsigned long long _assetSubtype;
    unsigned long long _assetHDRType;
    CPLAdjustments *_adjustments;
}

@property(retain, nonatomic) CPLAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property(nonatomic) unsigned long long assetHDRType; // @synthesize assetHDRType=_assetHDRType;
@property(nonatomic) unsigned long long assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(nonatomic) unsigned long long burstFlags; // @synthesize burstFlags=_burstFlags;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(copy, nonatomic) NSString *momentName; // @synthesize momentName=_momentName;
@property(copy, nonatomic) NSString *momentIdentifier; // @synthesize momentIdentifier=_momentIdentifier;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(copy, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription=_extendedDescription;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(copy, nonatomic) NSDate *lastSharedDate; // @synthesize lastSharedDate=_lastSharedDate;
@property(copy, nonatomic) NSString *masterIdentifier; // @synthesize masterIdentifier=_masterIdentifier;
- (void).cxx_destruct;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (BOOL)supportsResources;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)propertiesDescription;
- (id)init;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3;
- (BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id *)arg3;

@end

