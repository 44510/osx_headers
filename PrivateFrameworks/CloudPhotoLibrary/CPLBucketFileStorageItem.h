//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFileStorageItem.h>

@class NSURL;

@interface CPLBucketFileStorageItem : CPLFileStorageItem
{
    NSURL *_url;
    BOOL _attributesAreCached;
    BOOL _cachedOriginal;
    BOOL _cachedMarkedForDelete;
}

- (void).cxx_destruct;
- (BOOL)isMarkedForDelete;
- (BOOL)isOriginal;
- (void)_cacheAttributes;
- (id)initWithIdentity:(id)arg1 url:(id)arg2;

@end
