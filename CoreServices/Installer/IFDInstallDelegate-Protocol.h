//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IFDocument, NSError, NSString;

@protocol IFDInstallDelegate
- (void)installRequestedMediaAccepted:(BOOL)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installRequestMedia:(NSString *)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installError:(NSError *)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installTimeRemaining:(NSString *)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installPercentageComplete:(double)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installPhase:(NSString *)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installStatus:(NSString *)arg1 forInstallDocument:(IFDocument *)arg2;
- (void)installFinishedForInstallDocument:(IFDocument *)arg1;
- (void)installStartedForInstallDocument:(IFDocument *)arg1;

@optional
- (void)installStartedJob:(NSString *)arg1 forInstallDocument:(IFDocument *)arg2;
@end
