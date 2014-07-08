//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TTableViewDataSource.h>

#import "TCoalescingNodeObserverProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TTagColumnTableViewDataSource : FI_TTableViewDataSource <TCoalescingNodeObserverProtocol>
{
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    struct TFENode _tagsContainerNode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2;
- (struct TFENode)nodeAtIndex:(long long)arg1;
- (id)tableViewItemAtIndex:(long long)arg1;
- (void)openChildListUpdated:(const struct TFENode *)arg1;
- (void)openSyncCompleted:(const struct TFENode *)arg1;
- (void)nodesDeleted:(const struct TFENodeVector *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodesChanged:(const struct TFENodeUpdateList *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)nodesAdded:(const struct TFENodeVector *)arg1 toObservedNode:(const struct TFENode *)arg2;
- (void)refresh;
- (void)prepareContent;
- (void)aboutToTearDown;
- (void)awakeCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

