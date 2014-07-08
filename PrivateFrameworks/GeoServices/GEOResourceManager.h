//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOResourceManager : NSObject
{
    unsigned int _tileGroupIdentifier;
}

+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)sharedManager;
- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1;

@end

