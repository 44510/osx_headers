//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MGMovieExportSessionHelperDelegate.h"

@class MGMediaComposition, NSString;

@interface MGMovieExportSession : NSObject <MGMovieExportSessionHelperDelegate>
{
    id <MGMovieExportSessionHelper> _exportSession;
    id <MGMovieExportSessionDelegate> _delegate;
    MGMediaComposition *_mediaComposition;
}

- (void).cxx_destruct;
- (void)exportSessionDidCancel;
- (void)exportSessionDidFailWithError:(id)arg1;
- (void)exportSessionDidSucceed;
- (void)exportSessionDidReachPercentProgress:(float)arg1;
- (void)cancel;
- (id)initWithMediaComposition:(id)arg1 exportParameters:(id)arg2 sessionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

