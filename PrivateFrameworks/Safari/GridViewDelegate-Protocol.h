//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GridView, NSIndexSet;

@protocol GridViewDelegate <NSObject>

@optional
- (unsigned long long)gridView:(GridView *)arg1 indexOfCellReplacedByDrop:(id <NSDraggingInfo>)arg2;
- (NSIndexSet *)indexesOfCellsWithFixedLocationDuringDraggingInGridView:(GridView *)arg1;
- (void)gridView:(GridView *)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
@end
