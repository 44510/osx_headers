//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface TMACollectionSelectionView : NSView
{
    struct CGSize _selectionSize;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGPoint offset;
- (struct CGSize)intrinsicContentSize;
- (id)hitTest:(struct CGPoint)arg1;

@end

