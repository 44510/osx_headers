//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class EQEquation, EQSelection;

@interface EQCaption : NSView
{
    EQEquation *mEquation;
    EQSelection *mSelection;
    unsigned long long mAlignment;
}

- (void)selectOutlinedChars;
- (void)setSelection:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (id)equation;
- (void)setText:(id)arg1;
- (void)setEquation:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

