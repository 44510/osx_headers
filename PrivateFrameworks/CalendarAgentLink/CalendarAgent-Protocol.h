//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalendarLink.h"

@class CalDateRange, CalDelegateUserInfo, CalLocation, NSArray, NSData, NSDate, NSString;

@protocol CalendarAgent <CalendarLink>
- (void)calMeCardWithReply:(void (^)(CalMeCard *))arg1;
- (void)authenticateWithPrincipalOrAccountID:(NSString *)arg1 password:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)cacheWeatherForEventsWithStartDateBetweenStart:(NSDate *)arg1 andEnd:(NSDate *)arg2;
- (void)sendEmailTo:(NSArray *)arg1 withSubject:(NSString *)arg2 withBody:(NSString *)arg3 withAttachment:(NSString *)arg4 attachmentFilename:(NSString *)arg5;
- (void)restoreToBackupWithBookmark:(NSData *)arg1 reply:(void (^)(BOOL))arg2;
- (void)travelTimeFrom:(CalLocation *)arg1 to:(CalLocation *)arg2 arrivalDate:(NSDate *)arg3 withRouteTypes:(NSArray *)arg4 withCompletionBlock:(void (^)(NSDictionary *))arg5;
- (void)travelTimeFrom:(CalLocation *)arg1 to:(CalLocation *)arg2 arrivalDate:(NSDate *)arg3 withRouteType:(NSString *)arg4 withCompletionBlock:(void (^)(CalRoute *, NSError *))arg5;
- (void)toggleAllowWriteForGrantedDelegate:(CalDelegateUserInfo *)arg1 inAccountWithObjectIDString:(NSString *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)removeGrantedDelegate:(CalDelegateUserInfo *)arg1 fromAccountWithObjectIDString:(NSString *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)addGrantedDelegate:(CalDelegateUserInfo *)arg1 toAccountWithObjectIDString:(NSString *)arg2 reply:(void (^)(CalDelegateUserInfo *, NSError *))arg3;
- (void)getGrantedDelegateListForAccountWithObjectIDString:(NSString *)arg1 reply:(void (^)(NSArray *, NSString *, NSError *))arg2;
- (void)addDelegate:(CalDelegateUserInfo *)arg1 toAccountWithObjectIDString:(NSString *)arg2 reply:(void (^)(NSString *, CalDelegateUserInfo *, NSError *))arg3;
- (void)refreshDelegateListForAccountWithObjectIDString:(NSString *)arg1 reply:(void (^)(NSArray *, NSString *, NSError *))arg2;
- (void)recentContactSearchWithSearchString:(NSString *)arg1 sourceID:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)expandGroupForCalDAVprincipalWithObjectIDString:(NSString *)arg1 groupIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)principalPropertSearchForCalDAVPrincipalWithObjectIDString:(NSString *)arg1 searchString:(NSString *)arg2 searchTypes:(NSArray *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)isLocalToServerInProgressForEvents:(void (^)(BOOL))arg1;
- (void)isLocalToServerInProgressForReminders:(void (^)(BOOL))arg1;
- (void)isPersistenceAvailableWithReply:(void (^)(BOOL))arg1;
- (void)getUserAvailabilityForObjectID:(NSString *)arg1 maskedSharedUID:(NSString *)arg2 addresses:(NSArray *)arg3 timeRange:(CalDateRange *)arg4 reply:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)setOfficeHoursForPrincipalObjectIDString:(NSString *)arg1 officeHours:(NSData *)arg2;
- (void)getOfficeHoursForPrincipalObjectIDString:(NSString *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)setDefaultCalendarForRemindersToCalendarIdentifier:(NSString *)arg1;
- (void)getDefaultCalendarForRemindersCalendarIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)setDefaultCalendarForEventsToCalendarIdentifier:(NSString *)arg1;
- (void)getDefaultCalendarForEventsCalendarIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)getPreference:(NSString *)arg1 reply:(void (^)(NSObject *))arg2;
- (void)refreshAllWithFlags:(long long)arg1;
- (void)refreshPrincipalWithObjectID:(NSString *)arg1 withFlags:(long long)arg2;
- (void)refreshNodeWithID:(NSString *)arg1 withFlags:(long long)arg2;
- (void)refreshPropertiesOnAllPrincipalsWithBackoff:(unsigned long long)arg1;
- (void)updateSessionCacheWithReply:(void (^)(NSDictionary *))arg1;
- (void)stopDebugQueueWithObjectID:(NSString *)arg1;
- (void)startDebugQueueWithObjectID:(NSString *)arg1;
- (void)sessionDebugInfoWithObjectID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)fullySynchronizeAllSessions;
- (void)reactivateSessionsWithObjectIDs:(NSArray *)arg1;
- (void)refreshSettingsChangedWithObjectIDs:(NSArray *)arg1;
- (void)calDAVCalendarDeletedWithUID:(NSString *)arg1;
- (void)principalDeletedWithObjectID:(NSString *)arg1;
- (void)updatePushStateForObjectIDs:(NSArray *)arg1;
- (void)reloadNetworkObjects;
- (void)registerWithAgent;
- (void)disableBirthdayCalendars;
- (void)addBirthdayCalendars;
- (void)disableHolidayCalendars;
- (void)addHolidayCalendars;
- (void)reinviteSharees:(NSArray *)arg1 withCalendarObjectIDString:(NSString *)arg2;
- (void)setupCoreDataXPCServerWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)updateCalendarListBadgeCounts:(NSArray *)arg1;
- (void)getBadgeCountForReminders:(void (^)(NSNumber *))arg1;
- (void)getBadgeCountForCalendar:(void (^)(NSNumber *))arg1;
- (void)updateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate;
@end

