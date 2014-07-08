//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUserNotification.h"

@class CalManagedMessage, NSString, NSUserNotification;

@interface CalUserMessageNotification : NSObject <CalUserNotification>
{
    CalManagedMessage *_message;
    NSUserNotification *_notification;
}

- (void)dealloc;
- (id)buttonTitleForAction:(id)arg1;
- (id)buttonAction;
- (id)notificationWithImage:(id)arg1;
- (id)notification;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

