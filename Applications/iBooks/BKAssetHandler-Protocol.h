//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSString, NSURL;

@protocol BKAssetHandler <NSObject>
- (NSURL *)coverArtURLIfAvailableFromDropURLs:(NSArray *)arg1;
- (BOOL)traverseDirectoryOnImport:(NSString *)arg1;
- (BOOL)openStorePageForSeriesID:(NSString *)arg1 sender:(id)arg2 error:(id *)arg3;
- (BOOL)openStorePageForAsset:(id <BKAsset>)arg1 sender:(id)arg2 error:(id *)arg3;
- (BOOL)deleteAssets:(NSArray *)arg1 sender:(id)arg2 exhaustive:(BOOL)arg3;
- (void)moveAssetsToDefaultCollections:(NSArray *)arg1 sender:(id)arg2;
- (void)openAsset:(id <BKAsset>)arg1 sender:(id)arg2 usingImage:(NSImage *)arg3 fromScreenRect:(struct CGRect)arg4 selectLocation:(NSString *)arg5;
- (void)openAsset:(id <BKAsset>)arg1 sender:(id)arg2;
- (void)importURLs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSArray *))arg2;
@end
