//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECEvent, ECSBGroup;

@protocol ECSBGridActionHandling <NSObject>
- (void)performGridActionAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;

@optional
- (BOOL)performDropAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;
- (BOOL)canAcceptDropAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;
- (void)hideGroup:(ECSBGroup *)arg1 sender:(id)arg2;
- (void)showGroup:(ECSBGroup *)arg1 sender:(id)arg2;
- (void)gridItemSelectedAtIndex:(unsigned long long)arg1 sender:(id)arg2;
- (void)cancelGridActionWithEvent:(ECEvent *)arg1 sender:(id)arg2;
@end

