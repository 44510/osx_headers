//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

__attribute__((visibility("hidden")))
@interface NVTableRowView : NSTableRowView
{
    double _leadMargin;
    double _trailMargin;
    BOOL hollow;
    BOOL _autoMargin;
}

@property BOOL autoMargin; // @synthesize autoMargin=_autoMargin;
@property BOOL hollow; // @synthesize hollow;
@property double trailMargin;
@property double leadMargin;
- (double)autoMarginTrail;
- (double)autoMarginLead;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)_drawSeparatorLineWithHighlight:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

