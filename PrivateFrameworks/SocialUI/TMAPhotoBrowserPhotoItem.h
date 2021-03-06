//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/TMACollectionViewItem.h>

@class MLMediaObject, NSImage;

@interface TMAPhotoBrowserPhotoItem : TMACollectionViewItem
{
    NSImage *_image;
    MLMediaObject *_mediaObject;
    struct CGSize _imageSize;
}

+ (id)itemWithMediaObject:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) MLMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (id)displayName;
@property(readonly, nonatomic) NSImage *image;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1 indexPath:(id)arg2;

@end

