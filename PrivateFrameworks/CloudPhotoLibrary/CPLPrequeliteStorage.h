//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLEngineStorageImplementation.h"

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation>
{
    CPLPrequeliteTable *_mainTable;
    BOOL _superWasCalled;
}

- (void).cxx_destruct;
- (BOOL)_checkSuperWasCalled;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(BOOL)arg3 error:(id *)arg4;
- (BOOL)createIndexOnColumn:(id)arg1 error:(id *)arg2;
- (id)valueForVariable:(id)arg1;
- (BOOL)setValue:(id)arg1 forVariable:(id)arg2 error:(id *)arg3;
- (BOOL)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;
- (BOOL)createMainTableWithDefinition:(id)arg1 error:(id *)arg2;
- (id)variableWithName:(id)arg1 type:(id)arg2;
- (id)mainTable;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)engineLibrary;
- (id)pqStore;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

