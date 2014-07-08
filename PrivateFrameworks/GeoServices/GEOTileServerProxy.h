//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject
{
    id <GEOTileServerProxyDelegate> _delegate;
    struct dispatch_queue_s *_delegateQ;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property(nonatomic) struct dispatch_queue_s *delegateQ; // @synthesize delegateQ=_delegateQ;
@property(nonatomic) id <GEOTileServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (void)flushPendingWrites;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned long long)arg3 client:(id)arg4;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;

@end

