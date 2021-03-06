//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface iPodInfo : NSObject
{
    NSNumber *_firewireGUID;
    NSString *_mountpoint;
    NSString *_identifier;
    NSString *_name;
    NSString *_revision;
    unsigned int _lockCount;
    unsigned int _handled:1;
    unsigned int _diskMode:1;
    unsigned int _mounted:1;
    unsigned int _configured:1;
    unsigned int _injectRequested:1;
    unsigned int _ejectRequested:1;
    unsigned int _unmountDisallowedDueToLock:1;
    unsigned int _userClient;
    unsigned int _type;
    unsigned int _style;
}

+ (unsigned int)totalLockCount;
+ (id)iPodInfoWithGUID:(id)arg1 diskIdentifier:(id)arg2 mountpoint:(id)arg3 name:(id)arg4 type:(unsigned int)arg5 style:(unsigned int)arg6;
+ (id)iPodInfoWithGUID:(id)arg1 type:(unsigned int)arg2 style:(unsigned int)arg3;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *mountpoint; // @synthesize mountpoint=_mountpoint;
@property(retain, nonatomic) NSNumber *GUID; // @synthesize GUID=_firewireGUID;
@property(retain, nonatomic) NSString *diskIdentifier; // @synthesize diskIdentifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned int userClient; // @synthesize userClient=_userClient;
@property(nonatomic) BOOL ejectRequested; // @synthesize ejectRequested=_ejectRequested;
@property(nonatomic) BOOL injectRequested; // @synthesize injectRequested=_injectRequested;
@property(nonatomic) BOOL configured; // @synthesize configured=_configured;
@property(nonatomic) BOOL mounted; // @synthesize mounted=_mounted;
@property(nonatomic) BOOL diskMode; // @synthesize diskMode=_diskMode;
@property(nonatomic) BOOL handled; // @synthesize handled=_handled;
- (void)setUnmountDisallowedDueToLock:(BOOL)arg1;
- (BOOL)unmountDisallowedDueToLock;
- (void)decrementLockCount;
- (void)incrementLockCount;
- (unsigned int)lockCount;
- (void)setDiskIdentifier:(id)arg1 mountpoint:(id)arg2 name:(id)arg3;
- (void)setName:(id)arg1 mountpoint:(id)arg2;
- (void)dealloc;
- (id)initWithGUID:(id)arg1 diskIdentifier:(id)arg2 mountpoint:(id)arg3 name:(id)arg4 type:(unsigned int)arg5 style:(unsigned int)arg6;

@end

