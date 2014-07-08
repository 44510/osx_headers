//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGRecordingDocument.h"

#import "MGInspectionAttributeContainer.h"

@class AVPlayer, MGCaptureAudioPreviewOutput, MGCaptureCompressionPreset, MGCaptureDeviceSelectionController, MGDocumentViewController<MGVisualContentContainer>, NSArray, NSString;

@interface MGAudioOnlyRecordingDocument : MGRecordingDocument <MGInspectionAttributeContainer>
{
    MGDocumentViewController<MGVisualContentContainer> *_mainViewController;
    MGCaptureCompressionPreset *_compressionPreset;
    unsigned int _deviceRecordingDocumentFlags;
    MGCaptureDeviceSelectionController *_captureDeviceSelectionController;
    MGCaptureAudioPreviewOutput *_captureAudioPreviewOutput;
    NSArray *_availableCompressionPresets;
}

+ (id)keyPathsForValuesAffectingOutputFileType;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingInspectionAttributes;
@property(readonly, nonatomic) NSArray *availableCompressionPresets; // @synthesize availableCompressionPresets=_availableCompressionPresets;
@property(readonly, nonatomic) MGCaptureAudioPreviewOutput *captureAudioPreviewOutput; // @synthesize captureAudioPreviewOutput=_captureAudioPreviewOutput;
@property(readonly, nonatomic) MGCaptureDeviceSelectionController *captureDeviceSelectionController; // @synthesize captureDeviceSelectionController=_captureDeviceSelectionController;
- (void).cxx_destruct;
- (void)startRecording;
- (void)workspaceSessionDidBecomeActive:(id)arg1;
- (void)workspaceSessionDidResignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)makeSureDevicesAreSelectedIfPossible;
- (void)updateCaptureSessionRunningState;
- (id)outputFileType;
- (id)baseOutputFileName;
- (void)updateCompressionPresets;
@property(retain, nonatomic) MGCaptureCompressionPreset *compressionPreset;
- (void)close;
- (void)viewControllerDidLoadView:(id)arg1;
- (id)mainViewController;
- (id)initWithRecordingType:(unsigned long long)arg1;
- (id)init;
@property(readonly) NSString *inspectionTitle;
@property(readonly) NSArray *inspectionInformation;
@property(readonly) NSArray *inspectionAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) AVPlayer *player;
@property(readonly) Class superclass;

@end

