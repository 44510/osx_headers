//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUndoableOperation.h"

@interface FBAddLibraryOperation : FBUndoableOperation
{
}

+ (id)removeLibrary:(id)arg1;
+ (id)addLibrary:(id)arg1;
- (void)redoInternal;
- (void)undoInternal;
- (void)selectLibrary;
- (void)performInternal;
- (void)_selectLibrary:(id)arg1;
- (void)doSelectOperation:(id)arg1;
- (void)doRemoveOperation:(id)arg1;
- (void)doAddOperation:(id)arg1;
- (id)lib;
- (BOOL)add;

@end

