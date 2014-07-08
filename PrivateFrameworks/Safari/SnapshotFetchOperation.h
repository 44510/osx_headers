//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SiteMetadataFetchOperation.h>

#import "SiteMetadataFetcherClient.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SnapshotFetchOperation : SiteMetadataFetchOperation <SiteMetadataFetcherClient>
{
    struct RefPtr<Safari::SiteMetadataFetcher> _fetcher;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveSiteMetadataResponse:(id)arg1 toRequest:(id)arg2;
- (void)_startOffscreenSnapshotRequest;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

