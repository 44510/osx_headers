//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary *_regions;
    NSLock *_regionsLock;
}

- (BOOL)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

