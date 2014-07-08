//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SMSlingShotFS : NSObject
{
    BOOL SFSactive;
    NSMutableDictionary *cachedPaths;
    NSString *localStorageArea;
    id _wrappedSystem;
}

- (void).cxx_destruct;
- (void)cleanup;
- (id)pathToRemoteFile:(id)arg1 error:(long long *)arg2;
- (id)_pathToRemoteFile:(id)arg1 error:(long long *)arg2;
- (BOOL)safeFileExistsAtPath:(id)arg1;
@property(readonly) BOOL shouldBeUsed;
- (id)slash;
- (void)preFetch;
- (BOOL)activate;
- (void)dealloc;
- (id)initWithSystem:(id)arg1;

@end

