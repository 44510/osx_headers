//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SiteMetadataResponse.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface SnapshotResponse : SiteMetadataResponse
{
}

+ (id)responseWithURL:(id)arg1 snapshot:(id)arg2;
@property(readonly, nonatomic) NSImage *snapshot;
- (id)initWithURL:(id)arg1 snapshot:(id)arg2;

@end

