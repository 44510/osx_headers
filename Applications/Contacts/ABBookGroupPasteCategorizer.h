//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABGroupPastePasteboardData, ABRecordContext, NSArray, NSDictionary;

@interface ABBookGroupPasteCategorizer : NSObject
{
    ABRecordContext *_destinationRecordContext;
    NSArray *_destinationGroups;
    ABGroupPastePasteboardData *_pasteboardData;
    BOOL _hasExecuted;
    NSArray *_smartGroupDictionaries;
    NSArray *_subgroupUids;
    NSArray *_addGroupUids;
    NSArray *_importGroupUids;
    NSDictionary *_peopleDictionary;
}

@property(readonly, copy) NSDictionary *peopleDictionary; // @synthesize peopleDictionary=_peopleDictionary;
@property(readonly, copy) NSArray *importGroupUids; // @synthesize importGroupUids=_importGroupUids;
@property(readonly, copy) NSArray *addGroupUids; // @synthesize addGroupUids=_addGroupUids;
@property(readonly, copy) NSArray *subgroupUids; // @synthesize subgroupUids=_subgroupUids;
@property(readonly, copy) NSArray *smartGroupDictionaries; // @synthesize smartGroupDictionaries=_smartGroupDictionaries;
- (void)categorizePasteboardData;
- (void)categorizeGroups;
- (BOOL)hasAlreadyExecuted;
- (void)dealloc;
- (id)initWithDestinationRecordContext:(id)arg1 destinationGroups:(id)arg2 pasteboardData:(id)arg3;

@end
