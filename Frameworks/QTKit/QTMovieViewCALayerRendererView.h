//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QTKit/QTCALayerRendererView.h>

@class FigCaptionLayer, NSTimer, QTPerformanceInfoTimerTarget, QTSubtitleLayer;

__attribute__((visibility("hidden")))
@interface QTMovieViewCALayerRendererView : QTCALayerRendererView
{
    QTSubtitleLayer *_subtitleLayer;
    FigCaptionLayer *_closedCaptionLayer;
    QTPerformanceInfoTimerTarget *_timerTarget;
    NSTimer *_diagnosticsTimer;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_qtMovieClosedCaptionVisibilityDidChange:(id)arg1;
- (void)_qtMovieSubtitleVisibilityDidChange:(id)arg1;
- (void)_qtMovieClosedCaptionDidChange:(id)arg1;
- (void)_qtMovieSubtitleDidChange:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isOpaque;
- (id)_createLayer;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;

@end

