//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "MGMovieExportSessionDelegate.h"

@class MGMediaComposition, MGMovieExportSession, NSDictionary, NSError, NSString;

@interface MGExportOperation : NSOperation <MGMovieExportSessionDelegate>
{
    MGMovieExportSession *_exportSession;
    MGMediaComposition *_mediaComposition;
    unsigned int _executing:1;
    unsigned int _finished:1;
    unsigned int _cancelled:1;
    float _progress;
    NSDictionary *_exportParameters;
    NSError *_error;
}

@property float progress; // @synthesize progress=_progress;
@property(copy) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly) NSString *localizedStatusMessage;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)exportSession:(id)arg1 didFailWithError:(id)arg2;
- (void)exportSessionDidCancel:(id)arg1;
- (void)exportSessionDidSucceed:(id)arg1;
- (void)exportSession:(id)arg1 didReachPercentProgress:(float)arg2;
- (void)exportSessionDidStart:(id)arg1;
- (void)handleExportSessionDidCancel;
- (void)handleExportSessionDidFinish;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithMediaComposition:(id)arg1 exportParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

