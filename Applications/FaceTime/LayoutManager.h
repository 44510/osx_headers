//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

@interface LayoutManager : NSLayoutManager
{
    BOOL _drawInset;
    BOOL _whiteOnBlackMode;
}

- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(id)arg5 attributes:(id)arg6 inContext:(id)arg7;
- (BOOL)whiteOnBlackMode;
- (void)setWhiteOnBlackMode:(BOOL)arg1;
- (BOOL)drawsInset;
- (void)setDrawsInset:(BOOL)arg1;

@end

