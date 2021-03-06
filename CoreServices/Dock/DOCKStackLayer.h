//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECEventHandling.h"
#import "ECEventHandlingDelegate.h"

@class DOCKStack, NSString;

@interface DOCKStackLayer : CALayer <ECEventHandling, ECEventHandlingDelegate>
{
    DOCKStack *_stack;
    NSString *_title;
    id <ECLayerSource> _layerSource;
}

@property(nonatomic) __weak id <ECLayerSource> layerSource; // @synthesize layerSource=_layerSource;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak DOCKStack *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (void)layerSourceInvalidated:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)layerSourceInvalidated:(id)arg1;
@property(readonly, nonatomic) unsigned long long maximumViewableItems; // @dynamic maximumViewableItems;
- (id)itemLayersForRange:(struct _NSRange)arg1;
- (id)itemLayerForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange actualItemRange; // @dynamic actualItemRange;
@property(readonly, nonatomic) struct _NSRange visibleItemRange; // @dynamic visibleItemRange;
- (id)initWithStack:(id)arg1 usingLayerSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

