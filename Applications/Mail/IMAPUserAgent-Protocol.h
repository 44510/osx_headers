//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMessage, NSArray;

@protocol IMAPUserAgent <NSObject>
- (BOOL)doParentalControlProcessingForMessage:(MCMessage *)arg1;
- (BOOL)addInvitationsToCalendarAutomatically;
- (void)addInvitationsToCalendarFromMessages:(NSArray *)arg1;
- (NSArray *)headersRequiredForParentalControl;
- (NSArray *)headersRequiredForRouting;
@end

