//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SubmitDiagInfo <NSObject>
- (void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)fetchDailyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)updateConfigFile;
- (void)updateSeedSettingsWithReply:(void (^)(BOOL))arg1;
- (void)cleanupWithHomeDirectoryLocation:(NSString *)arg1;
- (void)submitFileAtLocation:(NSString *)arg1 withInternalKey:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)submitWithHomeDirectoryLocation:(NSString *)arg1 disableQuantization:(BOOL)arg2 withInternalKey:(NSString *)arg3 withReply:(void (^)(BOOL))arg4;
@end

