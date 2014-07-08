//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class NSMutableSet;

@interface CalDAVUpdateShareesQueuableOperation : CalDAVCalendarQueueableOperation
{
    NSMutableSet *_shareesToUpdate;
    NSMutableSet *_shareesToRemove;
}

+ (void)resendInvitationsForSharees:(id)arg1 withCalendarObjectIDString:(id)arg2;
@property(retain) NSMutableSet *shareesToRemove; // @synthesize shareesToRemove=_shareesToRemove;
@property(retain) NSMutableSet *shareesToUpdate; // @synthesize shareesToUpdate=_shareesToUpdate;
- (void)dealloc;
- (void)performOperation;
- (id)_deletedCalDAVCalendarServerUserItemFromAddress:(id)arg1;
- (BOOL)updateOperationWithChangeRequest:(id)arg1;
- (id)initWithChangeRequest:(id)arg1 andSession:(id)arg2;
- (id)initWithSession:(id)arg1 andCalendar:(id)arg2;

@end

