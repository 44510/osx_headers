//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDTable, WDTableRowProperties;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject
{
    unsigned long long mIndex;
    WDTable *mTable;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}

- (id)description;
- (id)newCellIterator;
- (id)cellIterator;
- (id)addCellWithIndex:(unsigned long long)arg1;
- (id)addCell;
- (id)cellAt:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (id)properties;
- (id)table;
- (unsigned long long)index;
- (void)dealloc;
- (id)initWithTable:(id)arg1 at:(unsigned long long)arg2;
- (void)setIndex:(unsigned long long)arg1;

@end

