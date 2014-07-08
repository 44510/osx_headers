//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendarItem.h>

#import "EKProtocolReminderOccurrence.h"

@class NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSTimeZone, NSURL;

@interface CalManagedTask : CalManagedCalendarItem <EKProtocolReminderOccurrence>
{
}

+ (id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)recognizedICSProperties;
+ (id)entityName;
@property(readonly, nonatomic) BOOL cachedHasLocationAlarm;
@property(readonly, nonatomic) BOOL canEditRecurrence;
@property(readonly, nonatomic) BOOL statusCompleteNotByDate;
- (void)setDueDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *dueDateUnadjustedFromUTC;
- (void)setCompletionDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *completionDate;
- (BOOL)isReminder;
- (void)setPriorityNumber:(id)arg1;
- (id)priorityNumber;
- (id)dueDateAdjustedFromUTC;
- (id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3;
- (id)importantDate;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2;
- (id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(BOOL)arg1;
- (id)defaultAlarmsBasedOnItemAndPreferences;
@property(retain) NSDate *completedDate; // @dynamic completedDate;
- (void)updateAlarmDerivedProperties;
- (id)attributesToCompareForMerge;
- (BOOL)isExchangeCompatible;
- (id)_makeExchangeCompatible;
@property unsigned long long order;
- (void)setOrderNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *orderNumber;
- (void)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (Class)entityClass;
- (void)updateWithEntity:(id)arg1 inCalendar:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy, nonatomic) id <EKProtocolCalendar> container; // @dynamic container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy) NSString *description;
@property(retain) NSDate *dueDate; // @dynamic dueDate;
@property BOOL hasLocationAlarm; // @dynamic hasLocationAlarm;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID; // @dynamic managedObjectID;
@property(readonly, nonatomic) BOOL organizedByMe;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
@property(retain) NSNumber *percentComplete; // @dynamic percentComplete;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSNumber *priority; // @dynamic priority;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;

@end

