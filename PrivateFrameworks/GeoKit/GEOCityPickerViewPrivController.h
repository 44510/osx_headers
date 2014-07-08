//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSComboBoxDataSource.h"
#import "NSComboBoxDelegate.h"

@class GEOCity, NSArray, NSComboBox, NSString, NSTimer;

@interface GEOCityPickerViewPrivController : NSViewController <NSComboBoxDelegate, NSComboBoxDataSource>
{
    NSComboBox *comboBox;
    GEOCity *cityInComboBox;
    NSArray *citiesInComboMenu;
    BOOL stopAutomaticCompletion;
    NSTimer *restartAutoCompletionTimer;
    NSTimer *showComboMenuTimer;
    BOOL enabled;
    BOOL retainedHostWindow;
}

@property(retain, nonatomic) NSArray *citiesInComboMenu; // @synthesize citiesInComboMenu;
@property(retain, nonatomic) GEOCity *cityInComboBox; // @synthesize cityInComboBox;
@property(nonatomic) NSComboBox *comboBox; // @synthesize comboBox;
- (void)timeZoneFieldWasClicked:(id)arg1;
- (void)setComboBoxWithCity:(id)arg1 allCities:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)_searchByNameCallback:(id)arg1 returnedCityIDs:(id)arg2;
- (void)_autoCompleteComboBoxWithCity:(id)arg1;
- (BOOL)_doesUserInput:(id)arg1 matchCityName:(id)arg2;
- (BOOL)_doesUserInput:(id)arg1 matchCountryName:(id)arg2;
- (BOOL)_doesUserInput:(id)arg1 matchString:(id)arg2;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)comboBoxWillDismiss:(id)arg1;
- (void)comboBoxWillPopUp:(id)arg1;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)_setComboMenuToCities:(id)arg1;
- (void)comboSelectionWasFinalized:(id)arg1;
- (BOOL)_isValidComboBoxSelection;
- (id)_citySelectedInComboMenu;
- (id)_comboBoxStringValueOnTheLeftOfTheTextCursor;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)dealloc;
- (id)init;
- (void)_startShowComboMenuTimerWithTimeInterval:(double)arg1;
- (void)_stopShowComboMenuTimer;
- (void)_showComboMenuTimerCallback;
- (BOOL)_isComboBoxFirstResponder;
- (void)_stopRestartAutoCompletionTimer;
- (void)_startRestartAutoCompletionTimerWithTimeInterval:(double)arg1;
- (void)_restartSearchTimerCallback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

