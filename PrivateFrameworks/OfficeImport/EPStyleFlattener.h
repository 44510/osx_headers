//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDProcessor.h>

@class ECIntToTwoIntKeyCache, EDColumnInfoCollection, EDRowBlock, EDRowBlocks, EDWorksheet, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EPStyleFlattener : EDProcessor
{
    EDWorksheet *mWorksheet;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    EDColumnInfoCollection *mColumnInfos;
    NSArray *mKeys;
    NSMutableArray *mRanges;
    ECIntToTwoIntKeyCache *mFlattenedStyleCache;
    ECIntToTwoIntKeyCache *mFillCache;
    int mFirstRow;
    int mLastRow;
    int mFirstColumn;
    int mLastColumn;
    unsigned int mFirstRowStripeSize;
    unsigned int mSecondRowStripeSize;
    unsigned int mFirstColumnStripeSize;
    unsigned int mSecondColumnStripeSize;
}

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)dealloc;
- (id)copyFlattenFont:(id)arg1 differentialFont:(id)arg2;
- (unsigned long long)flattenFillIndex:(unsigned long long)arg1 differentialFill:(id)arg2;
- (id)copyFlattenBorder:(int)arg1 borders:(id)arg2 differentialBorders:(id)arg3 flag:(_Bool)arg4 precedence:(unsigned long long)arg5 row:(int)arg6 column:(int)arg7;
- (id)copyFlattenBorders:(id)arg1 differentialBorders:(id)arg2 borderFlags:(int)arg3 precedence:(unsigned long long)arg4 row:(int)arg5 column:(int)arg6;
- (void)applyDifferentialStyle:(id)arg1 borderFlags:(int)arg2 precedence:(unsigned long long)arg3 toCell:(struct EDCellHeader **)arg4 row:(int)arg5 column:(int)arg6;
- (void)applyStyleElements:(id)arg1 toCell:(struct EDCellHeader *)arg2 row:(int)arg3 column:(int)arg4;
- (struct EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)arg1 columnNumber:(int)arg2;
- (void)processObject:(id)arg1;
- (void)clearCache;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)cacheRange:(id)arg1;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)newExtractedGlobalStyleElements:(id)arg1;
- (id)newExtractedKeys:(id)arg1 from:(id)arg2 parent:(id)arg3;
- (id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(int)arg2;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;

@end

