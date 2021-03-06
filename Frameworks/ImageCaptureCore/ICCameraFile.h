//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray, NSString;

@interface ICCameraFile : ICCameraItem
{
    id _fileProperties;
}

- (void)setHasThumbnail:(BOOL)arg1;
- (void)setHasMetadata:(BOOL)arg1;
- (void)handleProgressNotification:(id)arg1;
- (id)metadataIfAvailable;
- (struct CGImage *)largeThumbnailIfAvailable;
- (void)setLargeThumbnailData:(id)arg1;
- (id)largeThumbnailData;
- (void)setThumbnailData:(id)arg1;
- (id)thumbnailData;
- (struct CGImage *)thumbnailIfAvailable;
- (BOOL)handleCommandCompletion:(id)arg1;
@property(readonly) NSArray *sidecarFiles;
- (void)addSidecarFile:(id)arg1;
@property unsigned long long orientation;
@property(retain) id downloadDelegate;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
@property(readonly) BOOL orientationOverridden;
- (BOOL)isRaw;
@property(readonly) BOOL timeLapse;
@property(readonly) BOOL highFramerate;
@property(readonly) BOOL burstPicked;
@property(readonly) BOOL burstFavorite;
@property(readonly) NSString *burstUUID;
@property(readonly) double duration;
@property(readonly) long long fileSize;
- (id)modificationDate;
- (id)creationDate;
@property(readonly) long long height;
@property(readonly) long long width;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end

