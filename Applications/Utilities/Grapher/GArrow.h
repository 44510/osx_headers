//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPathObject.h"

@interface GArrow : GPathObject
{
}

+ (id)defaultAttributes;
- (struct CGPoint)handlePosition:(unsigned long long)arg1 forRect:(struct CGRect)arg2;
- (unsigned long long)handleCount;
- (void)drawContent;
- (BOOL)automaticPinPosition:(struct CGPoint *)arg1;
- (id)createPath;
- (struct CGPoint)endPoint:(struct CGRect)arg1;
- (struct CGPoint)startPoint:(struct CGRect)arg1;
- (BOOL)correctBoundsRect;
- (BOOL)useImageCache;

@end

