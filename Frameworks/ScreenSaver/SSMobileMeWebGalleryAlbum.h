//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString, NSURL;

@interface SSMobileMeWebGalleryAlbum : NSObject <NSCopying>
{
    NSString *_memberName;
    NSString *_title;
    NSURL *_feedURL;
    NSImage *_thumbnail;
    NSURL *_thumbnailURL;
    BOOL _enabled;
}

+ (id)albumFromSubscriptionDict:(id)arg1;
+ (id)albumFromPSEntry:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)thumbnailURL;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setFeedURL:(id)arg1;
- (id)feedURL;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setMemberName:(id)arg1;
- (id)memberName;
- (long long)compare:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

