//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface MFMessageContext : NSObject
{
    NSOperationQueue *_filesystemQueue;
    NSOperationQueue *_waitingQueue;
}

+ (id)sharedContext;
@property(readonly, nonatomic) NSOperationQueue *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(readonly, nonatomic) NSOperationQueue *filesystemQueue; // @synthesize filesystemQueue=_filesystemQueue;
- (void).cxx_destruct;
- (id)async_cacheHeaderAndBodyForMessage:(id)arg1 monitor:(id)arg2;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2;
- (id)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)dealloc;
- (id)init;

@end

