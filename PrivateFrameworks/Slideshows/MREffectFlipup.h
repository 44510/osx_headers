//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

#import "MZEffectTiming.h"

@class MRImage, MRImageProvider, NSArray, NSMutableDictionary;

@interface MREffectFlipup : MREffect <MZEffectTiming>
{
    NSMutableDictionary *mSprites;
    NSMutableDictionary *mBreakInformation;
    double mZPositions[6];
    double mXPositions[6];
    BOOL mIsLoaded;
    double mTiming[6];
    MRImageProvider *mGradientProvider;
    MRImage *mTextImage;
    NSArray *mSortDescriptors;
    BOOL mIsFirst;
    BOOL mIsText;
    long long _currentIterationIndex;
    BOOL _textWasUpdatedSinceLastRendering;
}

+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5;
+ (BOOL)hasCustomTiming;
+ (void)initialize;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getCurrentCenter:(struct CGPoint *)arg1 scale:(double *)arg2 rotation:(double *)arg3 isMain:(char *)arg4 forElement:(id)arg5;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (long long)_iterationForTime:(double)arg1;
- (double)_startTimeForIteration:(long long)arg1;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)loadPositions;
- (void)_applySizeScripts:(double)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (double)_aspectRatioForSlideIndex:(long long)arg1;
- (double)lowestDisplayTime;
- (double)displayTimeForTextAtIndex:(unsigned long long)arg1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
- (double)showDurationForSlideAtIndex:(unsigned long long)arg1;
- (double)showTimeForSlideAtIndex:(unsigned long long)arg1;
- (void)_applyTimingToSlideProviders;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (double)_movieDurationForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2;
- (BOOL)_isMovieForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2;
- (void)_setupForSlideInformation:(id)arg1 aspectRatio:(double)arg2;
- (double)_durationForEffect:(long long)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)setAttributes:(id)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) double mainDuration; // @dynamic mainDuration;
@property(readonly, nonatomic) double phaseInDuration; // @dynamic phaseInDuration;
@property(readonly, nonatomic) double phaseOutDuration; // @dynamic phaseOutDuration;

@end

