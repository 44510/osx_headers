//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GFrame.h"

@class NSMutableArray;

@interface GFrame3D : GFrame
{
    NSMutableArray *mGLFrames;
}

+ (id)defaultAttributes;
- (void)addItemsToContextualMenu:(id)arg1;
- (BOOL)selectable;
- (void)glDraw:(BOOL)arg1;
- (void)updateAttribute;
- (void)update;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

