//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBitmapGraphicsContext.h>

@class NSMutableData, NSSnapshotContextSignature;

__attribute__((visibility("hidden")))
@interface NSSnapshotBitmapGraphicsContext : NSBitmapGraphicsContext
{
    NSSnapshotContextSignature *signature;
    NSMutableData *backingData;
}

@property(retain, nonatomic) NSMutableData *backingData; // @synthesize backingData;
@property(retain, nonatomic) NSSnapshotContextSignature *signature; // @synthesize signature;
- (struct CGImage *)retainedCGImage;
- (void)dealloc;

@end
