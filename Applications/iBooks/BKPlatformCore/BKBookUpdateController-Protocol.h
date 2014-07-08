//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol BKBookUpdateController <NSObject>
- (void)waitForBookWithAssetID:(NSString *)arg1 toBeDownloadableWithTimeout:(double)arg2 completion:(void (^)(BOOL))arg3;
- (void)startUpdateForAssetID:(NSString *)arg1 redownload:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)checkForUpdates:(void (^)(unsigned long long, NSError *))arg1;
- (void)checkForPurchasedBooks:(void (^)(BOOL, NSError *))arg1;
@end
