//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@interface BKPlatformBookmarkTableRowView : NSTableRowView
{
}

+ (void)initialize;
- (long long)interiorBackgroundStyle;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)p_drawOverlayColor:(id)arg1 inRect:(struct CGRect)arg2;
- (id)p_rowViewBelowMine;
- (id)p_rowViewAboveMine;
- (id)p_twoRowViewsAboveMine;
- (id)p_rowViewAtIndex:(long long)arg1;
- (struct CGRect)p_separatorRect;
- (id)p_tableView;

@end

