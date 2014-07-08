//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVSpace.h"

@class NSString;

@interface WVFullscreenSpace : WVSpace
{
    int _pid;
    struct CPSProcessSerNum _psn;
    NSString *_appName;
    NSString *_originatingSpaceUUID;
    BOOL _restorable;
}

@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSString *originatingSpaceUUID; // @synthesize originatingSpaceUUID=_originatingSpaceUUID;
@property(readonly, nonatomic) struct CPSProcessSerNum psn; // @synthesize psn=_psn;
@property(nonatomic) BOOL restorable; // @synthesize restorable=_restorable;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)persistantValue;
- (id)messageTracerDescription;
- (BOOL)userSpace;
- (BOOL)fullscreen;
- (id)_createSpace:(id)arg1;
- (id)initWithDictionary:(id)arg1 space:(id)arg2;
- (id)initWithPID:(int)arg1 originatingSpaceUUID:(id)arg2 name:(const char *)arg3 restorable:(BOOL)arg4;

@end
