//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemindersList.h"

@interface RemindersScheduledList : RemindersList
{
}

+ (id)matchForActivity:(id)arg1;
- (BOOL)isMatchForActivity:(id)arg1;
- (id)representedActivity;
- (id)image;
- (long long)displayOrder;
- (id)swipeType;
- (void)acceptReminder:(id)arg1;
- (id)identifier;
- (BOOL)hasCompletedReminders;
- (unsigned long long)numberOfCompletedReminders;
- (id)completedReminders;
- (id)incompleteReminders;
- (id)fetchReminders;
- (BOOL)acceptsReminders;
- (BOOL)isReorderable;
- (id)title;

@end

