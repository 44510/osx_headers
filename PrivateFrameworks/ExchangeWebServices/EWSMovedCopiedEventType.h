//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseObjectChangedEventType.h>

@class EWSFolderIdType;

@interface EWSMovedCopiedEventType : EWSBaseObjectChangedEventType
{
    id _OldItemOrFolderId;
    EWSFolderIdType *_OldParentFolderId;
}

+ (id)definition;
@property(retain, nonatomic) EWSFolderIdType *OldParentFolderId; // @synthesize OldParentFolderId=_OldParentFolderId;
@property(retain, nonatomic) id OldItemOrFolderId; // @synthesize OldItemOrFolderId=_OldItemOrFolderId;
- (void)dealloc;

@end

