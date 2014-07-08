//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSDrawer, NSMenu, NSPopUpButton, NSString, NSTextField, NSView, SEDocument, SEOutlineView;

@interface SEBundleContentsController : NSObject
{
    SEDocument *_document;
    NSDrawer *_drawer;
    NSTextField *_bundleNameView;
    NSTextField *_bundleIdentifierView;
    NSTextField *_bundleShortVersionView;
    NSTextField *_bundleVersionView;
    NSTextField *_bundleCopyrightView;
    NSTextField *_bundleScriptingDefinitionNameView;
    NSButton *_bundleAppleScriptObjCEnabledView;
    NSView *_view;
    SEOutlineView *_outlineView;
    NSMenu *_actionMenu;
    NSPopUpButton *_actionButton;
}

+ (id)keyPathsForValuesAffectingBundleAppleScriptObjCEnabled;
+ (id)keyPathsForValuesAffectingBundleScriptingDefinitionName;
+ (id)keyPathsForValuesAffectingBundleCopyright;
+ (id)keyPathsForValuesAffectingBundleVersion;
+ (id)keyPathsForValuesAffectingBundleShortVersion;
+ (id)keyPathsForValuesAffectingBundleIdentifier;
+ (id)keyPathsForValuesAffectingBundleName;
@property(readonly) NSButton *bundleAppleScriptObjCEnabledView; // @synthesize bundleAppleScriptObjCEnabledView=_bundleAppleScriptObjCEnabledView;
@property(readonly) NSTextField *bundleScriptingDefinitionNameView; // @synthesize bundleScriptingDefinitionNameView=_bundleScriptingDefinitionNameView;
@property(readonly) NSTextField *bundleCopyrightView; // @synthesize bundleCopyrightView=_bundleCopyrightView;
@property(readonly) NSTextField *bundleVersionView; // @synthesize bundleVersionView=_bundleVersionView;
@property(readonly) NSTextField *bundleShortVersionView; // @synthesize bundleShortVersionView=_bundleShortVersionView;
@property(readonly) NSTextField *bundleIdentifierView; // @synthesize bundleIdentifierView=_bundleIdentifierView;
@property(readonly) NSTextField *bundleNameView; // @synthesize bundleNameView=_bundleNameView;
@property(retain) SEDocument *document; // @synthesize document=_document;
- (id)_pathForItem:(id)arg1 isFolder:(char *)arg2;
- (id)_pathForItem:(id)arg1;
- (id)_pathsOfSelectedItems;
- (void)_updateDrawer;
- (BOOL)validateMenuItem:(id)arg1;
- (void)renameItem:(id)arg1;
- (void)revealItems:(id)arg1;
- (void)openItems:(id)arg1;
- (void)duplicateItems:(id)arg1;
- (void)deleteItems:(id)arg1;
- (void)newFolder:(id)arg1;
- (void)toggleBundleContents:(id)arg1;
- (BOOL)drawerVisible;
- (id)actionButton;
- (id)actionMenu;
- (id)outlineView;
- (id)view;
- (id)drawer;
@property(nonatomic) BOOL bundleAppleScriptObjCEnabled;
@property(retain, nonatomic) NSString *bundleScriptingDefinitionName;
@property(retain, nonatomic) NSString *bundleCopyright;
@property(retain, nonatomic) NSString *bundleVersion;
@property(retain, nonatomic) NSString *bundleShortVersion;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSString *bundleName;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(int)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(int)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (id)_filterContentsOfPath:(id)arg1;

@end

