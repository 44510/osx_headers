//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKEventChangeListener : NSObject
{
    id <EKEventChangeListenerDelegate> _delegate;
}

+ (id)updatedEventFor:(id)arg1 changeNotification:(id)arg2;
@property __weak id <EKEventChangeListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)eventsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

