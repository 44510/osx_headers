//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString, NSURLSessionConfiguration;

@interface NSURLSession : NSObject
{
    BOOL _invalid;
    BOOL __isSharedSession;
    NSOperationQueue *_delegateQueue;
    id <NSURLSessionDelegate> _delegate;
    NSString *_sessionDescription;
    NSURLSessionConfiguration *__local_immutable_configuration;
    struct dispatch_queue_s *_workQueue;
    NSOperationQueue *_realDelegateQueue;
    CDUnknownBlockType __connBlock;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)sharedSession;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
@property(copy) CDUnknownBlockType _connBlock; // @synthesize _connBlock=__connBlock;
@property BOOL _isSharedSession; // @synthesize _isSharedSession=__isSharedSession;
@property(retain) NSOperationQueue *realDelegateQueue; // @synthesize realDelegateQueue=_realDelegateQueue;
@property BOOL invalid; // @synthesize invalid=_invalid;
@property struct dispatch_queue_s *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSURLSessionConfiguration *_local_immutable_configuration; // @synthesize _local_immutable_configuration=__local_immutable_configuration;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
@property(retain) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)delegate_streamTask:(id)arg1 didCreateInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)can_delegate_streamTask_didCreateInputStreamoutputStream;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didBecomeStreamTask;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (BOOL)can_delegate_willRetryBackgroundDataTask;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (BOOL)can_delegate_task_conditionalRequirementsChanged;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (BOOL)can_delegate_task_isWaitingForConnection;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)can_delegate_task_actually_didCompleteWithError;
- (BOOL)can_delegate_task_didCompleteWithError;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (BOOL)can_delegate_task_didSendBodyData;
- (void)delegate_task:(id)arg1 needNewBodyStream:(CDUnknownBlockType)arg2;
- (BOOL)can_delegate_task_needNewBodyStream;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (BOOL)can_delegate_openFileAtPath;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)can_delegate_didReceiveChallenge;
- (void)addDelegateBlock:(CDUnknownBlockType)arg1;
- (id)streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (BOOL)isBackgroundSession;
@property(readonly, copy) NSURLSessionConfiguration *configuration;
- (void)finalizeDelegateWithError:(id)arg1;
- (id)_copyConfiguration;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

