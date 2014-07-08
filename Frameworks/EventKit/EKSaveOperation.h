//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKUndoableOperation.h>

@interface EKSaveOperation : EKUndoableOperation
{
}

+ (id)changedLocationActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedTravelTimeActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedAllDayActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)attendeesModifiedActionName:(id)arg1;
+ (id)attendeesRemovedActionName:(id)arg1;
+ (id)attendeesAddedActionName:(id)arg1;
+ (id)attachmentsModifiedActionName:(id)arg1;
+ (id)attachmentsRemovedActionName:(id)arg1;
+ (id)attachmentsAddedActionName:(id)arg1;
+ (id)alarmsModifiedActionName:(id)arg1;
+ (id)alarmsRemovedActionName:(id)arg1;
+ (id)alarmsAddedActionName:(id)arg1;
+ (id)changedResponseCommentActionName:(id)arg1;
+ (id)changedParticipationStatusActionName:(id)arg1;
+ (id)changedAttendeeCommentActionName:(id)arg1;
+ (id)changedAttachmentPermissionsActionName:(id)arg1;
+ (id)changedURLActionName:(id)arg1;
+ (id)changedNotesActionName:(id)arg1;
+ (id)changedPrivacyActionName:(id)arg1;
+ (id)changedAvailablityActionName:(id)arg1;
+ (id)changedCalendarActionName:(id)arg1;
+ (id)changedTimeZoneActionName:(id)arg1;
+ (id)changedTitleActionName:(id)arg1;
+ (id)changedTimeActionName:(id)arg1;
+ (id)genericEventChangedActionName:(id)arg1;
+ (id)multipleEventsChangedActionName;
- (Class)_inverseOperationClass;
- (void)execute;
- (id)actionName;

@end

