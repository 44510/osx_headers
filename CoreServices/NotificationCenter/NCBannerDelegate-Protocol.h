//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCNotificationWindowDelegate.h"

@class NCBannerModel;

@protocol NCBannerDelegate <NCNotificationWindowDelegate>
- (void)bannerShouldDismiss:(NCBannerModel *)arg1;
- (void)bannerContentClicked:(NCBannerModel *)arg1;
- (void)bannerTextCleared:(NCBannerModel *)arg1;
- (void)bannerTextTyped:(NCBannerModel *)arg1;
- (void)bannerHidInlineReply:(NCBannerModel *)arg1;
- (void)bannerShowedInlineReply:(NCBannerModel *)arg1;
- (void)banner:(NCBannerModel *)arg1 snoozedWithTimeInterval:(double)arg2;
- (void)bannerClose:(NCBannerModel *)arg1;
- (void)bannerPerformActionAndDismiss:(NCBannerModel *)arg1;
@end

