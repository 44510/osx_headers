//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "RemoteConfigurationConsumer.h"

@class NSMutableData, NSMutableDictionary, NSString, NSTimer, NSURLConnection, NSURLResponse;

__attribute__((visibility("hidden")))
@interface RemoteConfigurationsController : NSObject <NSURLConnectionDataDelegate, RemoteConfigurationConsumer>
{
    NSMutableDictionary *_consumersByKey;
    unsigned long long _downloadAttemptsCount;
    NSTimer *_startDownloadTimer;
    double _successfulDownloadInterval;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (BOOL)remoteConfigurationsController:(id)arg1 didReceiveNewConfiguration:(id)arg2 forKey:(id)arg3;
- (void)_initializeSuccessfulDownloadIntervalIfNeeded;
- (BOOL)_notifyConsumersOfNewConfigurations:(id)arg1;
- (id)_takeDataFromLoader;
- (void)_downloadCompleted;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_scheduleNextDownload;
- (id)_requestForDownloadingNewConfiguration;
- (double)_intervalBeforeNextDownload;
- (id)loadConfigurationForKey:(id)arg1 fromURL:(id)arg2;
- (id)loadConfigurationForKeyFromDisk:(id)arg1;
- (void)addConsumer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

