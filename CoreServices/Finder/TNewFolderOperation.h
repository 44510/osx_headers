//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRenameOperation.h"

@interface TNewFolderOperation : TRenameOperation
{
    _Bool _isRenaming;
}

- (int)createNewFolder:(const struct TString *)arg1 properties:(const struct TFENodePropertyList *)arg2;
- (void)reconfigureToRenameNodes:(const struct TFENodeVector *)arg1;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;
- (id)newDelegate;

@end

