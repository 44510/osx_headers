//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MosaicImageCache : NSObject
{
}

+ (id)_cachePath;
+ (id)sharedInstance;
- (void)removeImageForKey:(id)arg1;
- (void)cleanCacheExceptForKeys:(id)arg1;
- (void)cleanCache;
- (void)_bgCleanCache;
- (id)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (BOOL)imageExistsForKey:(id)arg1;

@end
