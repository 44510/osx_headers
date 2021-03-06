//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUndoableOperation.h"

@class NSArray, NSMutableArray, NSRecursiveLock, NSTimer;

@interface FBInstallFilesOperation : FBUndoableOperation
{
    NSRecursiveLock *_lock;
    NSArray *_actionList;
    NSMutableArray *_filesToCopy;
    NSMutableArray *_filesToActivate;
    NSMutableArray *_containerURLs;
    NSMutableArray *_validationRecords;
    NSTimer *_timer;
    unsigned int _options;
    BOOL _handleAddingFacesToGroups;
}

+ (id)installFiles:(id)arg1 toCollection:(id)arg2 withOptions:(unsigned int)arg3;
+ (id)copyFiles:(id)arg1 toDomain:(id)arg2 withOptions:(unsigned int)arg3;
- (void)redoInternal;
- (void)undoInternal;
- (void)performInternal;
- (void)dealloc;
- (id)initWithArguments:(id)arg1;
- (BOOL)_handleAddingFacesToGroups;
- (void)_timerFired:(id)arg1;
- (unsigned int)_options;
- (void)_addFacesToDomain:(id)arg1;
- (void)_addFacesToCollection:(id)arg1;
- (void)_updateAddFilesProgress:(id)arg1;
- (void)_finishAddFilesProgress:(id)arg1;
- (void)_beginAddFilesProgress:(id)arg1;
- (void)_showValidationWindowWithRecords:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setActionList:(id)arg1;
- (id)_containerURLs;
- (id)_validationRecords;
- (id)_filesToActivate;
- (id)_filesToCopy;
- (id)_actionList;
- (id)collection;
- (id)domain;
- (id)files;
- (void)_doCopyOperation:(id)arg1;
- (BOOL)_doActivateFiles;
- (BOOL)_doCopyFilesNonUserDomain;
- (BOOL)_doCopyFilesUserDomain;
- (BOOL)_doCopyFiles;
- (BOOL)_doCopyOperationPreparation;
- (BOOL)_doCopyOperationPreparationWithValidation;
- (void)_appendContainerForFile:(id)arg1;
- (void)_notifyModelOfLibraryUpdate:(id)arg1;
- (void)_flushContainers;
- (void)complete;
- (void)begin;

@end

