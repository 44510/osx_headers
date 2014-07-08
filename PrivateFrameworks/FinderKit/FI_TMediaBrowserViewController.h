//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TMediaBrowserViewController : FI_TBrowserViewController
{
    unsigned long long _browserType;
}

@property(copy, nonatomic) NSString *searchString; // @dynamic searchString;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)privateBindSettings;
- (BOOL)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2;
- (void)mediaBrowserViewSelectionDidChange:(id)arg1;
- (id)mediaBrowserView:(id)arg1 attributedDisplayNameForMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2;
- (_Bool)urlIsDimmed:(id)arg1;
- (void)reloadData;
- (void)reloadDataForContainerNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)selectAllNodes;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (id)indexSetForNodes:(const struct TFENodeVector *)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
- (id)selectedURLs;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned int)viewStyle;
- (unsigned long long)typeSelectNodeCount;
- (long long)typeSelectIndexForNode:(const struct TFENode *)arg1;
- (struct TFENode)typeSelectNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (void)aboutToTearDown;
- (id)mediaBrowserView;
- (void)loadView;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const struct TFENodeVector *)arg3 containerController:(id)arg4;

@end

