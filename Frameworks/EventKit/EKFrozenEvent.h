//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenCalendarItem.h>

#import "EKProtocolEventOccurrence.h"

@class NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSSet, NSString, NSTimeZone, NSURL;

@interface EKFrozenEvent : EKFrozenCalendarItem <EKProtocolEventOccurrence>
{
    BOOL dontSendNotificationForChanges;
    BOOL isDetached;
    BOOL isPhantom;
    BOOL isYearlessBirthday;
    BOOL isYearlessLeapMonthBirthday;
    int availabilityEnum;
    NSString *birthdayTitle;
    id <EKProtocolStructuredLocation> ekStructuredLocation;
    id <EKProtocolStructuredLocation> ekStructuredStartLocation;
    NSDate *endDateUnadjustedFromUTC;
    NSString *nameForBirthday;
    NSSet *notificationBoxMessageSet;
    NSString *lunarCalendarString;
    unsigned long long participantsStatus;
    NSString *privacyLevelString;
    NSString *responseComment;
    NSString *sliceParentID;
    NSString *statusString;
    double travelDuration;
}

+ (id)propertiesUnavailableForPartialObjects;
+ (Class)meltedClass;
@property(readonly, nonatomic) double travelDuration; // @synthesize travelDuration;
@property(readonly, copy, nonatomic) NSString *statusString; // @synthesize statusString;
@property(readonly, copy, nonatomic) NSString *sliceParentID; // @synthesize sliceParentID;
@property(readonly, copy, nonatomic) NSString *responseComment; // @synthesize responseComment;
@property(readonly, copy, nonatomic) NSString *privacyLevelString; // @synthesize privacyLevelString;
@property(readonly, nonatomic) unsigned long long participantsStatus; // @synthesize participantsStatus;
@property(readonly, nonatomic) NSString *lunarCalendarString; // @synthesize lunarCalendarString;
@property(readonly, nonatomic) NSSet *notificationBoxMessageSet; // @synthesize notificationBoxMessageSet;
@property(readonly, nonatomic) NSString *nameForBirthday; // @synthesize nameForBirthday;
@property(readonly, nonatomic) BOOL isYearlessLeapMonthBirthday; // @synthesize isYearlessLeapMonthBirthday;
@property(readonly, nonatomic) BOOL isYearlessBirthday; // @synthesize isYearlessBirthday;
@property(readonly, nonatomic) BOOL isPhantom; // @synthesize isPhantom;
@property(readonly, nonatomic) BOOL isDetached; // @synthesize isDetached;
@property(readonly, copy, nonatomic) NSDate *endDateUnadjustedFromUTC; // @synthesize endDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredStartLocation; // @synthesize ekStructuredStartLocation;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation; // @synthesize ekStructuredLocation;
@property(readonly, nonatomic) BOOL dontSendNotificationForChanges; // @synthesize dontSendNotificationForChanges;
@property(readonly, copy, nonatomic) NSString *birthdayTitle; // @synthesize birthdayTitle;
@property(readonly, nonatomic) int availabilityEnum; // @synthesize availabilityEnum;
- (void).cxx_destruct;
- (BOOL)isEvent;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy, nonatomic) id <EKProtocolCalendar> container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) BOOL organizedByMe;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;

@end

