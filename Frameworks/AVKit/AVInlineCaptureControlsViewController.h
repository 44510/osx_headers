//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVCaptureControlsRecordingViewController.h>

@class NSView;

@interface AVInlineCaptureControlsViewController : AVCaptureControlsRecordingViewController
{
    NSView *_initialFirstResponder;
    double _unmutedVolume;
    CDUnknownBlockType _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (void)volumeButtonPressed:(id)arg1;
- (id)initialFirstResponder;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)recordButtonStopImage;
- (id)recordButtonRecordImage;
- (id)recordButtonPauseImage;
- (void)setupNextKeyView;
- (void)loadView;

@end

