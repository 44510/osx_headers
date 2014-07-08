//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

__attribute__((visibility("hidden")))
@interface FI_TContextMenu : NSMenu
{
}

+ (void)addTagColorItemsToMenu:(id)arg1 target:(id)arg2 setTagColor:(SEL)arg3;
+ (void)populateTagActionsMenu:(id)arg1 target:(id)arg2 deleteTag:(SEL)arg3 renameTag:(SEL)arg4 setTagColor:(SEL)arg5;
+ (void)showContextMenuInView:(id)arg1 atPoint:(const struct CGPoint *)arg2;
+ (_Bool)handleMouseDownAsRightMouseDown:(id)arg1;
+ (void)handleContextMenuCommon:(unsigned int)arg1 nodes:(const struct TFENodeVector *)arg2 event:(id)arg3 clickedView:(id)arg4 browserViewController:(id)arg5 addPlugIns:(_Bool)arg6;
+ (void)buildContextMenu:(id)arg1 forContext:(unsigned int)arg2 browserViewController:(id)arg3 clickedView:(id)arg4 maxItems:(unsigned long long)arg5 addServices:(_Bool)arg6;
+ (void)addSharingServicesToMenu:(id)arg1 forCommand:(SEL)arg2 browserViewController:(id)arg3 andNodes:(const struct TFENodeVector *)arg4;
+ (void)contextMenuClickedOnContainer:(const struct TFENode *)arg1 event:(id)arg2 clickedView:(id)arg3 browserViewController:(id)arg4;
+ (void)contextMenuClickedOnNodes:(const struct TFENodeVector *)arg1 event:(id)arg2 clickedView:(id)arg3 browserViewController:(id)arg4;
+ (_Bool)allowContextualMenuForEvent:(id)arg1;
+ (void)clearContextMenuState;
+ (id)contextMenuWithDelegate:(id)arg1;
- (void)menuDidCompleteInteraction:(id)arg1;
- (void)configureForTagNode:(const struct TFENode *)arg1 browserViewController:(id)arg2 clickedView:(id)arg3;
- (void)configureFromMenuNeedsUpdate:(id)arg1 clickedView:(id)arg2 container:(_Bool)arg3 event:(id)arg4 selectedNodes:(const struct TFENodeVector *)arg5;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end
