//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BrowserKit/BKBaseContentsModule.h>

@class NSArrayController, NSProBox, NSProButton, NSProPopUpButton, NSProSegmentedControl, NSProThemeImageView;

__attribute__((visibility("hidden")))
@interface BKBrowserControlsModule : BKBaseContentsModule
{
    NSProPopUpButton *_sourcesMenu;
    NSArrayController *_sourcesMenuController;
    NSProSegmentedControl *_searchFieldToggle;
    NSProThemeImageView *_searchFieldContainer;
    NSProButton *_predicateEditorToggle;
    NSProBox *_topDividerLine;
    BOOL _showingSearchField;
}

+ (id)defaultModuleNibName;
- (void)_updateSourcesMenu;
- (void)updateSearchExtrasVisibility;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (void)viewWasInstalled;
- (void)setModuleConnector:(id)arg1;
- (BOOL)setSelectionPath:(id)arg1;
- (id)selectionPath;
- (id)keywordSearchString;
- (BOOL)isKeywordSearching;
- (void)setDefaultSettingsForNewPaneCModule:(id)arg1;
- (void)setDefaultSettingsForNewPaneBModule:(id)arg1;
- (void)searchAddPredicate:(id)arg1;
- (void)searchFieldToggleAction:(id)arg1;

@end

