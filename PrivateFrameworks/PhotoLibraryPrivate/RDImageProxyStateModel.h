//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSNumber, NSString, RDImageProxyStateTable;

@interface RDImageProxyStateModel : RDModel
{
}

+ (Class)tableClass;
@property(retain, nonatomic) NSNumber *microThumbnailWidth;
@property(retain, nonatomic) NSNumber *microThumbnailHeight;
@property(nonatomic) BOOL microThumbnailsCurrent;
@property(nonatomic) long long tinyThumbnailOrientation;
@property(nonatomic) long long miniThumbnailOrientation;
@property(nonatomic) long long thumbnailOrientation;
@property(nonatomic) long long previewJpegOrientation;
@property(nonatomic) long long microThumbnailOrientation;
@property(nonatomic) long long previewGenerationVersion;
@property(retain, nonatomic) NSString *thumbnailFileUUID;
@property(retain, nonatomic) NSString *previewFileUUID;
@property(retain, nonatomic) NSString *faceTilePath;
@property(retain, nonatomic) NSNumber *miniThumbnailFilesize;
@property(retain, nonatomic) NSString *miniThumbnailPath;
@property(nonatomic) long long microThumbnailRotation;
@property(retain, nonatomic) NSNumber *tinyThumbnailWidth;
@property(retain, nonatomic) NSNumber *tinyThumbnailHeight;
@property(nonatomic) long long tinyThumbnailRotation;
@property(retain, nonatomic) NSNumber *miniThumbnailWidth;
@property(retain, nonatomic) NSNumber *miniThumbnailHeight;
@property(nonatomic) long long miniThumbnailRotation;
@property(retain, nonatomic) NSNumber *previewFilesize;
@property(retain, nonatomic) NSNumber *thumbnailFilesize;
@property(retain, nonatomic) NSNumber *thumbnailWidth;
@property(retain, nonatomic) NSNumber *thumbnailHeight;
@property(nonatomic) long long thumbnailRotation;
@property(retain, nonatomic) NSString *thumbnailPath;
@property(retain, nonatomic) NSDate *fullSizePreviewChangeDate;
@property(retain, nonatomic) NSString *fullSizePreviewPath;
@property(nonatomic) long long previewToMasterRotation;
@property(nonatomic) long long previewJpegRotation;
@property(retain, nonatomic) NSNumber *previewJpegWidth;
@property(retain, nonatomic) NSNumber *previewJpegHeight;
@property(nonatomic) long long previewRendered;
@property(nonatomic) long long thumbnailRendered;
@property(nonatomic) long long thumbnailCacheIndex;
@property(nonatomic) BOOL fullSizePreviewUpToDate;
@property(nonatomic) BOOL tinyThumbnailsCurrent;
@property(nonatomic) BOOL miniThumbnailsCurrent;
@property(nonatomic) BOOL thumbnailsCurrent;
@property(retain, nonatomic) NSNumber *versionId;
@property(retain, nonatomic) NSString *versionUuid;
@property(readonly, nonatomic) RDImageProxyStateTable *table;

@end

