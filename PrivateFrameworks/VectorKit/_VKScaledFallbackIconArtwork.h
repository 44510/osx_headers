//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKIconArtwork.h>

__attribute__((visibility("hidden")))
@interface _VKScaledFallbackIconArtwork : VKIconArtwork
{
    VKIconArtwork *_artwork;
    struct CGSize _size;
}

- (id).cxx_construct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithArtwork:(id)arg1 contentScale:(double)arg2;

@end

