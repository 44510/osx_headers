//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSError, SOURLFetcher;

@protocol SOURLFetcherDelegate
- (void)urlFetcher:(SOURLFetcher *)arg1 fetchFailedWithError:(NSError *)arg2;
- (void)urlFetcher:(SOURLFetcher *)arg1 fetchedResult:(NSData *)arg2;
@end

