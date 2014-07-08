//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

@class CalUITokenFieldController, NSImage;

@interface CalUITokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _attendeeHasAddress;
    struct CGSize _cachedCellSize;
    struct CGRect _boundsForCellSize;
    float _attributedStringWidth;
    struct CGRect _cachedCellFrame;
    BOOL _statusImageIsHighlighted;
    BOOL _statusImageIsSelected;
    CalUITokenFieldController *_tokenFieldController;
    NSImage *_statusImage;
    struct CGRect _previousCellSizeForBoundsBounds;
}

+ (id)cellTitleFont;
@property BOOL statusImageIsSelected; // @synthesize statusImageIsSelected=_statusImageIsSelected;
@property BOOL statusImageIsHighlighted; // @synthesize statusImageIsHighlighted=_statusImageIsHighlighted;
@property(retain) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property struct CGRect previousCellSizeForBoundsBounds; // @synthesize previousCellSizeForBoundsBounds=_previousCellSizeForBoundsBounds;
@property struct CGSize cachedCellSize; // @synthesize cachedCellSize=_cachedCellSize;
@property(retain) CalUITokenFieldController *tokenFieldController; // @synthesize tokenFieldController=_tokenFieldController;
- (void).cxx_destruct;
- (double)backgroundRectVerticalOffset;
- (double)imagelessTitleBaselineOffset;
- (double)titleBaselineOffset;
- (double)statusIconVerticalOffset;
- (double)lineSpacing;
- (double)imagelessCellSizeHeightOffset;
- (double)titleRectHorizontalOffset;
- (double)cellSizeHeightOffset;
- (double)cellSizeWidthOffset;
- (id)statusIcon;
- (id)attributedStringValue;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)pullDownRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)shouldHideMenu;
- (BOOL)shouldDrawBackground;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (void)setRepresentedObject:(id)arg1;

@end

