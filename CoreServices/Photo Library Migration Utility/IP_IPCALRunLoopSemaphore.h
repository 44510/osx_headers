//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface IP_IPCALRunLoopSemaphore : NSObject
{
    struct __CFRunLoop *_rloop;
    long long _count;
    int _pipe[2];
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_socketSource;
    NSLock *_countLock;
}

- (long long)value;
- (void)up;
- (void)down;
- (void)dealloc;
- (id)initWithCFRunLoop:(struct __CFRunLoop *)arg1;
- (id)init;
- (void)awake;

@end

