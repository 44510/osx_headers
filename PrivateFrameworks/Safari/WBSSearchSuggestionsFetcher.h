//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WBSSearchSuggestionsFetcher : NSObject
{
    unsigned long long _numberOfPendingFetches;
}

+ (id)sharedFetcher;
- (void)_fetchDidFinishWithSuggestions:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_searchHelperConnection;
- (void)cancelExistingSuggestionsRequest;
- (void)updateSuggestionsRequestWithSearchTerms:(id)arg1 suggestionsURLTemplate:(id)arg2 userAgentString:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=isFetching) BOOL fetching;

@end

