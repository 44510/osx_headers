//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SFUnlockProtocol <NSObject>
- (void)establishStashBagWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)unlockEnabledWithDevice:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)disableUnlockWithDevice:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)enableUnlockWithDevice:(NSString *)arg1 fromKey:(BOOL)arg2 withPasscode:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
@end

