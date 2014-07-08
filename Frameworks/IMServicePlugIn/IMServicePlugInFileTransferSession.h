//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMServicePlugInFileTransferSession : NSObject
{
    struct _IMServicePlugInFileTransferSessionInternal *_internal;
}

+ (id)_sessionWithGUID:(id)arg1;
+ (id)_allSessions;
+ (void)_unregisterSession:(id)arg1;
+ (void)_registerSession:(id)arg1;
@property(readonly) NSString *containerName;
@property(readonly) NSString *guid;
- (void)_fileTransferDidUpdate:(id)arg1;
- (void)_tickUpdateNotification:(id)arg1;
- (id)_basePath;
- (void)_setBasePath:(id)arg1;
- (unsigned long long)_totalBytes;
- (unsigned long long)_transferredBytes;
- (id)_fileTransferForPath:(id)arg1;
- (id)_allFileTransfers;
- (void)_addFileTransfer:(id)arg1;
- (id)_normalizedPathForPath:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_initWithGUID:(id)arg1 pathToTransferMap:(id)arg2 containerName:(id)arg3;

@end

