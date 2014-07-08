//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineComponent.h"
#import "CPLPlatformImplementation.h"

@class CPLChangeBatch, CPLRecordChange, CPLResource, NSData, NSError, NSString;

@protocol CPLEngineTransportImplementation <CPLPlatformImplementation, CPLEngineComponent>
- (id <CPLEngineTransportRemoveLibraryTask>)removeLibraryTaskWithCompletionHandler:(void (^)(NSError *))arg1;
- (id <CPLEngineTransportResourcePublishTask>)resourcePublishTaskForResource:(CPLResource *)arg1 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg2;
- (id <CPLEngineTransportResourceDownloadTask>)resourceDownloadTaskForResource:(CPLResource *)arg1 clientBundleID:(NSString *)arg2 didStartHandler:(void (^)(void))arg3 progressHandler:(void (^)(float))arg4 completionHandler:(void (^)(NSError *))arg5;
- (id <CPLEngineTransportDownloadBatchTask>)downloadBatchTaskForSyncAnchor:(NSData *)arg1 completionHandler:(void (^)(CPLChangeBatch *, NSData *, BOOL, NSError *))arg2;
- (id <CPLEngineTransportUploadBatchTask>)uploadBatchTaskForBatch:(CPLChangeBatch *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id <CPLEngineTransportSetupTask>)setupTaskWithCompletionHandler:(void (^)(id <CPLEngineStoreUserIdentifier>, NSError *))arg1;

@optional
- (NSData *)simpleDataForSyncAnchor:(NSData *)arg1;
- (NSError *)bestErrorForUnderlyingError:(NSError *)arg1;
- (id <CPLEngineTransportResourceUploadTask>)resourceUploadTaskForResource:(CPLResource *)arg1 ofRecord:(CPLRecordChange *)arg2 didStartHandler:(void (^)(void))arg3 progressHandler:(void (^)(float))arg4 completionHandler:(void (^)(NSError *))arg5;
- (BOOL)supportsDelayedUploads;
@end

