//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIOccurrenceContainerView.h"

#import "CalUIAllDayDraggingDelegate.h"
#import "CalUIBoxOccurrenceContainer.h"

@class CalUIDayCanvasController, InfiniteSwipeController, NSLayoutConstraint, NSMutableDictionary, NSMutableSet, NSScrollView, NSString;

@interface CalUIAllDayAreaViewController : CalUIOccurrenceContainerView <CalUIBoxOccurrenceContainer, CalUIAllDayDraggingDelegate>
{
    BOOL needsUpdateOccurrenceConstraints;
    BOOL _lastOccurrenceLayoutWasAligned;
    CalUIDayCanvasController *_canvasController;
    NSScrollView *_allDayView;
    InfiniteSwipeController *_infiniteController;
    NSString *_containerKey;
    NSMutableSet *_inactiveOccurrenceCache;
    NSMutableSet *_visibleOccurrences;
    NSLayoutConstraint *_minimumAllDayHeightConstraint;
    NSLayoutConstraint *_maximumAllDayHeightConstraint;
    NSMutableDictionary *_occurrenceBottomConstraints;
}

@property BOOL lastOccurrenceLayoutWasAligned; // @synthesize lastOccurrenceLayoutWasAligned=_lastOccurrenceLayoutWasAligned;
@property(retain) NSMutableDictionary *occurrenceBottomConstraints; // @synthesize occurrenceBottomConstraints=_occurrenceBottomConstraints;
@property(retain) NSLayoutConstraint *maximumAllDayHeightConstraint; // @synthesize maximumAllDayHeightConstraint=_maximumAllDayHeightConstraint;
@property(retain) NSLayoutConstraint *minimumAllDayHeightConstraint; // @synthesize minimumAllDayHeightConstraint=_minimumAllDayHeightConstraint;
@property(retain) NSMutableSet *visibleOccurrences; // @synthesize visibleOccurrences=_visibleOccurrences;
@property(retain) NSMutableSet *inactiveOccurrenceCache; // @synthesize inactiveOccurrenceCache=_inactiveOccurrenceCache;
@property(retain) NSString *containerKey; // @synthesize containerKey=_containerKey;
@property(retain) InfiniteSwipeController *infiniteController; // @synthesize infiniteController=_infiniteController;
@property(retain) NSScrollView *allDayView; // @synthesize allDayView=_allDayView;
@property __weak CalUIDayCanvasController *canvasController; // @synthesize canvasController=_canvasController;
- (void)setNeedsUpdateOccurrenceConstraints:(BOOL)arg1;
- (BOOL)needsUpdateOccurrenceConstraints;
- (void).cxx_destruct;
- (void)scrollOccurrenceToVisible:(id)arg1;
- (double)startTimeIncrementForArrowKey:(unsigned short)arg1;
- (int)backgroundColorOption;
- (BOOL)shouldShowTravelTime;
- (void)cleanupEventDrag:(id)arg1;
- (void)updateForDraggedOccurrence:(id)arg1 destinationPoint:(struct CGPoint)arg2 withStartDate:(id)arg3 endDate:(id)arg4;
- (BOOL)shouldBeginDragForOccurrence:(id)arg1 mouseDownPoint:(struct CGPoint)arg2 dragPoint:(struct CGPoint)arg3;
- (BOOL)shouldAutoScrollForDragPoint:(struct CGPoint)arg1;
- (id)dateAtPointInWindow:(struct CGPoint)arg1;
- (double)yValueForDate:(id)arg1;
- (long long)minutesForOffset:(double)arg1;
- (long long)minutesForPointInWindow:(struct CGPoint)arg1;
- (id)window;
- (BOOL)isAllDayContainer;
- (void)keyDown:(id)arg1;
- (BOOL)occurrenceIsVisible:(id)arg1;
- (BOOL)tryToSelectVisibleOccurrence;
- (void)colorDidChangeForCalendar:(id)arg1;
- (void)occurrencesRequireRelayout:(id)arg1;
- (id)uiOccurrencesForDate:(id)arg1;
- (void)layoutOccurrences;
- (void)_removeBottomConstraintForUIOccurrence:(id)arg1;
- (void)_addBottomConstraintForUIOccurrence:(id)arg1;
- (id)_visibleRangeForOccurrence:(id)arg1;
- (void)promoteEphemeralOccurrence:(id)arg1;
- (Class)occurrenceClass;
- (void)setOccurrences:(id)arg1;
- (void)layoutOccurrencesIfAlignmentChanged;
- (void)didEndScrollingAlongInfiniteAxis;
- (void)didBeginScrollingAlongInfiniteAxis;
- (void)didScrollVertically;
- (void)didScrollAlongInfiniteAxis;
- (void)firstVisibleDateDidChange;
- (void)searchUpdated;
- (void)realDateDidChange;
- (void)rebuildStrings;
- (void)fontSizeChanged;
- (double)minimumAllDayAreaHeight;
- (double)occurrenceRightInset;
- (void)hideWeekendsChanged;
- (void)selectionStateChangedForEventOccurrenceIDs:(id)arg1;
- (void)eventsChanged:(id)arg1;
- (id)filteredEventsToDisplay:(id)arg1;
- (void)removeOccurrence:(id)arg1;
- (id)_addBoxOccurrenceWithEvent:(id)arg1 isEphemeral:(BOOL)arg2;
- (id)addUIOccurrenceWithEvent:(id)arg1 isEphemeral:(BOOL)arg2;
- (void)updateViewController:(id)arg1;
- (void)dealloc;
- (id)initWithInfiniteController:(id)arg1 containerKey:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

