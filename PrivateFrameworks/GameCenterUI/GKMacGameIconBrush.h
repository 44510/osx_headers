//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

#import "GKBrushIdentification.h"

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification>
{
    struct CGSize _outputSize;
}

@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (struct CGSize)sizeForInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

