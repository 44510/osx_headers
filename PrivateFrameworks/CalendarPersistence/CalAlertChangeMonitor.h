//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistenceMonitor.h>

@interface CalAlertChangeMonitor : CalPersistenceMonitor
{
}

+ (void)completelyDisableAlertsInThisProcess;
+ (void)initialize;
- (void)performStartRemindersNotificationCenterWidget;
- (void)performDeleteMessages:(id)arg1;
- (void)performDeleteAlarms:(id)arg1;
- (void)performDeliverMessages:(id)arg1;
- (void)performScheduleAlarms:(id)arg1;
- (void)performFindAndScheduleAlarms:(id)arg1;
- (BOOL)_managedTask:(id)arg1 matchesWidgetPredicateForDate:(id)arg2;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (BOOL)isInterestedInContext:(id)arg1;

@end
