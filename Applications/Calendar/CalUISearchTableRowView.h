//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class CalUISearchOccurrenceListController;

@interface CalUISearchTableRowView : NSTableRowView
{
    BOOL _isBottomRow;
    BOOL _isTopRow;
    CalUISearchOccurrenceListController *_listController;
}

@property BOOL isTopRow; // @synthesize isTopRow=_isTopRow;
@property BOOL isBottomRow; // @synthesize isBottomRow=_isBottomRow;
@property(retain) CalUISearchOccurrenceListController *listController; // @synthesize listController=_listController;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)makeTopRow;
- (void)makeBottomRow;
- (id)initWithController:(id)arg1;

@end

