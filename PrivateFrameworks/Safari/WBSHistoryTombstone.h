//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WBSHistoryTombstone : NSObject
{
    NSString *_urlString;
    double _startTime;
    double _endTime;
    long long _generation;
}

@property(readonly, nonatomic) long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)matchesVisitTime:(double)arg1 urlString:(id)arg2;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 generation:(long long)arg4;

@end

