//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RDDatabase, RDLockedDictionary;

@interface RDFolderIdClosure : NSObject
{
    RDDatabase *_database;
    RDLockedDictionary *_closureByFolderId;
}

+ (id)indexKeyForFolder:(id)arg1;
- (void).cxx_destruct;
- (void)addFolderIds:(id)arg1 toFolder:(id)arg2;
- (void)addFolderId:(unsigned long long)arg1 toFolder:(id)arg2;
- (void)dropFolderIds:(id)arg1 fromFolder:(id)arg2;
- (void)dropFolderId:(unsigned long long)arg1 fromFolder:(id)arg2;
- (id)closureForFolder:(id)arg1;
- (void)computeClosure:(id)arg1 forFolder:(id)arg2;
- (void)clearIndex;
- (void)loadIndexes;
- (id)database;
- (id)initWithDatabase:(id)arg1;

@end

