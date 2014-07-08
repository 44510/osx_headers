//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDMMCS, NSObject<OS_dispatch_semaphore>, NSRunLoop, NSString;

@interface CKDMMCSEngineContext : NSObject
{
    BOOL _stopMMCSThread;
    unsigned int _maxChunkCountForSection;
    long long _refCount;
    long long _state;
    CKDMMCS *_MMCS;
    struct __MMCSEngine *_MMCSEngine;
    NSString *_applicationBundleID;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    NSString *_protocolVersion;
}

+ (void)tearDownMMCSEngineWithContext:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 error:(id *)arg3;
+ (id)sharedContextsByBundleID;
+ (id)sharedContextsQueue;
+ (id)_appID;
@property(nonatomic) unsigned int maxChunkCountForSection; // @synthesize maxChunkCountForSection=_maxChunkCountForSection;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) struct __MMCSEngine *MMCSEngine; // @synthesize MMCSEngine=_MMCSEngine;
@property(nonatomic) __weak CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(nonatomic) BOOL stopMMCSThread; // @synthesize stopMMCSThread=_stopMMCSThread;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long refCount; // @synthesize refCount=_refCount;
- (void).cxx_destruct;
- (int)fdForItemID:(unsigned long long)arg1 itemType:(id *)arg2 error:(id *)arg3;
- (void)performOnRunLoop:(CDUnknownBlockType)arg1;
- (void)cancelRequestWithContext:(void *)arg1;
- (void)_tearDownMMCSEngine;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_setupMMCSEngineWithError:(id *)arg1;
- (void)_MMCSThread;
- (void)_MMCSTreadAbort;
- (long long)decRefCount;
- (long long)incRefCount;
- (id)description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;

@end

