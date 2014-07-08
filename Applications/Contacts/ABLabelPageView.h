//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ABPreviewableViewProtocol.h"

@class ABLabelModel, ABPrintInfo, NSDictionary, NSMutableArray;

@interface ABLabelPageView : NSView <ABPreviewableViewProtocol>
{
    ABPrintInfo *_labelDesc;
    NSMutableArray *_labelViews;
    NSMutableArray *_addressList;
    NSDictionary *_options;
    ABLabelModel *_model;
    BOOL _isPreview;
}

- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)labelDescription;
- (void)setLabelDescription:(id)arg1;
- (struct CGRect)previewFrame;
- (void)revert:(id)arg1;
- (void)updateLayout;
- (void)updateLayoutScales;
- (void)addAddress:(id)arg1;
- (void)removeAllLabels;
- (void)setAddressList:(id)arg1;
- (void)setIsPreview:(BOOL)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initWithLabelDescription:(id)arg1 model:(id)arg2;

@end

