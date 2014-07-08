//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSArray, NSString, RDCustomSortOrder, RDDatabase;

@interface RDCustomOrderResetChange : RDUndoRedoChange
{
    NSString *_containerUuid;
    NSString *_purpose;
    NSArray *_objectUuids;
    NSArray *_previousObjectUuids;
    RDDatabase *_database;
    RDCustomSortOrder *_customSortOrder;
    NSString *_databaseUuid;
}

@property(retain, nonatomic) NSString *databaseUuid; // @synthesize databaseUuid=_databaseUuid;
@property(retain, nonatomic) RDCustomSortOrder *customSortOrder; // @synthesize customSortOrder=_customSortOrder;
@property(nonatomic) __weak RDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSArray *previousObjectUuids; // @synthesize previousObjectUuids=_previousObjectUuids;
@property(retain, nonatomic) NSArray *objectUuids; // @synthesize objectUuids=_objectUuids;
@property(retain, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) NSString *containerUuid; // @synthesize containerUuid=_containerUuid;
- (void).cxx_destruct;
- (id)description;
- (id)typeDescription;
- (void)redo;
- (void)undo;
- (id)initWithCustomSortOrder:(id)arg1;

@end

