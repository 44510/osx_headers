//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCompletionItem.h"
#import "_GEOCompletionSearchHint.h"

@class GEOMapServiceTraits, GEOSuggestionEntry, NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint>
{
    GEOSuggestionEntry *_entry;
    NSString *_query;
    int _entryListIndex;
    int _entryIndex;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
- (void)applyToLegacySearch:(id)arg1;
- (void)sendFeedback;
- (id)completionLocation;
- (id)query;
- (id)suggestionsOptions;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (BOOL)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (id)calloutTitle;
- (id)queryLine;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

