//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IP_ILPhotoAlbum.h"

@interface IP_ILSubscribedPhotoAlbum : IP_ILPhotoAlbum
{
    BOOL _previewOnly;
}

- (BOOL)subscribeToPreviewsOnly;
- (void)setSubscribeToPreviewsOnly:(BOOL)arg1;
- (void)_resetContentOfInternalPhotoDB;
- (id)_updateStatusOperationType;
- (id)updatePhotoWithUID:(id)arg1 previewOnly:(BOOL)arg2;
- (id)updateNow;
- (void)prepareToSync;
- (struct NSObject *)_pluginForService:(id)arg1 username:(id)arg2 password:(id)arg3;
- (struct NSObject *)_ensurePluginWithUsername:(id)arg1 password:(id)arg2;
- (void)_notifySubscriptionError:(id)arg1;
- (BOOL)needsUpdate;

@end

