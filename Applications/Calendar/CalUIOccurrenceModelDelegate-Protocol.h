//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalUIOccurrenceChangeInfo, CalUIOccurrenceModel;

@protocol CalUIOccurrenceModelDelegate <NSObject>
- (void)occurrenceModelDidUpdate:(CalUIOccurrenceModel *)arg1 withChangeInfo:(CalUIOccurrenceChangeInfo *)arg2;
- (void)occurrenceModelWillUpdate:(CalUIOccurrenceModel *)arg1;
@end

