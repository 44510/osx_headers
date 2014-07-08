//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BackupWrapper : NSObject
{
    CDUnknownFunctionPointerType stub__BUUserInvokedTimeMachine;
    CDUnknownFunctionPointerType stub_BURegisterStartTimeMachineFromDock;
    CDUnknownFunctionPointerType stub_BUStartTimeMachine;
    CDUnknownFunctionPointerType stub_BUTimeMachineAction;
    CDUnknownFunctionPointerType stub__CSBackupRegisterPreAndPostBackupHooks;
    CDUnknownFunctionPointerType stub_BURegisterActivateSnapshot;
    CDUnknownFunctionPointerType stub_BURegisterDeactivateSnapshot;
    CDUnknownFunctionPointerType stub_BURegisterTimeMachineDismissed;
    CDUnknownFunctionPointerType stub_BURegisterTimeMachineRestore;
    CDUnknownFunctionPointerType stub_BURegisterRequestSnapshotImage;
    CDUnknownFunctionPointerType stub_BUActivatedSnapshot;
    CDUnknownFunctionPointerType stub_BUDeactivatedSnapshot;
    CDUnknownFunctionPointerType stub_BUUpdateSnapshotImage;
    CDUnknownFunctionPointerType stub_BUUpdateGenericSnapshotImage;
    CDUnknownFunctionPointerType stub_BUInvalidateAllSnapshotImages;
    CDUnknownFunctionPointerType stub_BUTimeMachineSetRestoreAllowed;
    CDUnknownFunctionPointerType stub_CSBackupPathIsBackupItem;
}

+ (id)sharedBackupWrapper;
- (BOOL)pathIsInTimeMachineBackup:(id)arg1;
- (void)setRestoreAllowed:(BOOL)arg1;
- (void)updateSnapshotImageWithWindow:(unsigned int)arg1 url:(struct __CFURL *)arg2;
- (void)invalidateAllSnapshotImages;
- (void)updateGenericSnapshotImage:(unsigned int)arg1;
- (void)deactivatedSnapshotWithWindow:(unsigned int)arg1 url:(struct __CFURL *)arg2;
- (void)activatedSnapshotWithWindow:(unsigned int)arg1 url:(struct __CFURL *)arg2;
- (void)registerTimeMachineRequestSnapshot:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)registerTimeMachineRestore:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)registerTimeMachineDismissed:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)registerDeactivateSnapshot:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)registerActivateSnapshot:(const void *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)registerPreBackupHook:(CDUnknownFunctionPointerType)arg1 postBackupHook:(CDUnknownFunctionPointerType)arg2;
- (void)action:(int)arg1;
- (unsigned char)startupTimeMachineWithWindow:(unsigned int)arg1 url:(struct __CFURL *)arg2 options:(unsigned long long)arg3;
- (void)registerStartTimeMachineFromDock:(CDUnknownFunctionPointerType)arg1;
- (void)userInvokedTimeMachine;
- (id)init;

@end

