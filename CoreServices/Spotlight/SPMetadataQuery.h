//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPQuery.h"

@class NSArray, NSDictionary, NSMapTable, NSObject<OS_dispatch_queue>, NSString, SPMetadataPattern, SPResponse;

@interface SPMetadataQuery : SPQuery
{
    NSString *_queryString;
    unsigned long long _queryOptions;
    id _queryNoteObserver;
    BOOL _useSpotlightMenuSorting;
    BOOL _persistent;
    NSArray *_prefetchedAttributes;
    NSArray *_sortingAttributes;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __MDQuery *_query;
    NSDictionary *_userQueryContentTypeDict;
    id _prefetchedAttributesKeySet;
    NSMapTable *_mapMetadataItemToResult;
    SPResponse *_lastResponse;
    SPMetadataPattern *_subqueryPattern;
    SPMetadataPattern *_lastProcessedSubqueryPattern;
    NSString *_updatedUserQueryString;
}

+ (id)defaultPrefetchedAttributesKeySet;
+ (id)defaultValuelistAttributes;
+ (id)defaultPrefetchedAttributes;
+ (id)defaultSortingAttributes;
+ (void)setDefaultUseSpotlightMenuSorting:(BOOL)arg1;
+ (void)initialize;
@property(retain) NSString *updatedUserQueryString; // @synthesize updatedUserQueryString=_updatedUserQueryString;
@property(retain) SPMetadataPattern *lastProcessedSubqueryPattern; // @synthesize lastProcessedSubqueryPattern=_lastProcessedSubqueryPattern;
@property(retain) SPMetadataPattern *subqueryPattern; // @synthesize subqueryPattern=_subqueryPattern;
@property(retain) SPResponse *lastResponse; // @synthesize lastResponse=_lastResponse;
@property(readonly) NSMapTable *mapMetadataItemToResult; // @synthesize mapMetadataItemToResult=_mapMetadataItemToResult;
@property(readonly) id prefetchedAttributesKeySet; // @synthesize prefetchedAttributesKeySet=_prefetchedAttributesKeySet;
@property(readonly) NSDictionary *userQueryContentTypeDict; // @synthesize userQueryContentTypeDict=_userQueryContentTypeDict;
@property(readonly) struct __MDQuery *query; // @synthesize query=_query;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly) NSArray *sortingAttributes; // @synthesize sortingAttributes=_sortingAttributes;
@property(readonly) NSArray *prefetchedAttributes; // @synthesize prefetchedAttributes=_prefetchedAttributes;
@property(getter=isPersistent) BOOL persistent; // @synthesize persistent=_persistent;
@property BOOL useSpotlightMenuSorting; // @synthesize useSpotlightMenuSorting=_useSpotlightMenuSorting;
- (void).cxx_destruct;
- (BOOL)isInstalledPrefPanePath:(id)arg1 homePath:(id)arg2;
- (void)_setQueryNoteBlock:(CDUnknownBlockType)arg1;
- (void)_prepareQuery;
- (void)updateWithNote:(id)arg1;
- (id)queryStringForUserQuery:(id)arg1 options:(unsigned long long)arg2;
- (id)_basicQueryWithShortcutsForUserQuery:(id)arg1;
- (id)_basicTextContentQueryForUserQuery:(id)arg1;
@property(readonly) NSString *queryString;
- (void)setQueryOptions:(unsigned long long)arg1;
- (unsigned long long)queryOptions;
- (id)_stringByEscapingSingleQuotes:(id)arg1;
- (id)_scopesForOptions:(unsigned long long)arg1;
- (id)_scopeQueryForOptions:(unsigned long long)arg1;
- (id)_scopeAllMyFilesQueryString;
- (id)_queryFormatDictionary;
- (id)_stringWithQueryFormat:(id)arg1 userQuery:(id)arg2;
- (id)_basicQueryForUserQuery:(id)arg1 contentType:(id)arg2;
- (CDUnknownBlockType)resultComparator;
- (CDUnknownBlockType)resultComparatorWithOptions:(unsigned long long)arg1;
- (CDUnknownBlockType)appRankComparator;
- (id)contentTypeDictForUserQuery:(id)arg1;
- (id)resultTypeLookupTable;
- (id)statisticsKey;
- (void)cancel;
- (void)start;
- (BOOL)updateUserQueryString:(id)arg1;
- (id)userQueryString;
- (void)_sendResponse:(id)arg1;
- (void)dealloc;
- (id)initWithUserQuery:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)supportsRefinement;
- (BOOL)isDocumentQuery;
- (id)rankingQueries;

@end

