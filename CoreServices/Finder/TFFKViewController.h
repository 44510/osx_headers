//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBrowserViewController.h"

@interface TFFKViewController : TBrowserViewController
{
}

- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)privateBindSettings;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (void)openItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (unsigned long long)actualChildCount;
- (unsigned long long)currentPage;
- (unsigned int)viewStyle;
- (void)reloadNodes:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)reloadData;
- (_Bool)isGrouping;
- (struct TGroupManager *)groupManager:(const struct TFENode *)arg1;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (void)setDataSource:(id)arg1;
- (id)firstResponder;
- (void)aboutToTearDown;
- (id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const struct TFENodeVector *)arg3 containerController:(id)arg4;
- (id)imageBrowserView;
- (id)nibName;
- (id)imageBrowser:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;

@end
