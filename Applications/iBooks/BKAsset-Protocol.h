//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString, NSURL;

@protocol BKAsset <NSObject>
@property(readonly) long long metadataMigrationVersion;
@property(readonly) BOOL computedRating;
@property(readonly) NSString *grouping;
@property(readonly) NSString *year;
@property(readonly) NSString *kind;
@property(readonly) NSString *comments;
@property(readonly) NSString *bookDescription;
@property(readonly) NSNumber *versionNumber;
@property(readonly) NSDate *updateDate;
@property(readonly) long long rating;
@property(readonly) long long pageCount;
@property(readonly) NSString *scrollDirection;
@property(readonly) short desktopSupportLevel;
@property(readonly) BOOL shouldDisableTouchEmulation;
@property(readonly) BOOL shouldDisableOptimizeSpeed;
@property(readonly) NSDate *purchaseDate;
@property(readonly) NSDate *releaseDate;
@property(readonly) NSDate *dataSourceInsertionDate;
@property(readonly) short state;
@property(readonly) short contentType;
@property(readonly) long long fileSize;
@property(readonly) long long generation;
@property(readonly, getter=isLocked) BOOL locked;
@property(readonly, getter=isCompressed) BOOL compressed;
@property(readonly, getter=isProof) BOOL proof;
@property(readonly, getter=isSample) BOOL sample;
@property(readonly) NSString *dataSourceIdentifier;
@property(readonly) NSString *genre;
@property(readonly) NSURL *url;
@property(readonly) NSString *sortTitle;
@property(readonly) NSString *title;
@property(readonly) NSString *author;
@property(readonly) NSString *storeID;
@property(readonly) NSString *assetID;
@property(readonly) NSString *accountID;

@optional
@property(readonly) NSNumber *seriesSortKey;
@property(readonly) NSString *seriesID;
@property(readonly) NSString *sequenceDisplayName;
@property(readonly) NSNumber *seriesIsCloudOnly;
@property(readonly) NSNumber *seriesIsHidden;
@property(readonly) unsigned long long storeFrontID;
@end

