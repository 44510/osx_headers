//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UAMessageTracer : NSObject
{
    struct __asl_object_s *_aslClient;
}

+ (void)logTraceForVolumeUnmountSuccess:(id)arg1 wasForceUnmounted:(BOOL)arg2;
+ (void)logTraceForVolumeUnmountFailure:(id)arg1 dissenter:(int)arg2 dissenterStatus:(int)arg3;
+ (id)sharedMessageTracer;
- (void)dealloc;
- (id)init;
- (void)_logTraceForVolumeUnmountSuccess:(id)arg1 wasForceUnmounted:(BOOL)arg2;
- (void)_logTraceForVolumeUnmountFailure:(id)arg1 dissenter:(int)arg2 dissenterStatus:(int)arg3;
- (id)_fileListForProcess:(id)arg1 onVolume:(id)arg2;

@end

