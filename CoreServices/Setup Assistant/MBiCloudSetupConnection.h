//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface MBiCloudSetupConnection : NSObject
{
    NSObject<OS_dispatch_queue> *eventQueue;
    NSObject<OS_xpc_object> *connection;
}

- (BOOL)moveIncompatibleSoftwareToTrashFolder:(id)arg1 withNames:(id)arg2;
- (BOOL)setFMMOfferedOnThisMachine:(BOOL)arg1;
- (BOOL)saveTOSData:(id)arg1 filename:(id)arg2;
- (BOOL)connectToServer;
- (void)dealloc;
- (id)init;

@end

