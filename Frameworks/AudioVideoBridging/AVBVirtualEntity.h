//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVB17221ACMPClient.h"
#import "AVB17221AECPClient.h"
#import "AVB17221EntityPublisher.h"
#import "AVB8021ASTimeSyncClient.h"
#import "AVBInterfaceDelegate.h"
#import "AVBMSRPListenerClient.h"
#import "AVBMSRPTalkerClient.h"

@class AVB17221AEMEntity, AVB17221Entity, AVBInterface, AVBMACAddress, NSDictionary, NSMutableDictionary, NSString;

@interface AVBVirtualEntity : NSObject <AVB8021ASTimeSyncClient, AVBMSRPListenerClient, AVBMSRPTalkerClient, AVB17221EntityPublisher, AVBInterfaceDelegate, AVB17221ACMPClient, AVB17221AECPClient>
{
    unsigned long long _lockedEntityID;
    unsigned long long _acquiredEntityID;
    BOOL _persistentAcquire;
    AVBMACAddress *_acquiredMAC;
    struct dispatch_queue_s *_actionsQueue;
    struct dispatch_semaphore_s *_actionsLock;
    NSMutableDictionary *_inputStreams;
    NSMutableDictionary *_outputStreams;
    NSMutableDictionary *_unsolicitedNotificationControllers;
    unsigned short _unsolicitedSequenceID;
    struct dispatch_queue_s *_unsolicitedQueue;
    struct dispatch_queue_s *_persistentQueue;
    struct dispatch_queue_s *_notificationsQueue;
    struct IONotificationPort *_notificationPort;
    struct dispatch_queue_s *_publishingQueue;
    AVB17221Entity *_publishedEntity;
    BOOL _addedTimeSyncReference;
    struct dispatch_queue_s *_streamQueue;
    BOOL _published;
    AVB17221AEMEntity *_entityModel;
    AVBInterface *_interface;
}

@property(nonatomic, getter=isPublished) BOOL published; // @synthesize published=_published;
@property AVBInterface *interface; // @synthesize interface=_interface;
@property(copy) AVB17221AEMEntity *entityModel; // @synthesize entityModel=_entityModel;
- (void)dealloc;
- (void)notifySetObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5;
- (void)requestSetObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5;
- (void)requestSetClockDomain:(unsigned short)arg1 toClockSource:(unsigned short)arg2;
- (void)requestSetVideoCluster:(unsigned short)arg1 toFrameRate:(id)arg2;
- (void)requestSetAudioUnit:(unsigned short)arg1 toSamplingRate:(id)arg2;
- (void)didDeregisterTalkerStreamID:(unsigned long long)arg1 onMSRPTalker:(id)arg2;
- (void)didRegisterTalkerAttribute:(id)arg1 onMSRPTalker:(id)arg2;
- (void)didDeregisterListenerStreamID:(unsigned long long)arg1 onInterface:(id)arg2;
- (void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2 onInterface:(id)arg3;
- (void)removeOutputStreamForUniqueID:(unsigned short)arg1;
- (void)removeInputStreamForUniqueID:(unsigned short)arg1;
- (BOOL)hasOutputStreamForUniqueID:(unsigned short)arg1;
- (BOOL)hasInputStreamForUniqueID:(unsigned short)arg1;
- (id)outputStreamForUniqueID:(unsigned short)arg1;
- (id)inputStreamForUniqueID:(unsigned short)arg1;
- (id)createOutputStreamForUniqueID:(unsigned short)arg1;
- (id)createInputStreamForUniqueID:(unsigned short)arg1;
- (void)didAddMAAP:(id)arg1 onInterface:(id)arg2;
- (void)didAddACMP:(id)arg1 onInterface:(id)arg2;
- (void)didAddAECP:(id)arg1 onInterface:(id)arg2;
- (void)didAddTimeSync:(id)arg1 onInterface:(id)arg2;
- (void)didAddMSRPTalker:(id)arg1 onInterface:(id)arg2;
- (void)didAddMSRPListener:(id)arg1 onInterface:(id)arg2;
- (void)didAddMSRPDomain:(id)arg1 onInterface:(id)arg2;
- (void)didAddNetworkClient:(id)arg1 onInterface:(id)arg2;
- (void)didAddEntityDiscovery:(id)arg1 onInterface:(id)arg2;
- (unsigned char)processAddressAccessTLV:(id)arg1 responseTLV:(id *)arg2;
- (BOOL)supportsAddressAccessTLV:(id)arg1;
@property(readonly, retain) NSDictionary *debugInfoDictionary;
- (unsigned char)setStream:(id)arg1 toFormat:(id)arg2;
- (unsigned char)setVideoCluster:(id)arg1 formatSpecific:(id)arg2 aspectRatio:(id)arg3 colorSpace:(unsigned short)arg4 andSize:(id)arg5;
- (unsigned char)setSensorCluster:(id)arg1 samplingRate:(id)arg2;
- (unsigned char)setVideoCluster:(id)arg1 samplingRate:(id)arg2;
- (unsigned char)setAudioUnit:(id)arg1 samplingRate:(id)arg2;
- (unsigned char)stopStream:(id)arg1;
- (unsigned char)startStream:(id)arg1;
- (unsigned char)setClockDomain:(id)arg1 toClockSourceIndex:(unsigned short)arg2;
- (unsigned char)setAssociationID:(unsigned long long)arg1;
- (unsigned char)setObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5;
- (BOOL)AECPDidReceiveResponse:(id)arg1 onInterface:(id)arg2;
- (BOOL)AECPDidReceiveCommand:(id)arg1 onInterface:(id)arg2;
- (id)handleUnsupportedCommand:(id)arg1;
- (id)handleGetStreamBackupCommand:(id)arg1;
- (id)handleSetStreamBackupCommand:(id)arg1;
- (id)handleGetMemoryObjectLengthCommand:(id)arg1;
- (id)handleSetMemoryObjectLengthCommand:(id)arg1;
- (id)handleDisableStreamEncryptionCommand:(id)arg1;
- (id)handleEnableStreamEncryptionCommand:(id)arg1;
- (id)handleDisableTransportSecurityCommand:(id)arg1;
- (id)handleEnableTransportSecurityCommand:(id)arg1;
- (id)handleDeauthenticateCommand:(id)arg1;
- (id)handleAuthenticateCommand:(id)arg1;
- (id)handleAuthenticateDeleteTokenCommand:(id)arg1;
- (id)handleAuthenticateAddTokenCommand:(id)arg1;
- (id)handleAuthenticateGetIdentityCommand:(id)arg1;
- (id)handleAuthenticateGetKeychainListCommand:(id)arg1;
- (id)handleAuthenticateDeleteKeyFromChainCommand:(id)arg1;
- (id)handleAuthenticateAddKeyToChainCommand:(id)arg1;
- (id)handleAuthenticateGetKeyCommand:(id)arg1;
- (id)handleAuthenticateGetKeyListCommand:(id)arg1;
- (id)handleAuthenticateDeleteKeyCommand:(id)arg1;
- (id)handleAuthenticateAddKeyCommand:(id)arg1;
- (id)handleAbortOperationCommand:(id)arg1;
- (id)handleStarOperationCommand:(id)arg1;
- (id)handleRemoveSensorMappingCommand:(id)arg1;
- (id)handleAddSensorMappingCommand:(id)arg1;
- (id)handleGetSensorMapCommand:(id)arg1;
- (id)handleRemoveVideoMappingCommand:(id)arg1;
- (id)handleAddVideoMappingCommand:(id)arg1;
- (id)handleGetVideoMapCommand:(id)arg1;
- (id)handleRemoveAudioMappingCommand:(id)arg1;
- (id)handleAddAudioMappingCommand:(id)arg1;
- (id)handleGetAudioMapCommand:(id)arg1;
- (id)handleRebootCommand:(id)arg1;
- (id)handleGetCountersCommand:(id)arg1;
- (id)handleGetASPathCommand:(id)arg1;
- (id)handleGetAVBInfoCommand:(id)arg1;
- (id)handleDeregisterUnsolicitedNotfiicationCommand:(id)arg1;
- (id)handleRegisterUnsolicitedNotificationCommand:(id)arg1;
- (id)handleStopStreamingCommand:(id)arg1;
- (id)handleStartStreamingCommand:(id)arg1;
- (id)handleGetMatrixCommand:(id)arg1;
- (id)handleSetMatrixCommand:(id)arg1;
- (id)handleGetMixerCommand:(id)arg1;
- (id)handleSetMixerCommand:(id)arg1;
- (id)handleGetSignalSelectorCommand:(id)arg1;
- (id)handleSetSignalSelectorCommand:(id)arg1;
- (id)handleDecrementControlCommand:(id)arg1;
- (id)handleIncrementControlCommand:(id)arg1;
- (id)handleGetControlCommand:(id)arg1;
- (id)handleSetControlCommand:(id)arg1;
- (id)handleGetClockSourceCommand:(id)arg1;
- (id)handleSetClockSourceCommand:(id)arg1;
- (id)handleGetSamplingRateCommand:(id)arg1;
- (id)handleSetSamplingRateCommand:(id)arg1;
- (id)handleGetAssociationIDCommand:(id)arg1;
- (id)handleSetAssociationIDCommand:(id)arg1;
- (id)handleGetNameCommand:(id)arg1;
- (id)handleSetNameCommand:(id)arg1;
- (id)handleGetStreamInfoCommand:(id)arg1;
- (id)handleSetStreamInfoCommand:(id)arg1;
- (id)handleGetSensorFormatCommand:(id)arg1;
- (id)handleSetSensorFormatCommand:(id)arg1;
- (id)handleGetVideoFormatCommand:(id)arg1;
- (id)handleSetVideoFormatCommand:(id)arg1;
- (id)handleGetStreamFormatCommand:(id)arg1;
- (id)handleSetStreamFormatCommand:(id)arg1;
- (id)handleGetConfigurationCommand:(id)arg1;
- (id)handleSetConfigurationCommand:(id)arg1;
- (id)handleWriteDescriptorCommand:(id)arg1;
- (id)handleReadDescriptorCommand:(id)arg1;
- (id)handleEntityAvailableCommand:(id)arg1;
- (id)handleLockEntityCommand:(id)arg1;
- (id)handleAcquireEntityCommand:(id)arg1 onInterface:(id)arg2;
- (void)sendInProgressResponse:(id)arg1 ifNotSent:(id)arg2 onInterface:(id)arg3;
- (void)sendUnsolicitedResponse:(id)arg1 isCommandResponse:(BOOL)arg2;
- (BOOL)ACMPDidReceiveResponse:(id)arg1 onInterface:(id)arg2;
- (BOOL)ACMPDidReceiveCommand:(id)arg1 onInterface:(id)arg2;
- (BOOL)localAcquireEntityWithControllerEntityID:(unsigned long long)arg1 andMACAddress:(id)arg2;
- (void)didUpdateProperites:(unsigned long long)arg1;
- (void)didChangeASCapable:(BOOL)arg1 onTimeSyncService:(id)arg2;
- (void)didChangeGrandmasterTo:(unsigned long long)arg1 onTimeSyncService:(id)arg2;
- (void)unpublishEntity;
- (BOOL)publishEntity;
- (id)initWithEntityModel:(id)arg1 onInterface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

