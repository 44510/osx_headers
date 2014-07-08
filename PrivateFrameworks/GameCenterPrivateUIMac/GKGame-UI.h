//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKGame.h"

@interface GKGame (UI)
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeGameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)URLStringForImageWithShineIfNeeded;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
@end

