//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVPropFindTask.h"

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask
{
    BOOL _syncEvents;
    BOOL _syncTodos;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property(retain, nonatomic) NSDateComponents *todoFilterEndDate; // @synthesize todoFilterEndDate=_todoFilterEndDate;
@property(retain, nonatomic) NSDateComponents *todoFilterStartDate; // @synthesize todoFilterStartDate=_todoFilterStartDate;
@property(retain, nonatomic) NSDateComponents *eventFilterEndDate; // @synthesize eventFilterEndDate=_eventFilterEndDate;
@property(retain, nonatomic) NSDateComponents *eventFilterStartDate; // @synthesize eventFilterStartDate=_eventFilterStartDate;
@property(nonatomic) BOOL syncTodos; // @synthesize syncTodos=_syncTodos;
@property(nonatomic) BOOL syncEvents; // @synthesize syncEvents=_syncEvents;
- (id)requestBody;
- (void)_appendComponentFiltersToXMLData:(id)arg1;
- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_icsDateStringForNSDateComponents:(id)arg1;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

@end

