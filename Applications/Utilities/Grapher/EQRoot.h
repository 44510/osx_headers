//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EQZone.h"

@interface EQRoot : EQZone
{
}

+ (id)rootWithDiscriminent:(id)arg1;
+ (id)zoneWithSelection:(id)arg1;
- (void)appendOperationToString:(id)arg1;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (void)drawSelfInRect:(struct CGRect)arg1;
- (void)setContentPosition;
- (double)minHeight;
- (id)discriminent;
- (id)initWithParent:(id)arg1 discriminent:(id)arg2;
- (id)prefix;
- (id)LaTeXExpression;

@end

