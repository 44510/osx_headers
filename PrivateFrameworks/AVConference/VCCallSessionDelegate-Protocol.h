//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString, VCCallSession, VCVideoRule, VideoAttributes;

@protocol VCCallSessionDelegate
- (void)closeConnectionForSession:(VCCallSession *)arg1 withCallID:(unsigned int)arg2;
- (void)session:(VCCallSession *)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)session:(VCCallSession *)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3;
- (void)didChangeLocalVariablesForSession:(VCCallSession *)arg1;
- (void)session:(VCCallSession *)arg1 didReceiveData:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 changeVideoRulesToCaptureRule:(VCVideoRule *)arg2 encodeRule:(VCVideoRule *)arg3 featuresListString:(NSString *)arg4;
- (void)session:(VCCallSession *)arg1 sendIPChangeRequest:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 didChangeVideoRule:(VCVideoRule *)arg2;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
- (void)session:(VCCallSession *)arg1 didChangeRemoteScreenAttributes:(VideoAttributes *)arg2;
- (_Bool)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
- (void)session:(VCCallSession *)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(VCCallSession *)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)session:(VCCallSession *)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(VCCallSession *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 sendRelayResponse:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 inititiateRelayRequest:(NSDictionary *)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (_Bool)stopVideoIO:(BOOL)arg1 error:(id *)arg2;
- (_Bool)session:(VCCallSession *)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_198678f7)arg3 withScreenAttributes:(VideoAttributes *)arg4 videoAttributes:(VideoAttributes *)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
- (_Bool)session:(VCCallSession *)arg1 startVideoIO:(id *)arg2 captureRule:(VCVideoRule *)arg3 isUnpausing:(BOOL)arg4;
- (void)session:(VCCallSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)session:(VCCallSession *)arg1 didStopWithDelay:(long long)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didStart:(BOOL)arg2 connectionType:(unsigned int)arg3 localUseCell:(unsigned int)arg4 remoteUseCell:(unsigned int)arg5 error:(NSError *)arg6;
@end

