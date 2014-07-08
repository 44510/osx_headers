//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SEDataItem.h"

@class NSAppleEventDescriptor, NSAttributedString, NSDate;

@interface SEEventLogItem : SEDataItem
{
    NSDate *_date;
    NSAttributedString *_source;
    NSAppleEventDescriptor *_descriptor;
}

+ (id)logItemForParentItem:(id)arg1;
- (BOOL)shouldLogForOptions:(int)arg1;
- (id)objectValueForCellName:(id)arg1;
- (id)sessionItem;
- (id)sourceOfChildren:(int)arg1 forLevel:(int)arg2;
- (id)source:(int)arg1 forLevel:(int)arg2;
- (id)sourceOfChildren:(int)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)prefix;
- (void)setDescriptor:(id)arg1;
- (id)descriptor;
- (void)setDate:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initForDataSource:(id)arg1 parentItem:(id)arg2;
- (id)initWithParentItem:(id)arg1;

@end

