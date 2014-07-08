//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKReminder.h"

@interface EKReminder (Utilities)
- (void)setSingleAlarm:(id)arg1;
- (id)singleAlarm;
- (id)allDayDueDate;
- (BOOL)isPastDue;
- (BOOL)isOverdue;
- (void)setAlarmTimeAndSyncDueDate:(id)arg1;
- (void)setDueDateAndSyncAlarm:(id)arg1;
- (void)setRecurrenceEndDate:(id)arg1;
- (id)recurrenceEndDate;
- (id)alarmTime;
- (id)remindMeTime;
- (BOOL)supportsLocation;
- (BOOL)hasData;
- (id)completedStatus;
- (unsigned long long)sortFriendlyPriority;
- (id)groupFriendlyCompletionDateOrDueDate;
- (id)sortFriendlyCompletionDate;
- (id)sortFriendlyDueDate;
- (id)groupFriendlyDueDate;
- (id)groupFriendlyCompletionDate;
@end

