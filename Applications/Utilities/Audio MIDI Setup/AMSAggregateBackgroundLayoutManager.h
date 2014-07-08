//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface AMSAggregateBackgroundLayoutManager : NSObject
{
    NSMutableArray *sizeInfoCache;
    NSMutableDictionary *layerInfoLookup;
}

+ (id)backgroundLayoutManager;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubDevicesOfLayer:(id)arg1;
- (void)sortCacheLayoutSize;
- (void)createCache:(id)arg1;
- (double)currentSizeForDeviceLayers:(id)arg1;
- (double)currentContentSizeForDeviceLayers:(id)arg1;
- (double)currentMaxSizeForDeviceLayers:(id)arg1;
- (void)invalidateLayoutOfLayer:(id)arg1;
- (struct CGSize)preferredSizeOfLayer:(id)arg1;
- (void)dealloc;

@end

