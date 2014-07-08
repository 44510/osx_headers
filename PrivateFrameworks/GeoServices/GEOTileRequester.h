//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOResourceManifestConfiguration, GEOTileKeyList, GEOTileKeyMap, NSData, NSLocale, NSString, NSThread;

@interface GEOTileRequester : NSObject
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GEOTileKeyList *_keyList;
    GEOTileKeyMap *_cachedEtags;
    GEOTileKeyMap *_cachedData;
    id <GEOTileRequesterDelegate> _delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSData *_auditToken;
    BOOL _requireWiFi;
}

+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (unsigned long long)expiringTilesetsCount;
+ (unsigned char)tileProviderIdentifier;
@property(nonatomic) BOOL requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(retain, nonatomic) NSData *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) GEOTileKeyMap *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) GEOTileKeyMap *cachedEtags; // @synthesize cachedEtags=_cachedEtags;
@property(readonly, nonatomic) GEOTileKeyList *keyList; // @synthesize keyList=_keyList;
@property(retain, nonatomic) id <GEOTileRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)cancel;
- (void)start;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5;

@end

