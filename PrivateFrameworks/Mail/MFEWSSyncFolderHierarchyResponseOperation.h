//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@interface MFEWSSyncFolderHierarchyResponseOperation : MFEWSResponseOperation
{
    CDUnknownBlockType _createBlock;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _deleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;

@end

