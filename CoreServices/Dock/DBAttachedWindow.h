//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBAttachedWindow : NSObject
{
    unsigned int _cid;
    unsigned int _wid;
    int _options;
    unsigned int _ordered:1;
    unsigned int _widget_window:1;
    unsigned int _closebox_window:1;
    unsigned int _release_window:1;
}

@property(readonly, nonatomic) unsigned int window; // @synthesize window=_wid;
@property(readonly, nonatomic) _Bool isCloseBox; // @synthesize isCloseBox=_closebox_window;
@property(nonatomic) _Bool ordered; // @synthesize ordered=_ordered;
- (int)setResolution:(double)arg1;
- (void)move:(struct CGPoint)arg1;
- (void)setShape:(struct CGSRegionObject *)arg1 weighting:(int)arg2;
- (void)order:(int)arg1 other:(unsigned int)arg2;
- (void)setWindowLevel:(int)arg1;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
@property(readonly, nonatomic) _Bool isSpecial; // @dynamic isSpecial;
@property(readonly, nonatomic) _Bool sameSize; // @dynamic sameSize;
- (void)dealloc;
- (id)initWithSpecialType:(unsigned int)arg1 wid:(unsigned int)arg2 type:(int)arg3;
- (id)initWithRect:(unsigned int)arg1 rect:(struct CGRect)arg2 tags:(unsigned int [2])arg3 options:(int)arg4 level:(int)arg5;

@end

