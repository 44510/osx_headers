//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FezHotKeyManager : NSObject
{
    NSMutableDictionary *_handlers;
}

+ (int)disableSystemHotKey:(unsigned int)arg1;
+ (int)enableSystemHotKey:(unsigned int)arg1;
+ (id)sharedInstance;
- (void)triggerHotKeyEvent:(unsigned long long)arg1;
- (int)unregisterHotKey:(unsigned long long)arg1;
- (int)registerHotKey:(unsigned long long)arg1 keyCode:(unsigned short)arg2 keyMask:(unsigned int)arg3 handler:(id)arg4;
- (void)dealloc;
- (id)init;

@end
