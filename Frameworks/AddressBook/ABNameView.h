//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ABNameView.h"

@class ABCardView, ABCardViewStyleProvider, ABShadowTextField, NSArray, NSButton, NSDictionary, NSFont, NSFormatter, NSMapTable, NSMutableArray, NSMutableSet, NSStackView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface ABNameView : NSView <ABNameView>
{
    NSMutableArray *_sortedFieldsNestedByLine;
    NSMutableSet *_dirtyFields;
    NSMutableSet *_displayedFields;
    NSMapTable *_fieldToKeyMap;
    NSDictionary *_keyToFieldMap;
    id <ABCardViewDataSource> _dataSource;
    ABCardViewStyleProvider *_styleProvider;
    ABCardView *mCardView;
    NSButton *mCompanyCheckbox;
    NSTextField *mTitleAndDepartmentSeparator;
    ABShadowTextField *_completeNameView;
    ABShadowTextField *_suffixView;
    ABShadowTextField *_lastNameView;
    ABShadowTextField *_middleNameView;
    ABShadowTextField *_organizationView;
    ABShadowTextField *_departmentView;
    ABShadowTextField *_jobTitleView;
    ABShadowTextField *_nicknameView;
    ABShadowTextField *_firstNameView;
    ABShadowTextField *_titleView;
    ABShadowTextField *_completePhoneticNameView;
    ABShadowTextField *_phoneticLastNameView;
    ABShadowTextField *_phoneticMiddleNameView;
    ABShadowTextField *_phoneticFirstNameView;
    NSFont *_largeFont;
    NSFont *_normalFont;
    NSFormatter *_normalFormatter;
    NSFormatter *_nicknameFormatter;
    BOOL _shouldHideTitleAndDepartmentSeparator;
    NSStackView *_outerStackView;
    NSArray *_transientConstraints;
}

+ (id)visibilityEquivalenceMap;
+ (id)largeFontKeysForDisplayStyle:(unsigned long long)arg1;
+ (id)personLayoutKeysByLine;
+ (id)companyLayoutKeysByLine;
+ (id)keyToPreferenceMap;
+ (id)alwaysVisibleKeys;
@property(readonly) NSButton *companyCheckbox; // @synthesize companyCheckbox=mCompanyCheckbox;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) id <ABCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)newKeyToFieldMap;
- (id)newFieldToKeyMap;
- (void)setDisplayStyleFromCheckBox:(id)arg1;
- (BOOL)shouldUseValueFromNameField:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)reloadData;
- (void)reloadDataForKey:(id)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusKey:(id)arg1;
- (BOOL)isPhoneticKey:(id)arg1;
- (BOOL)shouldPrunePhoneticView:(id)arg1;
- (BOOL)shouldPruneView:(id)arg1;
- (BOOL)defaultVisibilityForKey:(id)arg1;
- (BOOL)shouldPruneKey:(id)arg1;
- (id)updateKeyViewLoop;
- (void)updateMaximumTextFieldWidths;
- (void)updateCompanyCheckbox;
- (void)updateCompanyCheckBoxState;
- (void)updateCompanyCheckboxVisibility;
- (void)updateCompanyCheckboxColor;
- (void)removeFirstResponderSelection;
- (void)updateTextColor:(id)arg1;
- (void)updateAccessibilityForView:(id)arg1;
- (void)updateHidden:(id)arg1 inStackView:(id)arg2;
- (void)updateLineBreakMode:(id)arg1;
- (void)updatePlaceholderText:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)updateFormatter:(id)arg1;
- (void)layoutView:(id)arg1 inStackView:(id)arg2;
- (void)layoutRow:(id)arg1;
- (id)preventFieldsFromOutgrowingNameViewConstraints;
- (id)sizingConstraints;
- (void)addTransientConstraints;
- (void)removeTransientConstraints;
- (void)updateConstraints;
- (void)addCompanyCheckboxRow;
- (void)layoutRows;
- (id)lastVisibleField;
- (void)enumerateAllTextFieldsWithBlock:(CDUnknownBlockType)arg1;
- (void)setupLayoutFlags;
- (void)setupLayoutFonts;
- (void)updateTagForTextField:(id)arg1 displayStyle:(unsigned long long)arg2;
- (void)updateTextFields;
- (void)updateNameFieldsOrder;
- (void)updateStackViewSpacing;
- (void)updateViews;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)commitEditing;
- (BOOL)isFlipped;
- (void)forceFullLayout;
- (void)queueFullLayout;
- (void)controlTextDidChange:(id)arg1;
- (id)valueFromNameField:(id)arg1;
- (void)applyInitialConstraints;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
@property(readonly) BOOL editMode;
- (void)ABNameView_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

