//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RKDatabase;

@interface IPThumbsQuery : NSObject
{
    RKDatabase *_database;
}

+ (id)queryForDatabase:(id)arg1;
- (void)_filterAudioFilesFromList:(id)arg1;
- (void)_filterUnsupportedMastersFromList:(id)arg1;
- (void)_filterUnavailableMastersFromList:(id)arg1;
- (void)_filterOriginalsFromList:(id)arg1;
- (id)detectedFacesToUpgrade;
- (id)photoIdsNeedingFaceTiles;
- (id)photoIdsNeedingSmallPreview;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

