//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary;

@protocol IMKUserDictionaryProtocol
- (void)deleteEntries:(NSArray *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)addEntries:(NSArray *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)updateOldEntry:(NSDictionary *)arg1 toNewEntry:(NSDictionary *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)deleteEntry:(NSDictionary *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)addEntry:(NSDictionary *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)reloadWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reload;
@end

