//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGMediaTimelineTrackPreview.h"

@class MGMovieThumbnailExtractionSession, VideoPreviewLayer;

@interface MGMediaTimelineTrackMovieVideoPreview : MGMediaTimelineTrackPreview
{
    VideoPreviewLayer *_previewLayer;
    MGMovieThumbnailExtractionSession *_thumbnailExtractionSession;
    struct CGSize _movieNaturalSize;
    struct CGSize _thumbnailSize;
    struct CGSize _lastPreviewLayerBoundsSize;
    CDStruct_900afa40 _mediaDuration;
    CDStruct_900afa40 _mediaTimeOffset;
    BOOL _thumbnailsAreInvalid;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)movieNaturalSizeDidChange:(id)arg1;
- (void)invalidateThumbnails;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)previewLayer;
- (void)setTimelineTrack:(id)arg1;
- (void)dealloc;

@end

