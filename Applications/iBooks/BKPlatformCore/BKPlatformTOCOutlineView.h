//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@interface BKPlatformTOCOutlineView : NSOutlineView
{
    BOOL _isExpandAnimationDisabled;
}

@property(nonatomic) BOOL isExpandAnimationDisabled; // @synthesize isExpandAnimationDisabled=_isExpandAnimationDisabled;
- (void)insertRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)mouseDown:(id)arg1;

@end
