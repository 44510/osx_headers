//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class BKGradientView, NSButton, NSSearchField, NSString;

@interface BKMacSearchBarViewController : NSViewController
{
    BOOL _initializedSearchUI;
    NSSearchField *_searchField;
    NSButton *_searchButton;
    id <BKMacSearchBarViewControllerDelegate> _delegate;
    NSString *_searchButtonToolTip;
    BKGradientView *_headerView;
}

@property(nonatomic) BOOL initializedSearchUI; // @synthesize initializedSearchUI=_initializedSearchUI;
@property(retain, nonatomic) BKGradientView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *searchButtonToolTip; // @synthesize searchButtonToolTip=_searchButtonToolTip;
@property(nonatomic) id <BKMacSearchBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (BOOL)p_canShowHeaderControl:(id)arg1;
- (id)p_headerControls;
- (struct CGRect)p_searchFieldMagnifyingGlassBounds;
- (struct CGRect)p_searchButtonMagnifyingGlassBounds;
- (void)p_didAnimateSearchField;
- (void)p_willAnimateSearchField;
- (void)p_hideSearchField;
- (void)p_showSearchField;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)clearSearch;
- (BOOL)searchField:(id)arg1 shouldChangeCancelButtonVisibility:(BOOL)arg2;
- (void)searchFieldCanceledWhileEmpty:(id)arg1;
- (void)showSearchField:(id)arg1;
- (void)makeFirstResponder;
- (void)awakeFromNib;

@end

