//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TView.h"

@class TButton, TPopUpButton, TScopeBarRadioGroupView, TTextField;

@interface TSearchScopeSlice : TView
{
    TTextField *_searchTextView;
    TScopeBarRadioGroupView *_axScopeRadioGroupView;
    TButton *_saveButton;
    TButton *_plusMinusButton;
    struct TNSRef<NSMutableArray *> _scopeButtons;
    TPopUpButton *_scopeDropdown;
    double _scopeDropdownNaturalWidth;
    TButton *_genericRadioButton;
    id <TSearchScopeSliceControllerDelegate> _delegate;
}

@property(nonatomic) id <TSearchScopeSliceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)selectedButtonTitle;
- (id)selectedButton;
- (unsigned long long)selectedButtonIndex;
- (void)setButtonEnabled:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)selectButtonAtIndex:(unsigned long long)arg1;
- (void)setPlusMinusButtonEnabled:(_Bool)arg1;
- (void)setPlusMinusButtonTitle:(_Bool)arg1;
- (void)setSaveButtonEnabled:(_Bool)arg1;
- (void)setButtonToolTips:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (id)createRadioButtonForTitle:(id)arg1;
- (void)plusMinusButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)scopeDropdownChanged:(id)arg1;
- (void)scopeButtonPressed:(id)arg1;
- (void)chooseScopeButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)minWidth;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)adjustSubviews;
- (double)gapBetweenSearchAndSavePlusBtn:(_Bool)arg1 save:(_Bool)arg2;
- (double)savePlusBtnXOffset:(_Bool)arg1;
- (double)searchTextXOffset:(_Bool)arg1;
- (_Bool)isLTRLayoutDirection;
- (void)dealloc;
- (void)awakeFromNib;

@end

