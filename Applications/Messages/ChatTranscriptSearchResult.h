//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface ChatTranscriptSearchResult : NSObject
{
    struct __MDItem *_item;
    NSString *_path;
    NSDate *_dateCreated;
    NSArray *_recipients;
    NSString *_roomName;
    NSString *_serviceName;
    NSString *_author;
}

- (BOOL)isProbablyAdHoc;
- (id)serviceName;
- (id)description;
- (id)roomName;
- (id)participants;
- (id)account;
- (id)recipients;
- (id)dateCreated;
- (id)path;
- (void)_retrieveMetadata;
- (void)dealloc;
- (id)initWithItem:(struct __MDItem *)arg1 dateCreated:(id)arg2 recipients:(id)arg3 roomName:(id)arg4 serviceName:(id)arg5 author:(id)arg6;

@end
