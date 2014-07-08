//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ABBestEntryFinder : NSObject
{
    NSArray *_entries;
    NSArray *_searchTerms;
    int _highestScore;
    NSMutableArray *_highestScoringEntries;
    ABAddressBook *_addressBook;
}

+ (id)findBestEntryIn:(id)arg1 matchingSearchString:(id)arg2 inAddressBook:(id)arg3;
- (id)viewDateOfMetadataItem:(struct __MDItem *)arg1;
- (id)viewedDatesForEntries:(id)arg1 metadataItems:(struct __CFArray *)arg2;
- (id)viewDatesForEntries:(id)arg1 paths:(id)arg2;
- (id)viewedDatesForEntries:(id)arg1;
- (void)sortEntriesByMostRecentlyViewed;
- (BOOL)string:(id)arg1 hasCaseInsensitivePrefix:(id)arg2;
- (int)scoreForString:(id)arg1;
- (int)scoreForEntry:(id)arg1;
- (void)updateHighestScoringEntriesWithEntry:(id)arg1;
- (void)findEntriesWithHighestScore;
- (id)findBestEntry;
- (void)dealloc;
- (id)initWithEntries:(id)arg1 searchString:(id)arg2 inAddressBook:(id)arg3;

@end

