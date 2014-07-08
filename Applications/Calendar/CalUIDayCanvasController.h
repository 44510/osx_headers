//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CalUILayerDelegate.h"
#import "InfiniteSwipeControllerDelegate.h"
#import "NSAnimationDelegate.h"

@class CALayer, CalUIAllDayAreaViewController, CalUIDateBannerStringController, CalUITimeLineScrollView, CalUITimeLineView, CalUIViewController, EKEvent, InfiniteSwipeController, NSArray, NSDate, NSEvent, NSLayoutConstraint, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, NSTextField, NSView;

@interface CalUIDayCanvasController : NSViewController <CalUILayerDelegate, NSAnimationDelegate, InfiniteSwipeControllerDelegate>
{
    double _hourRowHeight;
    long long _daysPerWeek;
    long long _hoursToDisplay;
    long long _workDayStartMinute;
    long long _workDayEndMinute;
    long long _scrollByWeeks;
    long long _firstDayOfWeek;
    BOOL _ignoreIndexRebuild;
    NSDate *_dateDragEnteredAutoscrollZone;
    NSEvent *_eventToPostFollowingAutoscroll;
    BOOL _showDraftsBorder;
    BOOL _showTimeZoneTransitions;
    BOOL _hasLocallyModifiedOccurrences;
    NSMutableDictionary *_currentAnimations;
    BOOL _isResizing;
    BOOL _isSwiping;
    BOOL _isSwipingAlongInfiniteAxis;
    BOOL _isThisWeek;
    BOOL _fontSizeInitialized;
    BOOL _timeChangedDuringScroll;
    BOOL _timeIndicatorTimerSuspended;
    BOOL _infiniteControllerIsAligned;
    BOOL _dragWasCancelled;
    id <CalUIDayCanvasControllerDelegate> _delegate;
    CalUIViewController *_viewController;
    CalUIAllDayAreaViewController *_allDayController;
    double _firstVisibleMinute;
    double _canvasInset;
    NSDate *_startDateRequestedDuringSwipe;
    NSLayoutConstraint *_hoursToDisplayTimelineConstraint;
    NSLayoutConstraint *_hoursToDisplayCanvasConstraint;
    NSLayoutConstraint *_topGridLineConstraint;
    NSLayoutConstraint *_bottomGridLineConstraint;
    NSLayoutConstraint *_alldayLabelConstraint;
    NSTextField *_allDayLabel;
    CalUITimeLineScrollView *_timelineScrollView;
    CalUITimeLineView *_timelineView;
    NSView *_borderView;
    InfiniteSwipeController *_infiniteController;
    long long _timeIndicatorSecond;
    NSObject<OS_dispatch_source> *_timeIndicatorTimer;
    CALayer *_timeIndicatorDot;
    NSView *_timeIndicatorAlignmentView;
    CALayer *_timeIndicatorContainer;
    NSArray *_dayExtenders;
    CalUIDateBannerStringController *_dateBannerStringController;
    NSDate *_mouseDownDate;
    EKEvent *_dragNewEvent;
    struct CGPoint _presentationOrigin;
    struct CGPoint _mouseDownPoint;
}

+ (BOOL)disableStickyOccurrences;
+ (BOOL)preLoadAdjacentWeeks;
+ (double)allDaySeparatorHeight;
+ (double)yValueForHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 dayHeight:(double)arg4 inWindow:(id)arg5;
+ (id)headerWeekNumberTextStyleForDate:(id)arg1;
+ (id)headerDateTextStyleForDate:(id)arg1;
+ (BOOL)_isToday:(id)arg1;
+ (id)headerWeekNumberTextStyleForToday;
+ (id)headerWeekNumberTextStyle;
+ (id)allDayHeaderTextStyle;
+ (id)headerDateTextStyleForLunarDate:(id)arg1;
+ (id)headerDateTextStyleForLunarWeekend;
+ (id)headerDateTextStyleForWeekend;
+ (id)headerDateTextStyleForToday;
+ (id)headerDateTextStyle;
+ (id)_textAttriburesWithFont:(id)arg1 color:(id)arg2;
+ (id)_headerWeekNumberFont;
+ (id)_headerWeekdayNameColor;
+ (id)_headerDateFont;
+ (id)_headerLunarDateFont;
+ (id)headerTextColorForWeekend;
+ (id)headerTextColorForToday;
+ (id)headerTextColor;
+ (id)_timeIndicatorDotImage;
+ (id)interestedDragTypes;
@property(retain) EKEvent *dragNewEvent; // @synthesize dragNewEvent=_dragNewEvent;
@property BOOL dragWasCancelled; // @synthesize dragWasCancelled=_dragWasCancelled;
@property(retain) NSDate *mouseDownDate; // @synthesize mouseDownDate=_mouseDownDate;
@property struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(retain) CalUIDateBannerStringController *dateBannerStringController; // @synthesize dateBannerStringController=_dateBannerStringController;
@property(retain) NSArray *dayExtenders; // @synthesize dayExtenders=_dayExtenders;
@property BOOL infiniteControllerIsAligned; // @synthesize infiniteControllerIsAligned=_infiniteControllerIsAligned;
@property(retain) CALayer *timeIndicatorContainer; // @synthesize timeIndicatorContainer=_timeIndicatorContainer;
@property(retain) NSView *timeIndicatorAlignmentView; // @synthesize timeIndicatorAlignmentView=_timeIndicatorAlignmentView;
@property(retain) CALayer *timeIndicatorDot; // @synthesize timeIndicatorDot=_timeIndicatorDot;
@property struct CGPoint presentationOrigin; // @synthesize presentationOrigin=_presentationOrigin;
@property BOOL timeIndicatorTimerSuspended; // @synthesize timeIndicatorTimerSuspended=_timeIndicatorTimerSuspended;
@property(retain) NSObject<OS_dispatch_source> *timeIndicatorTimer; // @synthesize timeIndicatorTimer=_timeIndicatorTimer;
@property long long timeIndicatorSecond; // @synthesize timeIndicatorSecond=_timeIndicatorSecond;
@property(retain) InfiniteSwipeController *infiniteController; // @synthesize infiniteController=_infiniteController;
@property(retain) NSView *borderView; // @synthesize borderView=_borderView;
@property(retain) CalUITimeLineView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain) CalUITimeLineScrollView *timelineScrollView; // @synthesize timelineScrollView=_timelineScrollView;
@property(retain) NSTextField *allDayLabel; // @synthesize allDayLabel=_allDayLabel;
@property(retain) NSLayoutConstraint *alldayLabelConstraint; // @synthesize alldayLabelConstraint=_alldayLabelConstraint;
@property(retain) NSLayoutConstraint *bottomGridLineConstraint; // @synthesize bottomGridLineConstraint=_bottomGridLineConstraint;
@property(retain) NSLayoutConstraint *topGridLineConstraint; // @synthesize topGridLineConstraint=_topGridLineConstraint;
@property(retain) NSLayoutConstraint *hoursToDisplayCanvasConstraint; // @synthesize hoursToDisplayCanvasConstraint=_hoursToDisplayCanvasConstraint;
@property(retain) NSLayoutConstraint *hoursToDisplayTimelineConstraint; // @synthesize hoursToDisplayTimelineConstraint=_hoursToDisplayTimelineConstraint;
@property BOOL timeChangedDuringScroll; // @synthesize timeChangedDuringScroll=_timeChangedDuringScroll;
@property BOOL fontSizeInitialized; // @synthesize fontSizeInitialized=_fontSizeInitialized;
@property(retain) NSDate *startDateRequestedDuringSwipe; // @synthesize startDateRequestedDuringSwipe=_startDateRequestedDuringSwipe;
@property BOOL isThisWeek; // @synthesize isThisWeek=_isThisWeek;
@property BOOL isSwipingAlongInfiniteAxis; // @synthesize isSwipingAlongInfiniteAxis=_isSwipingAlongInfiniteAxis;
@property BOOL isSwiping; // @synthesize isSwiping=_isSwiping;
@property double canvasInset; // @synthesize canvasInset=_canvasInset;
@property double firstVisibleMinute; // @synthesize firstVisibleMinute=_firstVisibleMinute;
@property BOOL isResizing; // @synthesize isResizing=_isResizing;
@property(retain) CalUIAllDayAreaViewController *allDayController; // @synthesize allDayController=_allDayController;
@property(nonatomic) __weak CalUIViewController *viewController; // @synthesize viewController=_viewController;
@property BOOL hasLocallyModifiedOccurrences; // @synthesize hasLocallyModifiedOccurrences=_hasLocallyModifiedOccurrences;
@property BOOL showTimeZoneTransitions; // @synthesize showTimeZoneTransitions=_showTimeZoneTransitions;
@property BOOL showDraftsBorder; // @synthesize showDraftsBorder=_showDraftsBorder;
@property long long scrollByWeeks; // @synthesize scrollByWeeks=_scrollByWeeks;
@property long long daysPerWeek; // @synthesize daysPerWeek=_daysPerWeek;
@property long long _hoursToDisplay; // @synthesize _hoursToDisplay;
@property long long firstDayOfWeek; // @synthesize firstDayOfWeek=_firstDayOfWeek;
@property id <CalUIDayCanvasControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSEvent *eventToPostFollowingAutoscroll; // @synthesize eventToPostFollowingAutoscroll=_eventToPostFollowingAutoscroll;
@property(retain) NSDate *dateDragEnteredAutoscrollZone; // @synthesize dateDragEnteredAutoscrollZone=_dateDragEnteredAutoscrollZone;
@property(nonatomic) double hourRowHeight; // @synthesize hourRowHeight=_hourRowHeight;
@property long long workDayEndMinute; // @synthesize workDayEndMinute=_workDayEndMinute;
@property long long workDayStartMinute; // @synthesize workDayStartMinute=_workDayStartMinute;
- (void).cxx_destruct;
- (id)allOccurrenceContainerControllers;
- (id)allOccurrenceContainerViews;
- (id)canvasSwipeController;
- (id)canvasContainerKey;
- (void)showCanvasVisualizer;
- (void)invalidateAccessibilityObjectsForInfiniteSwipeController:(id)arg1;
- (void)viewController:(id)arg1 finishedDisplay:(BOOL)arg2;
- (void)infiniteSwipeControllerDidEndScrolling:(id)arg1 withMTSwipeData:(id)arg2;
- (void)infiniteSwipeControllerDidBeginScrolling:(id)arg1;
- (long long)infiniteSwipeController:(id)arg1 distanceBetweenObjectA:(id)arg2 objectB:(id)arg3;
- (void)infiniteSwipeController:(id)arg1 didSwipeAlongInfiniteAxisToPoint:(double)arg2;
- (void)infiniteSwipeController:(id)arg1 didSwipeAlongFiniteAxisToPoint:(double)arg2 inContainerWithKey:(id)arg3;
- (void)infiniteSwipeController:(id)arg1 firstVisibleObjectDidChange:(id)arg2;
- (void)_updateTimeIndicatorHidden;
- (id)viewControllerForInfiniteSwipeController:(id)arg1 containerKey:(id)arg2;
- (BOOL)infiniteSwipeController:(id)arg1 objectA:(id)arg2 isEqualTo:(id)arg3;
- (BOOL)infiniteSwipeController:(id)arg1 isObjectMajorBoundary:(id)arg2;
- (id)infiniteSwipeController:(id)arg1 objectRelativeToObject:(id)arg2 byOffset:(long long)arg3;
- (void)_contextDidSave:(id)arg1;
- (void)_queueDidChange:(id)arg1;
- (void)_updateLocallyModifiedOccurrences;
- (void)setTimeIndicatorHidden:(BOOL)arg1;
- (void)_timeIndicatorAlignmentViewFrameDidChange;
- (void)positionTimeIndicator;
- (double)_timeIndicatorPosition;
- (void)_updateTimeIndicator;
- (void)_suspendTimeIndicatorTimer;
- (void)_resumeTimeIndicatorTimer;
- (void)_debugToggleDisableAdjacentWeekPreLoading:(id)arg1;
- (void)debugToggleDisableStickyOccurrences:(id)arg1;
- (void)calendarColorDidChange:(id)arg1;
- (void)hideTravelTimeValueDidChange;
- (void)hideAllDayEventsValueDidChange;
- (void)eventsChanged:(id)arg1;
- (void)dateTimeFormatChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDayExtenders;
- (void)_updateHoursToDisplayConstraints;
- (void)_viewSizeChanged;
- (void)_scrollToFirstVisibleMinute;
- (void)_calculateFirstVisibleMinute;
- (double)_yValueFromMinute:(double)arg1;
- (double)_minuteFromYValue:(double)arg1;
- (void)_updateTimeIndicatorContainerConstraints;
- (void)_canvasDidResize:(id)arg1;
- (void)_canvasDidScroll;
- (void)infiniteSwipeController:(id)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3 inContainerWithKey:(id)arg4;
- (void)layer:(id)arg1 boundsDidChange:(struct CGRect)arg2;
- (void)_updateNowDotPositionForNewPresentationOrigin:(struct CGPoint)arg1;
- (void)selectAll;
- (void)cleanupEventDrag:(id)arg1;
- (BOOL)updateForDraggedEvent:(id)arg1 originDayController:(id)arg2 destinationPoint:(struct CGPoint)arg3 withStartDate:(id)arg4 endDate:(id)arg5;
- (BOOL)shouldAutoScrollForDragPoint:(struct CGPoint)arg1;
- (void)handleMouseUpOnDay:(id)arg1 forMouseEvent:(id)arg2;
- (void)handleMouseDraggedOnDay:(id)arg1 forMouseEvent:(id)arg2;
- (void)handleMouseDownOnDay:(id)arg1 forMouseEvent:(id)arg2 clearSelection:(BOOL)arg3;
- (void)_clearDragState;
- (void)_cancelCurrentEventDrag;
- (id)nextOccurrenceInGroup:(id)arg1 fromSelectedOccurrence:(id)arg2 forward:(BOOL)arg3;
- (BOOL)handleMouseDownOnOccurrence:(id)arg1 forMouseEvent:(id)arg2;
- (id)dateAtPointInWindow:(struct CGPoint)arg1;
- (id)_dayControllerForPointInWindowCoordinates:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1 inContainer:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1 inContainer:(id)arg2;
- (void)draggingEnded:(id)arg1 inContainer:(id)arg2;
- (void)draggingExited:(id)arg1 inContainer:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 inContainer:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 inContainer:(id)arg2;
- (void)updateOccurrencePosition:(id)arg1 forMouseDownPoint:(struct CGPoint)arg2 dragPoint:(struct CGPoint)arg3;
- (id)_debugPrefixForDragInfo:(id)arg1 inContainer:(id)arg2;
- (double)defaultAllDayHeight;
- (double)dateBannerHeight;
- (double)defaultHeaderHeight;
- (double)yValueForHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
- (double)yValueForHour:(long long)arg1 minute:(long long)arg2;
- (double)yValueForDate:(id)arg1;
- (long long)hoursToDisplay;
- (double)minimumAllDayOccurrenceHeight;
- (double)minimumOccurrenceHeight;
- (double)pixelsByMinute;
- (double)minutesByPixel;
- (void)scrollOccurrenceToVisible:(id)arg1;
- (void)recenterCanvasOnOccurrence:(id)arg1 shouldAnimate:(BOOL)arg2;
- (void)tryToSelectVisibleOccurrence;
- (id)firstVisibleOccurrence:(id)arg1;
- (void)refresh;
- (void)setStartDate:(id)arg1;
- (BOOL)shouldPulseDuringKeyboardNavigation;
- (BOOL)isDraggingOccurrences;
- (id)alldayUIOccurrencesForDate:(id)arg1;
- (BOOL)handleOccurrenceModificationForMouseEvent:(id)arg1;
- (BOOL)shouldUseSpecialColoringForToday;
- (BOOL)showAllDayInBanner;
- (Class)allDayOccurrenceClass;
- (id)ephemeralUIOccurrenceForEventOccID:(id)arg1;
- (id)uiOccForEventOccurrenceID:(id)arg1;
- (void)selectionStateChangedForEventOccurrenceIDs:(id)arg1;
- (void)fontSizeChanged;
- (void)rebuildEventStrings;
- (void)relayoutEventOccurrences;
- (BOOL)hideWeekends;
- (BOOL)hideTravelTime;
- (BOOL)hideAllDayEvents;
- (void)selectDate:(id)arg1;
- (BOOL)dateIsVisible:(id)arg1;
- (id)visibleDateRangeInCanvas;
- (long long)deltaFromDate:(id)arg1 toDate:(id)arg2;
- (long long)numberOfDays;
- (id)activeDate;
- (id)lastDate;
- (id)startDate;
- (void)datesChanged;
- (void)resetTimeIndicatorAlignmentView;
- (void)realDateDidChange;
- (void)overlayCalendarDidChange;
- (void)showWeekNumbersDidChange;
- (void)redisplay;
- (void)searchUpdated;
- (id)backgroundColorForDate:(id)arg1;
- (long long)hoursInDay;
- (id)calendar;
- (BOOL)isActive;
- (BOOL)isAnimating;
- (void)deactivate;
- (void)activate;
- (void)updateOffscreenOccurrences;
- (void)willShowWindow;
- (void)contentAreaDidEndResizeLive:(BOOL)arg1;
- (void)contentAreaWillBeginResizeLive:(BOOL)arg1;
- (id)initialFirstResponder;
- (id)nextVisibleLayerAfterLayer:(id)arg1 inDirectionForward:(BOOL)arg2;
- (id)visibleLayerForDate:(id)arg1;
- (id)selectionManager;
- (id)mainController;
- (id)viewsController;
- (id)_boundPreferences;
- (id)allDayLabelView;
- (id)canvasView;
- (void)dealloc;
- (void)loadView;
- (void)_removeTimeIndicatorAlignmentView;
- (void)_addTimeIndicatorAlignmentView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

