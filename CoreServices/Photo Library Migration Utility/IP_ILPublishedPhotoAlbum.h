//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IP_ILPhotoAlbum.h"

@interface IP_ILPublishedPhotoAlbum : IP_ILPhotoAlbum
{
}

- (id)unpublishNow;
- (void)_updatePhotosOrder;
- (void)newPhotoWithUID:(id)arg1;
- (void)deletePhotoWithUID:(id)arg1 enableSubscribeUnwanted:(BOOL)arg2;
- (void)deletePhotoWithUID:(id)arg1;
- (void)markPhotoWithUIDasModified:(id)arg1 propertiesOnly:(BOOL)arg2 additionalNotificationsPending:(BOOL)arg3;
- (void)markPhotoWithUIDasModified:(id)arg1 propertiesOnly:(BOOL)arg2;
- (void)markPhotoWithUID:(id)arg1 changedToState:(int)arg2 additionalNotificationsPending:(BOOL)arg3;
- (void)markPhotoWithUID:(id)arg1 changedToState:(int)arg2;
- (void)markAlbumAsModified;
- (void)_postAlbumChangedNotification;
- (void)_resetContentOfInternalPhotoDB;
- (id)_updateStatusOperationType;
- (void)setRemoteDirectory:(id)arg1;
- (id)serviceUsername;
- (void)prepareToSync;
- (id)publishOrSync:(BOOL)arg1;
- (void)_calculateSpritePositions:(id)arg1 toArray:(id)arg2 start:(unsigned long long)arg3 photoCount:(unsigned long long)arg4 frameCount:(long long)arg5;
- (id)publishNow;
- (id)updateNow;
- (BOOL)needsUpdate;

@end

