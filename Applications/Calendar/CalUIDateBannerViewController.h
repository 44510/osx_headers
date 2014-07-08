//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISCViewController.h"

#import "CalUIDateBannerStringControllerSubscriber.h"

@class CalUIAXTextField, CalUIDateBannerStringController, CalUIDayCanvasController, CalUITodayDateStringView, NSArray, NSDictionary, NSLayoutConstraint, NSMutableDictionary, NSString, NSView;

@interface CalUIDateBannerViewController : ISCViewController <CalUIDateBannerStringControllerSubscriber>
{
    BOOL _showDateStrings;
    BOOL _isVisible;
    BOOL _isToday;
    BOOL _showingLunarDate;
    CalUIDayCanvasController *_canvasController;
    id <CalUIAllDayDraggingDelegate> _draggingDelegate;
    NSView *_dateContainer;
    NSView *_dateStringContainer;
    CalUIAXTextField *_dateStringTextField;
    CalUITodayDateStringView *_todayDateStringView;
    CalUIAXTextField *_lunarDateStringTextField;
    NSView *_lunarMonthUnderline;
    NSArray *_dateStrings;
    long long _currentDateStringFormatRequest;
    NSDictionary *_views;
    NSDictionary *_metrics;
    NSMutableDictionary *_cachedConstraints;
    NSLayoutConstraint *_topInsetConstraint;
    CalUIDateBannerStringController *_stringController;
}

+ (void)_updateDateString:(id)arg1 forDate:(id)arg2;
+ (void)clearDateStringCache;
+ (id)dateStringsForDate:(id)arg1;
+ (void)initialize;
@property(retain) CalUIDateBannerStringController *stringController; // @synthesize stringController=_stringController;
@property BOOL showingLunarDate; // @synthesize showingLunarDate=_showingLunarDate;
@property BOOL isToday; // @synthesize isToday=_isToday;
@property BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(retain) NSLayoutConstraint *topInsetConstraint; // @synthesize topInsetConstraint=_topInsetConstraint;
@property(retain) NSMutableDictionary *cachedConstraints; // @synthesize cachedConstraints=_cachedConstraints;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) NSDictionary *views; // @synthesize views=_views;
@property long long currentDateStringFormatRequest; // @synthesize currentDateStringFormatRequest=_currentDateStringFormatRequest;
@property(retain) NSArray *dateStrings; // @synthesize dateStrings=_dateStrings;
@property(retain) NSView *lunarMonthUnderline; // @synthesize lunarMonthUnderline=_lunarMonthUnderline;
@property(retain) CalUIAXTextField *lunarDateStringTextField; // @synthesize lunarDateStringTextField=_lunarDateStringTextField;
@property(retain) CalUITodayDateStringView *todayDateStringView; // @synthesize todayDateStringView=_todayDateStringView;
@property(retain) CalUIAXTextField *dateStringTextField; // @synthesize dateStringTextField=_dateStringTextField;
@property(retain) NSView *dateStringContainer; // @synthesize dateStringContainer=_dateStringContainer;
@property(retain) NSView *dateContainer; // @synthesize dateContainer=_dateContainer;
@property BOOL showDateStrings; // @synthesize showDateStrings=_showDateStrings;
@property id <CalUIAllDayDraggingDelegate> draggingDelegate; // @synthesize draggingDelegate=_draggingDelegate;
@property __weak CalUIDayCanvasController *canvasController; // @synthesize canvasController=_canvasController;
- (void).cxx_destruct;
- (void)useDateStringFormat:(long long)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)shouldShowLunarUnderline;
- (void)updateLunarDate;
- (id)dateStringTextFieldForBaselineAlignment;
- (void)updateDateStringField;
- (void)updateAppearance;
- (id)date;
- (void)realDateDidChange;
- (void)loadView;
- (void)_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithStringController:(id)arg1 showDateStrings:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

