//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString;

@protocol LAContextXPC
- (void)enterPassword:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)evaluateACL:(NSData *)arg1 operation:(id)arg2 options:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
@end

