//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFTokenHIPluginSupport;

@interface TokenUI : NSObject
{
    SFTokenHIPluginSupport *mTokenPluginSupport;
}

+ (int)keychainRefToSSID:(struct OpaqueSecKeychainRef *)arg1 ssid:(unsigned int *)arg2;
+ (id)bundleNameForSubservice:(unsigned int)arg1;
- (void)showInfoWindowForKeychain:(struct OpaqueSecKeychainRef *)arg1;
- (void)dealloc;
- (id)init;

@end

