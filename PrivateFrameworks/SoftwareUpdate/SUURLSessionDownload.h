//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSString, NSURLSession;

@interface SUURLSessionDownload : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    struct dispatch_queue_s *_taskQueue;
    NSMutableArray *_dates;
    NSMutableArray *_lengthNumbers;
    NSMutableArray *_activeTaskIdentifiers;
    NSArray *_packageIdentifiersToInstall;
    long long _downloadSize;
    long long _numCLTimeouts;
    struct dispatch_queue_s *_progressQueue;
    struct dispatch_queue_s *_processPackagesQueue;
    BOOL _canRetry;
    BOOL _waitingOnTasks;
    CDUnknownBlockType _replyBlock;
    NSString *_sessionIdentifier;
    id <SUURLSessionDownloadDelegate> _delegate;
    BOOL _backgroundSession;
    BOOL _isCancelled;
    long long _totalBytesWritten;
    NSString *_productKey;
}

@property(readonly) NSString *productKey; // @synthesize productKey=_productKey;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly) long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(readonly) BOOL backgroundSession; // @synthesize backgroundSession=_backgroundSession;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)_processDownloadedFileAtPath:(id)arg1 withPackageInfo:(id)arg2 replyWhenDone:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)_updateProgressData;
- (float)averageBytesPerSecond;
- (void)cancelAndSaveResumeData:(BOOL)arg1;
- (void)cancel;
- (id)error;
- (void)startDownloadingPackagesWithIdentifiers:(id)arg1;
- (BOOL)_contentLocatorURLForOriginalURL:(id)arg1 outModifiedURL:(id *)arg2;
- (void)_retryDownloadForPackageIdentifier:(id)arg1 withPackageRef:(id)arg2 originalIdentifier:(unsigned long long)arg3 forNetworkRetry:(BOOL)arg4;
- (id)_backgroundConfiguration;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 productKey:(id)arg2 downloadSize:(long long)arg3 forBackgroundTasks:(BOOL)arg4 delegate:(id)arg5 replyWhenFinished:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
