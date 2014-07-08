//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSIndexSet, NSObjectController;

@interface IBaseTableViewController : TViewController
{
    NSObjectController *_dataSource;
    NSIndexSet *_columnIndexesToResizeToFitContents;
}

@property(retain, nonatomic) NSIndexSet *columnIndexesToResizeToFitContents; // @synthesize columnIndexesToResizeToFitContents=_columnIndexesToResizeToFitContents;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateColumnWidthsToFitContents;
- (id)selectionIndexesForProposedSelection:(id)arg1;
- (void)addColumn:(id)arg1;
- (void)setView:(id)arg1;
- (id)_dataSource;
- (Class)dataSourceClass;
- (void)finalize;
- (void)dealloc;
- (void)viewLoaded;

@end

