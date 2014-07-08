//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKSource.h"

#import "CalUICalendarListViewNode.h"

@class NSString, NSURL;

@interface EKSource (CalendarListViewExtensions) <CalUICalendarListViewNode>
+ (id)delegateNodeColor;
@property(readonly, nonatomic) BOOL isReorderable;
- (void)removeChildNodes:(id)arg1;
- (void)removeChildNode:(id)arg1;
- (void)addChildNodes:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)childNodeAtIndex:(unsigned long long)arg1;
- (id)parentNode;
- (long long)calendarListNotificationCount;
- (int)order;
- (id)dataSourceContextForEditing;
- (BOOL)isRemoteCalendarOrGroup;
- (BOOL)isAffectingAvailability;
- (id)accountID;
- (BOOL)hasSharees;
@property(readonly, nonatomic) NSURL *publishURL;
- (BOOL)isSharedByMe;
- (BOOL)isSharedToMe;
- (BOOL)supportsSharing;
- (BOOL)isShared;
- (BOOL)isSubscribed;
- (BOOL)supportsCalDAVPublish;
- (BOOL)isCalDAVPublished;
- (BOOL)supportsPublishing;
- (BOOL)isPublished;
@property(readonly, nonatomic) BOOL isRenameable;
- (BOOL)isEditable;
- (BOOL)isBusy;
- (BOOL)isEnabledForCalendar;
- (id)groupTitle;
- (id)displayTitle;
- (id)color;
- (id)objectValue;
- (id)uid;
- (unsigned long long)numberOfChildNodes;
- (id)childNodes;
- (BOOL)isExpandable;
- (BOOL)isCalendarDelegate;
@property(readonly, nonatomic) BOOL isDeletable;
- (BOOL)isRefreshable;
- (BOOL)isWritableCalendar;
- (BOOL)isCalDAV;
- (BOOL)isExchange;
@property(readonly, nonatomic) BOOL isFacebookBirthdayCalendar;
- (BOOL)isBirthdayCalendar;
- (BOOL)isLocalCalendarGroup;
- (BOOL)isLocalCalendar;
- (BOOL)isCalendarType;
- (BOOL)isCalendarGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title;
@end

