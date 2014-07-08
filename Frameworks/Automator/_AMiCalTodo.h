//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMiCalItem.h>

@class NSDate, NSString;

@interface _AMiCalTodo : _AMiCalItem
{
}

@property(copy) NSString *url;
@property(readonly, copy) NSString *uid;
@property(copy) NSString *objectDescription;
@property(copy) NSString *summary;
@property(readonly, copy) NSDate *stampDate;
@property(readonly) long long sequence;
@property int priority;
@property(copy) NSDate *dueDate;
@property(copy) NSDate *completionDate;
- (id)soundAlarms;
- (id)openFileAlarms;
- (id)mailAlarms;
- (id)displayAlarms;

@end

