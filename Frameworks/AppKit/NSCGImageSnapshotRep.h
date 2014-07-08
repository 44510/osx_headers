//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSSnapshotContextSignature;

@interface NSCGImageSnapshotRep : NSImageRep
{
    struct CGImage *_cgImage;
    NSSnapshotContextSignature *_signature;
}

+ (id)unlockFocusCreatingCGImageSnapshotRep;
+ (struct CGImage *)unlockFocusCreatingCGImageAndDrawingRect:(struct CGRect *)arg1;
+ (struct CGImage *)_unlockFocusAndPerformBlockUsingCGImageAndCapturingContext:(CDUnknownBlockType)arg1;
+ (void)lockFocusForCreatingSnapshotWithRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
+ (void)lockFocusForCreatingCGImageWithRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
+ (void)_lockFocusForCreatingSnapshot:(BOOL)arg1 withRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(BOOL)arg5;
+ (BOOL)_deprecated_hasReversedFlippednessInFlippedImages;
+ (id)classFallbacksForKeyedArchiver;
- (BOOL)_isValid;
- (BOOL)hasAlpha;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (long long)bitsPerSample;
- (id)colorSpace;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForArchiver;
- (BOOL)draw;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage *)_snapshotRep_CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (BOOL)isApplicableForRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3;
- (id)fullDescription;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCGImage:(struct CGImage *)arg1 drawingRect:(struct CGRect)arg2 applicableForRect:(struct CGRect)arg3 context:(id)arg4 hints:(id)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 snapshotContextSignature:(id)arg2;
- (BOOL)_snapshotRep_commonSetupWithWithCGImage:(struct CGImage *)arg1 snapshotContextSignature:(id)arg2;

@end

