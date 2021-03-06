//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICCameraDeviceDownloadDelegate.h"
#import "NSPathControlDelegate.h"

@class ICCameraDevice, ICCameraItem, NSString, NSTimer, NSURL, NSWindow, TakePictureContainer;

__attribute__((visibility("hidden")))
@interface TakePictureHandler : NSObject <ICCameraDeviceDownloadDelegate, NSPathControlDelegate>
{
    NSWindow *_window;
    TakePictureContainer *_container;
    long long _downloadMode;
    ICCameraDevice *_cameraDevice;
    ICCameraItem *_currentCameraItem;
    long long _downloadUnit;
    long long _downloadInterval;
    BOOL _downloadImages;
    NSURL *_downloadURL;
    BOOL _deleteAfterDownloading;
    BOOL _running;
    BOOL _timerMode;
    long long _timerMax;
    long long _timerMin;
    long long _timeIntervalInSeconds;
    NSString *_timeRemaining;
    NSTimer *_timer;
    id _delegate;
    NSURL *_lastDownloadedURL;
    struct CGImage *_lastThumbnail;
    NSString *_currentImageID;
    NSString *_manualTakePictureLabel;
    BOOL lastFullKeyboardAccessEnabled;
}

@property(copy) NSString *manualTakePictureLabel; // @synthesize manualTakePictureLabel=_manualTakePictureLabel;
@property(copy) NSString *currentImageID; // @synthesize currentImageID=_currentImageID;
@property ICCameraItem *currentCameraItem; // @synthesize currentCameraItem=_currentCameraItem;
@property BOOL timerMode; // @synthesize timerMode=_timerMode;
@property(copy) NSURL *lastDownloadedURL; // @synthesize lastDownloadedURL=_lastDownloadedURL;
@property id delegate; // @synthesize delegate=_delegate;
@property long long timerMin; // @synthesize timerMin=_timerMin;
@property long long timerMax; // @synthesize timerMax=_timerMax;
@property(nonatomic) long long timeIntervalInSeconds; // @synthesize timeIntervalInSeconds=_timeIntervalInSeconds;
@property(copy) NSString *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property BOOL running; // @synthesize running=_running;
@property(nonatomic) BOOL deleteAfterDownloading; // @synthesize deleteAfterDownloading=_deleteAfterDownloading;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property BOOL downloadImages; // @synthesize downloadImages=_downloadImages;
@property ICCameraDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(nonatomic) long long downloadInterval; // @synthesize downloadInterval=_downloadInterval;
@property(nonatomic) long long downloadUnit; // @synthesize downloadUnit=_downloadUnit;
@property(nonatomic) long long downloadMode; // @synthesize downloadMode=_downloadMode;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)gotThumbnailForItem:(id)arg1;
- (id)uniqueNameFromItem:(id)arg1;
- (void)didAddItem:(id)arg1;
- (void)updateTimeRemaining;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (void)handleTimer:(id)arg1;
- (void)takePicture:(id)arg1;
- (void)updatePathControlToolTip:(id)arg1;
- (void)pathControlChanged:(id)arg1;
- (void)pathControl:(id)arg1 willPopUpMenu:(id)arg2;
- (void)pathControl:(id)arg1 willDisplayOpenPanel:(id)arg2;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)handleTakePictureKeyDown:(id)arg1;
- (void)keyDownNotification:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)closeUI:(BOOL)arg1;
- (void)quietSetDeleteAfterDownloading:(BOOL)arg1;
- (void)deleteAfterDownloadChanged:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateManualTakePictureLabel;
- (void)showUI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

