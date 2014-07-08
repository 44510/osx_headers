//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIViewController.h"

#import "CalUIDayCanvasControllerDelegate.h"
#import "CalUIMiniMonthViewDelegate.h"
#import "CalUISizeBasedDateContentsTextFieldDelegate.h"
#import "EKEventViewWindowController.h"

@class CalUIDayCanvasController, CalUIDayMiniMonthView, EKEventViewController, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface CalUIDayViewController : CalUIViewController <EKEventViewWindowController, CalUIMiniMonthViewDelegate, CalUIDayCanvasControllerDelegate, CalUISizeBasedDateContentsTextFieldDelegate>
{
    BOOL _canvasIsSwiping;
    BOOL _shouldTryToSelectNewEvent;
    CalUIDayCanvasController *_canvasController;
    EKEventViewController *_eventViewController;
    NSTextField *_noEventsLabel;
    NSView *_rightSidebar;
    CalUIDayMiniMonthView *_miniMonth;
    NSTextField *_weekdayTitleLabel;
    NSTextField *_lunarDateLabel;
    NSLayoutConstraint *_miniMonthHeightConstraint;
    NSLayoutConstraint *_miniMonthLeftInsetConstraint;
}

+ (unsigned long long)numberOfColumns;
+ (long long)liveRangeNumDaysOfPaddingPastVisibleRange;
+ (Class)contentViewClass;
+ (void)debugUpdateTimeIntervalBuffers;
@property(retain) NSLayoutConstraint *miniMonthLeftInsetConstraint; // @synthesize miniMonthLeftInsetConstraint=_miniMonthLeftInsetConstraint;
@property(retain) NSLayoutConstraint *miniMonthHeightConstraint; // @synthesize miniMonthHeightConstraint=_miniMonthHeightConstraint;
@property(retain) NSTextField *lunarDateLabel; // @synthesize lunarDateLabel=_lunarDateLabel;
@property(retain) NSTextField *weekdayTitleLabel; // @synthesize weekdayTitleLabel=_weekdayTitleLabel;
@property BOOL shouldTryToSelectNewEvent; // @synthesize shouldTryToSelectNewEvent=_shouldTryToSelectNewEvent;
@property(retain) CalUIDayMiniMonthView *miniMonth; // @synthesize miniMonth=_miniMonth;
@property(retain) NSView *rightSidebar; // @synthesize rightSidebar=_rightSidebar;
@property(readonly) NSTextField *noEventsLabel; // @synthesize noEventsLabel=_noEventsLabel;
@property BOOL canvasIsSwiping; // @synthesize canvasIsSwiping=_canvasIsSwiping;
@property(retain) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property(retain) CalUIDayCanvasController *canvasController; // @synthesize canvasController=_canvasController;
- (void).cxx_destruct;
- (BOOL)wantsTimeDetectionForSuggestions;
- (void)eventSpanHasChanged:(id)arg1;
- (BOOL)hideRevertButtonForNonSchedulingChanges;
- (void)showEvent:(id)arg1;
- (BOOL)displayApplyButton;
- (BOOL)displayShowButton;
- (void)didCommitEvent;
- (BOOL)shouldCloseOnCommit;
- (void)showVisualizer;
- (id)perfAnalysisCategoryName;
- (void)willShowWindow;
- (BOOL)handleMouseDownOnOccurrence:(id)arg1 forMouseEvent:(id)arg2;
- (BOOL)performDragOperation:(id)arg1 inContainer:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1 inContainer:(id)arg2;
- (void)draggingEnded:(id)arg1 inContainer:(id)arg2;
- (void)draggingExited:(id)arg1 inContainer:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 inContainer:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 inContainer:(id)arg2;
- (void)calendarColorDidChange:(id)arg1;
- (void)hideTravelTimeValueDidChange;
- (void)hideAllDayEventsValueDidChange;
- (Class)allDayOccurrenceClassForCanvasController:(id)arg1;
- (BOOL)shouldUseSpecialColoringForToday;
- (double)occurrenceRightInset;
- (BOOL)allDayLabelHasBackground;
- (BOOL)shouldShowDateBanner;
- (BOOL)shouldSelectDateOnCanvasClickForCanvasController:(id)arg1;
- (BOOL)canvasControllerShouldAnimateResize:(id)arg1;
- (BOOL)canvasControllerShouldPulseOccurrencesForKeyboardNavigation:(id)arg1;
- (BOOL)showAllDayInBannerForCanvasController:(id)arg1;
- (long long)hoursToDisplayForCanvasController:(id)arg1;
- (long long)numberOfDaysForCanvasController:(id)arg1;
- (id)startDateForCanvasController:(id)arg1;
- (BOOL)dateIsVisibleInCanvas:(id)arg1;
- (id)allOccurrenceContainerViews;
- (id)canvasSwipeController;
- (id)canvasContainerKey;
- (BOOL)shouldOpenInspectorOnEventCreation;
- (long long)numberOfVisibleDaysWhenAligned;
- (void)overlayCalendarDidChange;
- (void)showWeekNumbersDidChange;
- (void)firstDayOfWeekDidChange;
- (id)backgroundColorForDate:(id)arg1;
- (id)ephemeralUIOccurrenceForEventOccID:(id)arg1;
- (id)uiOccForEventOccurrenceID:(id)arg1;
- (void)contentAreaDidEndResizeLive:(BOOL)arg1;
- (void)contentAreaWillBeginResizeLive:(BOOL)arg1;
- (void)showEventTimesDidChange;
- (void)dateTimeFormatChanged;
- (void)fontSizeChanged;
- (void)showToday:(id)arg1;
- (void)showPrevious:(id)arg1;
- (void)showNext:(id)arg1;
- (void)canvasDidEndSwipingAlongInfiniteAxis;
- (void)canvasDidBeginSwipingAlongInfiniteAxis;
- (void)updateMiniMonthWithDate:(id)arg1;
- (void)canvasFirstVisibleDateDidChange:(id)arg1;
- (void)selectDate:(id)arg1;
- (void)miniMonthView:(id)arg1 didSelectDate:(id)arg2;
- (void)selectionStateChangedForEventOccurrenceIDs:(id)arg1;
- (void)eventsChanged:(id)arg1;
- (void)updateSidebarInspector;
- (BOOL)clearSidebarInspector;
- (void)tryToSelectVisibleOccurrence;
- (id)initialFirstResponder;
- (void)occurrenceContainerDidPopulateEvents:(id)arg1;
- (void)activateWithStartDate:(id)arg1 activeDate:(id)arg2;
- (void)updateLunarDateLabel;
- (id)weekdayLabelString;
- (void)updateTitle;
- (id)titleDateFormat;
- (void)datesChanged;
- (void)searchUpdated;
- (void)searchEnded;
- (void)realDateDidChange;
- (void)redisplay;
- (id)sizeBasedTitleLayer;
- (id)accessibilityShowNextDescription;
- (id)accessibilityShowPreviousDescription;
- (id)viewName;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (void)canvasFrameDidChange:(id)arg1;
- (void)setViewsController:(id)arg1;
- (id)newMiniMonthView;
- (id)initWithContainerView:(id)arg1;
- (unsigned long long)cuikView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
