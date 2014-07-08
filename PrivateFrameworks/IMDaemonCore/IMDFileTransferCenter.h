//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMFileCopierDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate>
{
    NSMutableDictionary *_guidToCopierMap;
    NSMutableDictionary *_guidToSimpleCopierMap;
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_progressMap;
    NSMutableSet *_activeTransfers;
    NSString *_contextStamp;
    NSTimer *_transferTimer;
    NSMutableArray *_transferringTransfers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *contextStamp; // @synthesize contextStamp=_contextStamp;
- (void)_handleFileTransferRemoved:(id)arg1;
- (void)_handleFileTransferStopped:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4 postNotification:(BOOL)arg5;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 fromPid:(int)arg3;
- (void)_handleSendFileTransfer:(id)arg1;
- (id)_allFileTransfers;
- (void)acceptTransfer:(id)arg1 path:(id)arg2;
- (void)failTransfer:(id)arg1 error:(id)arg2;
- (void)resetTransferAndPostError:(id)arg1 error:(id)arg2;
- (void)failTransfer:(id)arg1 reason:(long long)arg2;
- (void)endTransfer:(id)arg1;
- (void)startFinalizingTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1 currentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)startTransfer:(id)arg1;
- (void)registerStandaloneTransfer:(id)arg1;
- (void)removeTransferForGUID:(id)arg1;
- (id)transferForGUID:(id)arg1;
- (void)addTransfer:(id)arg1 forGUID:(id)arg2;
- (void)removeUnassignedTransfers;
- (void)assignTransfer:(id)arg1 toAccount:(id)arg2 otherPerson:(id)arg3;
- (id)guidForNewOutgoingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidForNewIncomingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (void)makeNewOutgoingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (void)makeNewIncomingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (void)_transferTimerTick:(id)arg1;
- (void)_removeTransferringTransfer:(id)arg1;
- (void)_addTransferringTransfer:(id)arg1;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_addActiveTransfer:(id)arg1;
@property(readonly, nonatomic) BOOL hasActiveFileTransfers;
- (id)_removeWrapperForTransfer:(id)arg1;
- (id)_createWrapperForTransfer:(id)arg1;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)arg1 toDirectory:(id)arg2;
- (void)addDefaultGatekeeperPropertiesToDirectory:(id)arg1;
- (void)_addGatekeeperProperties:(id)arg1 toDirectory:(id)arg2;
- (int)_addGatekeeperProperties:(id)arg1 toFileAtPath:(id)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)archiveFileTransfer:(id)arg1;
- (void)_archiveFileTransfer:(id)arg1;
- (id)_dictionaryRepresentationsForFileTransfers:(id)arg1 toSave:(BOOL)arg2;
- (id)_temporaryPathForGUID:(id)arg1 filename:(id)arg2;
- (void)_postUpdated:(id)arg1;
- (void)_updateContextStamp;
- (void)_completeProgressForTransferGUID:(id)arg1;
- (void)_clearProgressForTransferGUID:(id)arg1;
- (id)_progressForTransferGUID:(id)arg1 allowCreate:(BOOL)arg2 path:(id)arg3;
- (void)dealloc;
- (id)init;

@end

