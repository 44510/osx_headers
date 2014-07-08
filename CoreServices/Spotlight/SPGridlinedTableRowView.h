//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPBaseTableRowView.h"

@class NSLayoutConstraint;

@interface SPGridlinedTableRowView : SPBaseTableRowView
{
    int _gridline;
    double _inset;
    NSLayoutConstraint *_aboveConstraint;
    NSLayoutConstraint *_belowConstraint;
}

@property(nonatomic) int gridline; // @synthesize gridline=_gridline;
@property(retain) NSLayoutConstraint *belowConstraint; // @synthesize belowConstraint=_belowConstraint;
@property(retain) NSLayoutConstraint *aboveConstraint; // @synthesize aboveConstraint=_aboveConstraint;
@property double inset; // @synthesize inset=_inset;
- (void).cxx_destruct;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
@property(nonatomic, getter=isGridlinedBelow) BOOL gridlinedBelow;
- (void)setGroupRowStyle:(BOOL)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

