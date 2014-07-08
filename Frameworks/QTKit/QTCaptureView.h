//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "QTImageConsumerDelegateHelper.h"

@class NSString, QTCaptureViewInternal;

@interface QTCaptureView : NSView <QTImageConsumerDelegateHelper>
{
    QTCaptureViewInternal *_internal;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (void)initialize;
- (void)formatDidChange:(id)arg1;
- (void)_applyDelegateHelperToRenderer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVideoPreviewConnection:(id)arg1;
- (id)videoPreviewConnection;
- (void)setAvailableVideoPreviewConnections:(id)arg1;
- (id)availableVideoPreviewConnections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateVideoPreviewConnectionFromVideoPreviewOutput;
- (void)setCaptureSession:(id)arg1;
- (id)captureSession;
- (void)setPreservesAspectRatio:(BOOL)arg1;
- (BOOL)preservesAspectRatio;
- (void)setFillColor:(id)arg1;
- (id)fillColor;
- (BOOL)isOpaque;
- (void)_updateRendererView;
- (void)setLayer:(id)arg1;
- (struct CGRect)previewBounds;
- (void)_drawIBPreviewInRect:(struct CGRect)arg1;
- (void)_setCaptureViewDoesNeedLayoutOnMainThread;
- (void)_setCaptureViewNeedsLayout:(BOOL)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_alteredImageForImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

