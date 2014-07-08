//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArchiveController, FilterAlbum;

@interface IPArchiveSearcher : NSObject
{
    ArchiveController *_archiveController;
    FilterAlbum *_filterAlbum;
    int _searchState;
    float _searchLimit;
    BOOL _locationInRange;
}

- (void)dealloc;
- (void)_createProximityFilterAlbumForResults:(id)arg1;
- (void)_handleProximitySearch:(id)arg1;
- (id)filterAlbum;
- (void)searchForObject:(id)arg1 inField:(int)arg2;
- (void)cancelFiltering:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (void)searchChanged:(id)arg1;
- (void)immediateSearchChanged:(id)arg1;
- (void)_enterSearchResultsView:(id)arg1;
- (void)_exitSearchResultsView;
- (int)searchState;
- (void)clearSearch;
- (id)initWithArchiveController:(id)arg1;

@end

