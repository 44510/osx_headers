//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class BarBackground, NSView;

@interface PVBannerViewController : NSViewController
{
    id _delegate;
    NSView *firstKeySubview;
    NSView *lastKeySubview;
}

+ (long long)bannerSortOrder;
@property id delegate; // @synthesize delegate=_delegate;
- (long long)compareBanners:(id)arg1;
- (void)didUninstallBannerView;
- (void)didInstallBannerView;
- (void)uninstallWithAnimation:(BOOL)arg1;
- (void)installWithAnimation:(BOOL)arg1;
- (void)uninstall:(id)arg1;
- (BOOL)isInstalled;
@property(retain) BarBackground *view;
- (id)nibName;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

@end
