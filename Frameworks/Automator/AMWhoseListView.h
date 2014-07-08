//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSHashTable;

@interface AMWhoseListView : NSView
{
    double _headingHeight;
    double _subviewLeftMargin;
    double _gutterThickness;
    NSHashTable *_expandedSubviews;
    struct {
        unsigned int ignoreSubviewFrameChanges:1;
        unsigned int isDeallocating:1;
        unsigned int ignoreSubviewAdditionAndRemoval:1;
        unsigned int RESERVED:29;
    } _vlvFlags;
    unsigned long long _disableSubviewLayout;
    unsigned long long _needsSubviewLayoutFromIndex;
}

- (void)removeSubviewAtIndex:(unsigned long long)arg1;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfSubview:(id)arg1;
- (id)subviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubviews;
- (void)layoutSubviews;
- (void)reenableSubviewLayout;
- (void)disableSubviewLayout;
- (void)collapseSubview:(id)arg1;
- (void)expandSubview:(id)arg1;
- (BOOL)isSubviewExpanded:(id)arg1;
- (void)subviewFrameChanged:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)_layoutSubviewsIfNeeded;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ignoringSubview:(id)arg3;
- (void)setGutterThickness:(double)arg1;
- (double)gutterThickness;
- (void)setSubviewLeftMargin:(double)arg1;
- (double)subviewLeftMargin;
- (void)setHeadingHeight:(double)arg1;
- (double)headingHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

