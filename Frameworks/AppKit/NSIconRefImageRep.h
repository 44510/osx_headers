//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSBitmapImageRep;

@interface NSIconRefImageRep : NSImageRep
{
    struct OpaqueIconRef *_iconRef;
    unsigned int _sizeIdentifier;
    unsigned int _scaleIdentifier;
    NSBitmapImageRep *_fallbackBitmap;
}

- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_fallbackBitmap;
- (BOOL)_isValid;
- (BOOL)hasAlpha;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (BOOL)draw;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage *)_copyCGImage;
- (id)description;
- (unsigned int)scaleIdentifier;
- (unsigned int)sizeIdentifier;
- (struct OpaqueIconRef *)iconRef;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)initWithIconRef:(struct OpaqueIconRef *)arg1 sizeIdentifier:(unsigned int)arg2 scaleIdentifier:(unsigned int)arg3;

@end

