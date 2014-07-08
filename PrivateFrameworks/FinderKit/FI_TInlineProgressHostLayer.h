//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TInlineProgressBaseHostLayer.h>

__attribute__((visibility("hidden")))
@interface FI_TInlineProgressHostLayer : FI_TInlineProgressBaseHostLayer
{
    struct TNSRef<FI_TInlineCancelButtonLayer *> _cancelLayer;
    struct CGRect _iconFrame;
    double _baselineOffset;
}

@property(readonly, nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(readonly, nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hitTestCancelLayer:(const struct CGPoint *)arg1;
- (void)setIconFrame:(const struct CGRect *)arg1 baselineOffset:(double)arg2;
@property(nonatomic) _Bool cancelIsPressed; // @dynamic cancelIsPressed;
@property(nonatomic) _Bool canCancel; // @dynamic canCancel;
- (void)_setCancelFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect cancelFrame; // @dynamic cancelFrame;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (id)initWithCancel:(_Bool)arg1 initialPercentComplete:(double)arg2;
- (void)removeCancelLayer;
- (void)addCancelLayer;
- (void)adjustCancelLayerFrame;

@end

